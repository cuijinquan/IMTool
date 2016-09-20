#ifndef IMDATAPACK_H
#define IMDATAPACK_H

#include "imtool.h"

#define HEAD_LENGTH 16
#pragma pack (1)

class IMMessageHead
{
public:
    IMMessageHead():msg_uid(0),length(0),msg_cmd(0),reserved(0){};
    int msg_uid;
    int length;
    int msg_cmd;
    int reserved;

    IMMessageHead& operator=(IMMessageHead other)
    {
        this->msg_uid = other.msg_uid;
        this->msg_cmd = other.msg_cmd;
        this->length = other.length;
        this->reserved = other.reserved;

        return *this;
    }
};

#pragma pack ()

class IMMessage
{
public:
    IMMessage()
    {
        body = NULL;
    }
    ~IMMessage()
    {
        if (NULL != body)
        {
            delete[] body;
        }
    }

    IMMessageHead head;
    char* body;
};

class IMDataPack
{
public:
    void PackDataSend(Ui::MainWindow *ui,int fd);
    void GetRspData(Ui::MainWindow *ui,int fd);
    void ParseHead(char * begin,IMMessageHead &head_data);
};

#endif // IMDATAPACK_H

