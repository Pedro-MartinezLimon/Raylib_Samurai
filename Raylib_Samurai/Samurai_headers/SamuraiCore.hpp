#pragma once

#include <raylib.h>

namespace samurai_core
{
// Return true and set windows settings when window is ready
	bool WindowSettings()
	{
		InitWindow(1280, 720, "Samurai");
		InitAudioDevice();

		if (!IsWindowReady() or !IsAudioDeviceReady())
			return false;
		else
		{
			int* _currentMonitor = new int(GetCurrentMonitor());
			int* _monitorRefreshRate = new int(GetMonitorRefreshRate(*_currentMonitor));
			
			SetTargetFPS(*_monitorRefreshRate);
			SetWindowState(FLAG_WINDOW_ALWAYS_RUN);

			delete _currentMonitor;
			_currentMonitor = nullptr;

			delete _monitorRefreshRate;
			_monitorRefreshRate = nullptr;

			return true;
		}
	}
// Close window and audio device
	void End()
	{
		CloseAudioDevice();
		CloseWindow();
	}
}