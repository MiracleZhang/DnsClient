//
//  platform.h
//  DnsClient
//
//  Created by zhangjianping on 2017/6/2.
//  Copyright © 2017年 张建平. All rights reserved.
//

#ifndef platform_h
#define platform_h

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


#if _WIN32

#include <WinSock2.h>
#include <Ws2tcpip.h>
#include <Windows.h>
#include <malloc.h>
#include <tchar.h>

#define GetSockError() WSAGetLastError()
#define SetSockError(e) WSASetLastError(e)
#define setsockopt(a, b, c, d, e) (setsockopt)(a, b, c, (const char *)d, (int)e)
#define EWOULDBLOCK \
WSAETIMEDOUT /* we don't use nonblocking, but we do use timeouts */
#define sleep(n) Sleep(n * 1000)
#define msleep(n) Sleep(n)
#define SET_RCVTIMEO(tv, s) int tv = s * 1000

#define SOCKET SOCKET
#define PCSTR PCSTR

#else /* !_WIN32 */

//typedef int SOCKET;
typedef int SOCKET;
typedef char *PCSTR;
typedef unsigned long ULONG_PTR;
typedef ULONG_PTR DWORD_PTR;

#include <malloc/malloc.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <sys/socket.h>
#include <sys/times.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

#define min(a, b) (a > b ? b : a)

#define GetSockError() errno
#define SetSockError(e) errno = e
#undef closesocket
#define closesocket(s) close(s)

#endif


#endif /* platform_h */
