// Counter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    int nValue = 0;

    while (1)
    {
        cout << nValue++ << endl;
        ::Sleep(100);
    }
    
    return 0;
}

