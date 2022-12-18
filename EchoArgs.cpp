// EchoArgs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// modified from JLBorges post at https://cplusplus.com/forum/beginner/211100/#msg989309

#include <iostream>
#include <algorithm>
#include <iterator>

int wmain(int argc, wchar_t* argv[])
{
    // print all command line arguments
    std::wcout << L"name of program: " << argv[0] << L'\n';

    if (argc > 1)
    {
        std::wcout << L"there are " << argc - 1 << L" (more) arguments, they are:\n";

        std::copy(argv + 1, argv + argc, std::ostream_iterator<wchar_t*, wchar_t, std::char_traits<wchar_t>>(std::wcout, L"\n"));
    }
}