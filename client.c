#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <netdb.h>
#include <arpa/inet.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//gethostname -> récupère le nom de l'hote
//gethostbyname -> récupère les informations de l'hote avec son nom
//gethostbyaddr -> récupère les informations de l'hote avec son adresse
//inet_ntoa -> convertit une adresse en bits en adresse IPV4


int main(void)
{

  socklen_t lg = sizeof(struct sockaddr_in);
  int nb_octets = sendto (socketS, msg, strlen(msg)+1, 0, (struct sockaddr*)&addr_server, lg);
  if (nb_octets == -1){
    perror("send error");
    exit(1);
  }
  printf("msg \"%s\" envoyé, nb_octets = %d\n", msg, nb_octets);


  close(socketS);

  return 0;
}

frz"aerzfaerzfr"aefaerzsfd
