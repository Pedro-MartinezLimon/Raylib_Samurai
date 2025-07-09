#pragma once

#include <raylib.h>

namespace sam_core
{

	// Set Windows settings: Takes the physical monitor values and set the max window size, VSYNC, Size, etc...
	bool SetWindowConfig()
	{
		InitWindow(300, 300, "Samurai - Verificador");

		if (!IsWindowReady())
			return false;
		else
		{
			int* _currentMonitor = new int(GetCurrentMonitor());

			int* _physicalMonitorHeight = new int(GetMonitorPhysicalHeight(*_currentMonitor));
			int* _physicalMonitorWidth = new int(GetMonitorPhysicalWidth(*_currentMonitor));

			SetWindowMaxSize(*_physicalMonitorWidth, *_physicalMonitorHeight);
			SetWindowSize(*_physicalMonitorWidth, *_physicalMonitorHeight);

			SetTargetFPS(GetMonitorRefreshRate(*_currentMonitor));
			SetWindowState(FLAG_VSYNC_HINT);
			SetWindowTitle("Samurai");

			delete _currentMonitor;
			_currentMonitor = nullptr;

			delete _physicalMonitorHeight;
			_physicalMonitorHeight = nullptr;

			delete _physicalMonitorWidth;
			_physicalMonitorWidth = nullptr;

			return true;
		}
	}
	// Set AudioDevice settings and check if it's working
	bool SetAudioConfig()
	{
		InitAudioDevice();

		if (!IsAudioDeviceReady())
			return false;
		else return true;
	}
	// Close all devices so the window can close properly
	void CloseProperly()
	{
		CloseAudioDevice();
		CloseWindow();
	}
}