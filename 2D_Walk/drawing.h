#pragma once

#include <Windows.h>

typedef struct tagTriangle
{
	POINT left;
	POINT top;
	POINT right;
}TRIANGLE;

void Plot(int x, int y, int color, int* buffer, int bufferWidth);

void DrawLine(int x, int y, int x2, int y2, int color, int* buffer, int bufferWidth);

void DrawRect(int x, int y, int width, int height, int color, int* buffer, int bufferWidth);

void DrawTriangle(TRIANGLE tri, int color, int* buffer, int bufferWidth);

void DrawCircle(int x, int y, int radius, int color, int* buffer, int bufferWidth);