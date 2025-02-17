// Only file of this project.
#include <stdio.h>
#include <string.h>

#include <sys/socket.h>

#define URL_MAX_LEN 256
// options
// -i <input-file-name> 	one url per list.
// -a <automatic retry> 	default "on"
// -c <in memory cached> 	default "on"

// reference: https://github.com/freebsd/freebsd-src/blob/main/usr.bin/fetch/fetch.c

int init_http_header()
{
    
}

int http_connect()
{
    
}

struct url
{
    char scheme[URL_MAX_LEN];
    int port;
};

int cf(struct url* url, char* path)
{

}


int main()
{
    char* curl = "https://github.com/per1cycle/share/releases/download/flash-attention-cp39/flash_attn-2.5.9.post1-cp39-cp39-linux_x86_64.whl";
    char* path = "cpython.whl";
    struct url uurl;
    strcpy(uurl.scheme, curl);


    cf(&uurl, path);

    return 0;

}
