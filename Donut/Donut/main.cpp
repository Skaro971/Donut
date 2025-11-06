#include <iostream>
#include <windows.h>

#include "Settings.h"
#include "Screen.h"

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

int main(int argc, char** argv)
{
    ConfigConsole();
    Settings Settings(argc, argv);
    Screen Screen(Settings.GetWidth(), Settings.GetHeight());

    Screen.DisplayGrid();

    return 0;
}

