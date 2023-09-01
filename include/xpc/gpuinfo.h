#pragma once
#include <Windows.h>
#define WSTR const wchar_t* 

class GPUInfo {
public:
	/*
	* Default Constructor
	* @info
	*/
	GPUInfo();
	/*
	* GPU Data Initialize method
	* @info
	*/
	bool Init();
	/*
	* Getter of GPU's Device Name
	* `const wchar_t*` - WSTR
	* Use std::wcout
	* @info
	*/
	WSTR GetDeviceNameW();
	/*
	* Getter of GPU's Model Name
	* `const wchar_t*` - WSTR
	* Use std::wcout
	* @info
	*/
	WSTR GetDeviceStringW();
	/*
	* Getter of Aspect Ratio Of The Screen
	* @info
	*/
	DWORD GetPelsWidtg();
	/*
	* Getter of Display Frequency (FPS)
	* @info
	*/
	DWORD GetDisplayFrequency();
	/*
	* Getter of GPU Id
	* @info
	*/
	WCHAR* GetDeviceId();

private:
	DISPLAY_DEVICE dd;
	DEVMODE dm;

	WSTR gpuDeviceName;
	WSTR gpuDeviceString;
	WCHAR* gpuDeviceId;
	DWORD dmPelsWidth;
	DWORD dmDisplayFrequency;
	
};
