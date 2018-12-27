
#include <iostream>

using namespace std;

void f(int * ptr) { cout << "Pointer called" << endl; }

void f(int a) { cout << "Char called" << endl; }

int main()
{
    f(nullptr);
    f(NULL);
    return 0;
}