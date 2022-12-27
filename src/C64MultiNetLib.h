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
    ERROR_DEVICE = -2,         // Function failed, use net_getlasterror() for specific error code from device
};

// Function Prototypes
enum return_codes net_initialize(void);
int net_getlasterror(void);

enum return_codes net_detectdevice(void);
enum return_codes net_forcedevice(enum network_devices device);

enum network_devices net_getdetecteddevicenum(void);
const char *net_getdetecteddevicename(void);

enum return_codes net_getipaddress(const char* ipaddress_out);
enum return_codes net_tcpconnect(char* host, unsigned short port);
enum return_codes net_udpconnect(char* host, unsigned short port);
enum return_codes net_socketread(unsigned char socketid, unsigned short length);
enum return_codes net_socketwrite(unsigned char socketid, char* data);
enum return_codes net_socketwritechar(unsigned char socketid, char one_char);
enum return_codes net_socketclose(unsigned char socketid);

enum return_codes net_tcplistenstart(unsigned short port);
enum return_codes net_tcplistenstop(void);
int uii_tcpgetlistenstate(void);
unsigned short uii_tcpgetlistensocket(void);

#endif
