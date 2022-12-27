#ifndef C64MULTINETLIB_H
#define C64MULTINETLIB_H

// Device Enums
typedef enum network_devices
{
    DEVICE_NONE = 0,
    DEVICE_RRNET,
    DEVICE_ETH64,
    DEVICE_ULTIMATE,    
    DEVICE_MEATLOAF,
    DEVICE_FLYER,
    DEVICE_ZIMODEM,
    DEVICE_WIC64,
    NUM_DEVICES
};

typedef enum return_codes
{
    SUCCESS = 0,               // No error, function succeeded
    ERROR_UNSUPPORTED = -1,    // Function is not supported (yet?) on this device
    ERROR_DEVICE = -2,         // Function failed, use 
};

// Function Prototypes
enum return_codes net_initialize(void);
enum network_devices net_detectdevice(void);
int  net_getdetecteddevicenum(void);
char *net_getdetecteddevicename(void);
enum return_codes net_getipaddress(char *ipaddress);

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


#endif