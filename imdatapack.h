#ifndef IMDATAPACK_H
#define IMDATAPACK_H

#include "imtool.h"

#define HEAD_LENGTH 16
#pragma pack (1)

class IMMessageHead
{
public:
    IMMessageHead():msg_id(0),user_id(0),msg_cmd(0),length(0),
        from(0),to(0),cluster_id(0),node_id(0),wait_time(0),flag(0),reserved(0){};
    short msg_id;
    short user_id;
    short msg_cmd;
    short length;
    char from;
    char to;
    char cluster_id;
    char node_id;
    char wait_time;
    char flag;
    short reserved;

    IMMessageHead& operator=(IMMessageHead other)
    {
        this->msg_id = other.msg_id;
        this->user_id = other.user_id;
        this->msg_cmd = other.msg_cmd;
        this->length = other.length;
        this->from = other.from;
        this->to = other.to;
        this->cluster_id = other.cluster_id;
        this->node_id = other.node_id;
        this->wait_time = other.wait_time;
        this->flag = other.flag;
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

