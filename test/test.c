#include <stdio.h>
#include <stdlib.h>

#include "..\src\C64MultiNetLib.h"

int main(void)
{
    enum return_codes err;
    enum network_devices dev;
    char temp[100];

    printf("Testing the C64 multi net lib...\n\n");
    
    err = net_initialize();
    printf("net_initialize() returns: %d\n", err);

    err = net_detectdevice();
    printf("net_detectdevice() returns: %d\n", err);

    dev = net_getdetecteddeviceid();
    printf("net_getdetecteddeviceid() returns: %d\n", dev);

    err = net_getdetecteddevicename(temp);
    printf("net_getdetecteddevicename() returns: %d  name:%s\n", err, temp);

    err = net_getipaddress(temp);
    printf("net_getipaddress() returns: %d  address:%s\n", err, temp);

    return EXIT_SUCCESS;
}