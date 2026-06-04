#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(void)
{
  struct hostent *server = gethostbyname("www.google.com");
  if (server == NULL)
  {
    printf("fail to server init\n");
    return (1);
  }
  struct in_addr *addr = (struct in_addr *)server->h_addr_list[0];
  unsigned char *bytes = (unsigned char *)&(addr->s_addr);
  char *ip = inet_ntoa(*addr);
  printf("IP address: %s\n", ip);
  return (0);
}
