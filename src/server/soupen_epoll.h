#ifndef SOUPEN_SERVER_EPOLL_H
#define SOUPEN_SERVER_EPOLL_H
namespace soupen_server
{
  class SoupenEpoll
  {
  public:
    int init();
    int work();
    int set_socket_nonblocking(int sock);
  private:
    int sock_;
    static const int DEFAULT_PORT = 7788;
    static const int BUFF_SIZE = 1024 * 1024;
    static const int EPOLL_MAXEVENTS = 64;
    static const int EPOLL_TIMEOUT = 5000;
  };
}
#endif /*SOUPEN_SERVER_EPOLL_H*/
