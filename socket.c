#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>

int main(void)
{
  printf("Hello World!\n");
  int sockfd = socket(PF_INET, SOCK_STREAM, 0);
  if (sockfd < 0)
  {
    printf("fail to make socket.\n");
    return (1);
  }
  printf("success to make socket!\n");
  close(sockfd);
  return (0);
}
