#include "Settings.h"

#include <cstring>
#include <stdlib.h>
#include <iostream>

Settings::Settings(int argc, char** argv)
	: mWidth(100)
	, mHeight(20)
	, mResolution(10)
{
	mWidth = 0;
	mHeight = 0;
	mResolution = 0;

	for (int i = 0; i < argc; ++i)
	{
		if (strcmp(argv[i], "-h") == 0)
		{
			Helper();
			++i;
		}
		else if (strcmp(argv[i], "-w") == 0)
		{
			mWidth = atoi(argv[i + 1]);
			++i;
		}
		else if (strcmp(argv[i], "-h") == 0)
		{
			mHeight = atoi(argv[i + 1]);
			++i;
		}
		else if (strcmp(argv[i], "-r") == 0)
		{
			mResolution = atoi(argv[i + 1]);
			++i;
		}
	}
}

void Settings::Helper()
{
	std::cout
		<< "+-----------------------------------------+"
		<< "| "
		<< "| -w int [Width]"
		<< "| -h int [Height]"
		<< "| -r int [Resolution]"
		<< std::endl;
}

int Settings::GetWidth()
{
	return mWidth;
}

int Settings::GetHeight()
{
	return mHeight;
}

int Settings::GetResolution()
{
	return mResolution;
}

