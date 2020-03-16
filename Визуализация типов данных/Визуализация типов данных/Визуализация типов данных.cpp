// Визуализация типов данных.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void ByteOut(unsigned char* b)
{
    for (int i = 0; i < 8; i++)
    {
        if (*b&(0x80 >> i)) cout << "1";
        else cout << "0";
    }
}

int main()
{
    int x = 11;
    cout << "int: " << endl;
    cout << "Big-Endian: ";
    for (int i = 3; i > -1; i--) ByteOut((unsigned char*)&x + i);
    cout << endl;
    cout << "Little-Endian: ";
    for (int i = 0; i < 4; i++) ByteOut((unsigned char*)&x + i);
    cout << endl;

    float y = (float)x;
    cout << "float: " << endl;
    cout << "Big-Endian: ";
    for (int i = 3; i > -1; i--) ByteOut((unsigned char*)&y + i);
    cout << endl;
    cout << "Little-Endian: ";
    for (int i = 0; i < 4; i++) ByteOut((unsigned char*)&y + i);
    cout << endl;

    double z = (double)x;
    cout << "double: " << endl;
    cout << "Big-Endian: ";
    for (int i = 7; i > -1; i--) ByteOut((unsigned char*)&z + i);
    cout << endl;
    cout << "Little-Endian: ";
    for (int i = 0; i < 8; i++) ByteOut((unsigned char*)&z + i);
    cout << endl;
    return 0;
}
