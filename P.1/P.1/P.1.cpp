#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    int x, z,esp=0,let=0;
    cout << "Escriba una palabra:\n";
    cin >> a;
    z = strlen(a);
    for (x = 0; x <= z; x++)
    {
        if (a[x] == ' ')
        {
            esp++;
        }
    }
    let = z - esp;
    //cout << l;
    cout << "Hay\t "<<let<<"\tletras\n";
    //cout << "Hay\t" << spaces<<"\tespacios\n";
    system("pause");
}