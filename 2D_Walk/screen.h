#pragma once
#include <Windows.h>
#include "level.h"
#include "player.h"
#include <assert.h>

typedef struct tagWindowDetails
{
	int Width;
	int Height;
	void* BackBuffer;
	HDC DC;
	HWND Window;
	BITMAPINFO BitMapInfo;
}WindowDetails;

extern WindowDetails* details;

WindowDetails* DefineWindow(HINSTANCE hInstance, int width, int height, wchar_t* className, wchar_t* windowName, int nShowCmd, WNDPROC proc);

void setupWindow(HINSTANCE hInstance, int width, int height, wchar_t* className, wchar_t* windowName, int nShowCmd, WNDPROC proc);

void updateWindow();