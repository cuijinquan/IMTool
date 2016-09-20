#include "imclient.h"
#include "imdatapack.h"

IMClient::IMClient()
{
    memset(&m_addr, 0, sizeof(m_addr));
}

void IMClient::SetMainWin(Ui::MainWindow *ui)
{
    m_MainUI = ui;
}

void IMClient::Connect()
{
    QString ip = m_MainUI->Edit_IP->toPlainText();
    QString port = m_MainUI->Edit_Port->toPlainText();

    memset(&m_addr, 0, sizeof(m_addr));
    m_addr.sin_family = AF_INET;
    m_addr.sin_addr.s_addr = inet_addr(ip.toStdString().c_str());
    m_addr.sin_port = htons(port.toInt());

    m_socket_fd = socket(PF_INET, SOCK_STREAM, 0);
    int result = ::connect(m_socket_fd,(struct sockaddr*)&m_addr,sizeof(struct sockaddr));
    if (result < 0)
    {
        m_MainUI->Receive_Edit->setText("connect error!\n");
    }
    else
    {
        m_MainUI->Receive_Edit->setText("connect success!\n");
    }
}

void IMClient::SendData()
{
    qint32 loop = m_MainUI->Loop_Edit->toPlainText().toInt();
    for (int i = 0;i < loop; i++)
    {
        Connect();
        IMDataPack req_msg;
        req_msg.PackDataSend(m_MainUI,m_socket_fd);
        //req_msg.GetRspData(m_MainUI,m_socket_fd);
        //close(m_socket_fd);
    }
}

void IMClient::Close()
{

}
