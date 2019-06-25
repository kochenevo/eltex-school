#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include "error.h"


// Порт сокета на сервере
#define SOCKET_PORT	55123

// Допустимое количество подключений к сокету
#define MAX_CONNECTIONS	11

// Размер буфера данных
#define BUF_SIZE	0xFFFF


#endif // COMMON_H_INCLUDED
