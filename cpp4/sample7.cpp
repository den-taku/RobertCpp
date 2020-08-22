#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 0;

    cout << "short int型のサイズは" << sizeof(short int) << "バイトです。" << endl;
    cout << "int型のサイズは" << sizeof(int) << "バイトです。" << endl;
    cout << "long int型のサイズは" << sizeof(long int) << "バイトです。" << endl;
    cout << "float型のサイズは" << sizeof(float) << "バイトです。" << endl;
    cout << "double型のサイズは" << sizeof(double) << "バイトです。" << endl;
    cout << "long double型のサイズは" << sizeof(long double) << "バイトです。" << endl;
    cout << "変数aのサイズは" << sizeof(a) << "バイトです。" << endl;
    cout << "式a+bのサイズは" << sizeof(a+b) <<"バイトです。" << endl;

    return 0; 
}
