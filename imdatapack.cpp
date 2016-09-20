#include "imdatapack.h"
#include "GateServiceMsg.pb.h"

void IMDataPack::PackDataSend(Ui::MainWindow *ui,int fd)
{
    IMMessageHead head_data;

    head_data.msg_uid = ui->Msg_UID_Edit->toPlainText().toInt();
    head_data.msg_cmd = ui->Msg_CMD_Edit->toPlainText().toInt();
    head_data.length = ui->Msg_Length_Edit->toPlainText().toInt();
    head_data.reserved = ui->Msg_Reserved_Edit->toPlainText().toInt();

    QString QstrData = ui->Send_Edit->toPlainText();
    std::string strData = QstrData.toStdString();

    char *buf = new char[sizeof(IMMessageHead)+strData.length()];
    head_data.length = strData.length();

    memcpy(buf,&head_data,sizeof(IMMessageHead));
    memcpy(buf + sizeof(IMMessageHead),strData.c_str(),strData.length());

    send(fd,buf,sizeof(IMMessageHead)+strData.length(),0);
    delete[] buf;
}

void IMDataPack::GetRspData(Ui::MainWindow *ui,int fd)
{
    IMMessageHead head_data;
    char head[HEAD_LENGTH] = {0};

    recv(fd,head,HEAD_LENGTH,0);

    ParseHead(head,head_data);

    char* pBody = new char[head_data.length];
    memset(pBody,0,head_data.length);
    recv(fd,pBody,head_data.length,0);

    QString QStrProxy = pBody;

    ui->Receive_Edit->setText(QStrProxy);
    delete[] pBody;
}

void IMDataPack::ParseHead(char * begin,IMMessageHead &head_data)
{
    memcpy(&head_data,begin,HEAD_LENGTH);
}
