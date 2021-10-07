#ifndef IPC_H
#define IPC_H

#define PACKET_SIZE 65 * 1024
#define SOCKET_PATH "/tmp/.unix.sock"

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while(0)

#endif