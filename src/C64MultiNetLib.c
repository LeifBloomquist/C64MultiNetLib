#include "C64MultiNetLib.h"

// Global Variables
enum network_devices detected_device = DEVICE_NONE;
int last_error = 0;

// Implementation

enum return_codes net_initialize(void)
{
    detected_device = DEVICE_NONE;
    last_error = 0;
    return SUCCESS;
}

int net_getlasterror(void)
{
    return last_error;
}

enum return_codes net_detectdevice(void)
{
    detected_device = DEVICE_NONE;
    return detected_device;
}

enum return_codes net_forcedevice(enum network_devices device)
{
    detected_device = device;
    return SUCCESS;
}

enum network_devices net_getdetecteddevicenum(void)
{
    return detected_device;
}

const char* net_getdetecteddevicename(void)
{
    switch (detected_device)
    {
        case DEVICE_NONE:
            return "NONE";

        case DEVICE_RRNET:
            return "RR-NET";

        case DEVICE_ETH64:
            return "ETH64";

        case DEVICE_ULTIMATE:
            return "ULTIMATE 64 or 1541";

        case DEVICE_MEATLOAF:
            return "MEATLOAF";

        case DEVICE_FLYER:
            return "FLYER";

        case DEVICE_ZIMODEM:
            return "ZIMODEM";

        case DEVICE_WIC64:
            return "WIC64";

        default:
            return "ERROR - UNKNOWN DEVICE";
    }
}

enum return_codes net_getipaddress(const char* ipaddress_out)
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return ERROR_UNSUPPORTED;
    }
}

enum return_codes net_tcpconnect(char* host, unsigned short port)
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return ERROR_UNSUPPORTED;
    }
}

enum return_codes net_udpconnect(char* host, unsigned short port)
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return ERROR_UNSUPPORTED;
    }
}


enum return_codes net_socketread(unsigned char socketid, unsigned short length)
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return ERROR_UNSUPPORTED;
    }
}

enum return_codes net_socketwrite(unsigned char socketid, char* data)
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return ERROR_UNSUPPORTED;
    }
}

enum return_codes net_socketwritechar(unsigned char socketid, char one_char)
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return ERROR_UNSUPPORTED;
    }
}

enum return_codes net_socketclose(unsigned char socketid)
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return ERROR_UNSUPPORTED;
    }
}

enum return_codes net_tcplistenstart(unsigned short port) 
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return ERROR_UNSUPPORTED;
    }
}

enum return_codes net_tcplistenstop(void)
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return ERROR_UNSUPPORTED;
    }
}

int uii_tcpgetlistenstate(void)
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return ERROR_UNSUPPORTED;
    }
}

unsigned short uii_tcpgetlistensocket(void)
{
    switch (detected_device)
    {
        case DEVICE_RRNET:
        case DEVICE_ETH64:
        case DEVICE_ULTIMATE:
        case DEVICE_MEATLOAF:
        case DEVICE_FLYER:
        case DEVICE_ZIMODEM:
        case DEVICE_WIC64:
        default:
            return 0;
    }
}