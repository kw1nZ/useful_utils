#ifndef MYUTILS_PROGRAM_ENDING_H
#define MYUTILS_PROGRAM_ENDING_H


#include <iostream>
#include <Windows.h>

static void program_ending()
{
    std::cout << std::endl;
    std::cout << "[SPACE] Exit";
    while (true)
    {
        Sleep(30);
        if (GetKeyState(VK_SPACE) & 0x8000)
        {
            while (GetKeyState(VK_SPACE) & 0x8000) {
            }
            break;
        }
    }
}


#endif //MYUTILS_PROGRAM_ENDING_H
