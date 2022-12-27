#include "C64MultiNetLib.h"

// Global Variables
enum network_devices detected_device = DEVICE_NONE;
unsigned int last_error = 0;

enum return_codes net_initialize(void)
{
    detected_device = DEVICE_NONE;
    last_error = 0;
    return SUCCESS;
}

enum return_codes net_detectdevice(void)
{

}

enum network_devices net_getdetecteddevicenum(void)
{
    return detected_device;
}

char* net_getdetecteddevicename(void);
enum return_codes net_getipaddress(char* ipaddress);

enum return_code net_tcpconnect(char* host, unsigned short port);
enum return_code net_udpconnect(char* host, unsigned short port);
enum return_code net_socketread(unsigned char socketid, unsigned short length);
enum return_code net_socketwrite(unsigned char socketid, char* data);
enum return_code net_socketwritechar(unsigned char socketid, char one_char);
enum return_code net_socketclose(unsigned char socketid);

enum return_code net_tcplistenstart(unsigned short port);
enum return_code net_tcplistenstop(void);
int uii_tcpgetlistenstate(void);
unsigned char uii_tcpgetlistensocket(void);