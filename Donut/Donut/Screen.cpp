#include "Screen.h"

#include <iostream>

Screen::Screen(int width, int height)
{
	mWidth = width;
	mHeight = height;
}

void Screen::SetWidth(int width)
{
    mWidth = width;
}
void Screen::SetHeight(int height)
{
    mHeight = height;
}

void Screen::DisplayGrid()
{
    for (int h = 0; h < mHeight; ++h)
    {
        for (int w = 0; w < mWidth; ++w)
        {
            std::cout << ".";
        }
        std::cout << std::endl;
    }
}
