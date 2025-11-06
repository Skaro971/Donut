#include "Settings.h"

#include <cstring>
#include <stdlib.h>

Settings::Settings(int argc, char** argv)
{
	mWidth = 0;
	mHeight = 0;

	for (int i = 0; i < argc; ++i)
	{
		if (strcmp(argv[i], "-w") == 0)
		{
			mWidth = atoi(argv[i + 1]);
			++i;
		}
		else if (strcmp(argv[i], "-h") == 0)
		{
			mHeight = atoi(argv[i + 1]);
			++i;
		}
	}
}

int Settings::GetWidth()
{
	return mWidth;
}

int Settings::GetHeight()
{
	return mHeight;
}
