#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "student-smponchev18.h"
using namespace std;

int main()
{
    fstream file;
    file.open("smponchev18", ios::out | ios::binary | ios::trunc);
    if (file.is_open())
    {
        for (size_t i = 0; i < 6; i++)
        {
            file.write((const char*)&i, sizeof(i));
        }

        file.close();
    }
}