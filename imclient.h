#ifndef IMCLIENT_H
#define IMCLIENT_H

#include "imtool.h"

using namespace std;

class IMClient : public QObject
{
    Q_OBJECT
public:
    IMClient();

    void SetMainWin(Ui::MainWindow *ui);

    void Close();

public slots:
    void Connect();

    void SendData();

private:
    int m_socket_fd;
    int m_stream_fd;
    struct sockaddr_in m_addr;
    Ui::MainWindow *m_MainUI;
};

#endif // IMCLIENT_H

