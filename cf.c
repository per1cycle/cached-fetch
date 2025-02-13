// Only file of this project.
#include <sys/signal.h>
#include <stdio.h>

// options
// -i <input-file-name> 	one url per list.
// -a <automatic retry> 	default "on"
// -c <in memory cached> 	default "on"

// reference: https://github.com/freebsd/freebsd-src/blob/main/usr.bin/fetch/fetch.c

int cf(char* url, char* path)
{

    while(1)
    {
        
    }
}


int main()
{
    char* url = "https://www.google.com";
    char* path = "index.html";
    cf(url, path);
    return 0;

}
