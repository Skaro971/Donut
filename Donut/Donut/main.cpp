#include <iostream>
#include <windows.h>

#include "Settings.h"

#define CLEAR_CONSOLE "\033c"
#define RESET_CUROR "\033[H"
#define HIDE_CURSOR "\033[?25l"
#define SHOW_CURSOR "\033[?25m"

void ConfigConsole()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hConsole, &mode);
    SetConsoleMode(hConsole, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
}

void DisplayGrid(int width, int height)
{
    for (int h = 0; h < height; ++h)
    {
        for (int w = 0; w < width; ++w)
        {
            std::cout << ".";
        }
        std::cout << std::endl;
    }
}

int main(int argc, char** argv)
{
    ConfigConsole();
    Settings Settings(argc, argv);

    //printf(CLEAR_CONSOLE);
    //std::cout << "Hello World!\n";
    //printf(HIDE_CURSOR);

    DisplayGrid(Settings.GetWidth(), Settings.GetHeight());

    return 0;
}

