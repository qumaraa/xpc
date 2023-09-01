#include "gpuinfo.h"

GPUInfo::GPUInfo()
{
	gpuDeviceName      = nullptr;
	gpuDeviceString    = nullptr;
	dmPelsWidth        = NULL;
	dmDisplayFrequency = NULL;
}

bool GPUInfo::Init()
{
	bool init_success = true;
	this->dd.cb = sizeof(dd);
	this->dm.dmSize = sizeof(dm);
	if (EnumDisplayDevices(NULL, 0, &dd, 0)) {
		
		this->gpuDeviceName = dd.DeviceName;
		this->gpuDeviceString = dd.DeviceString;
		this->gpuDeviceId = dd.DeviceID;
		if (EnumDisplaySettings(dd.DeviceName, ENUM_CURRENT_SETTINGS, &dm)) {
			this->dmDisplayFrequency = dm.dmDisplayFrequency;
			this->dmPelsWidth = dm.dmPelsWidth;
		}
	}
	else {
		//MessageBox(NULL, L"GPUInfo_Error: could not initialize GPUInfo", L"Error", MB_ICONERROR | MB_OKCANCEL);
		init_success = false;
	}
	
	return init_success;
}

WSTR GPUInfo::GetDeviceNameW()
{
	return this->gpuDeviceName;
}

WSTR GPUInfo::GetDeviceStringW()
{
	return this->gpuDeviceString;
}

DWORD GPUInfo::GetPelsWidtg()
{
	return this->dmPelsWidth;
}

DWORD GPUInfo::GetDisplayFrequency()
{
	return this->dmDisplayFrequency;
}

WCHAR* GPUInfo::GetDeviceId()
{
	return this->gpuDeviceId;
}


