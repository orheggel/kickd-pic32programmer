#ifndef UBLAPI_H
#define UBLAPI_H
/*! \file kickd_pic32_ubl.h 
This is main DLL header file. Add this to your project when using Alternative 1: implicit linking using the kickd_pic32_ubl.lib file, 
(see also the main page \ref kickd_pic32_ubl).
*/ 

#ifdef UBLAPI_LIB
#define EXPORT_OR_IMPORT __declspec(dllexport)
#else
#define EXPORT_OR_IMPORT __declspec(dllimport)
#endif


//! Init function that needs to be called before using the other mcUbl.. functions
EXPORT_OR_IMPORT void  __cdecl mcUblInit();
//! Shutdown function needs to be called after use
EXPORT_OR_IMPORT void  __cdecl mcUblShutdown();

/*! 
	Open the USB bootloader connection, erase, program, verify and start application
	\param hexFilePath
		the hex file to program
	\param vid
		device vendor ID
	\param pid
		device product ID
	\return 
		True, if the connection could be opened and the connection 
		has been established. False, if an error occurred. 
*/ 
EXPORT_OR_IMPORT bool  __cdecl mcUblConnectAndProgram(const char *hexFilePath, const int vid, const int pid);


//! Close the bootloader HID channel
EXPORT_OR_IMPORT void  __cdecl mcUblDisconnect();

//! You need to call this in regular intervals, so the Windows messages used by the Microchip code get processed.
EXPORT_OR_IMPORT void  __cdecl mcUblMessagePump();


//! current programmer status
/*! 
	\return 
		MicrochipUblApiStatus value
*/ 
EXPORT_OR_IMPORT int  __cdecl mcUblGetStatus();

#endif // MicrochipUblApi_H
