//	cv_net.h
//
//  general defines for cyborg_vision network stuff
//


#ifndef _CV_NET_H_
#define _CV_NET_H_   1


#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <arpa/inet.h>
#include <sys/socket.h>




#define DEF_HOST_IP_STRING      "127.0.0.1"

/// default port for posting data to cv_db
#define DEF_HOST_PORT_DB_POST   12345
/// default port for querying data from cv_db
#define DEF_HOST_PORT_DB_QUERY  12346

/// default port sending status messages to cv_status
#define DEF_HOST_PORT_STATUS    12347


/// used for storing host addressing information
typedef struct {
    /// host interface to use
    char    *hostIPString;
    struct  sockaddr_in hostIP;
    /// host port to use
    int     hostPort;
    /// socket for this connection
    int     sock;
} HOST_INFO;

void openOutgoingPort(HOST_INFO *);

void openIncomingPort(HOST_INFO *);

void setHostAndPort(char *, HOST_INFO *);



#endif  /* cv_net.h */
