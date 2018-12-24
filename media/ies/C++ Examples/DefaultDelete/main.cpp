
#include <iostream>

class Point {
    int x; int y;
public:
    Point(int a, int b){ x = a; y = b;}
    //Point() = default;
};

class NumberWrapper {
    int * ptr;
public:
    NumberWrapper(int num): ptr(new int{num}){}
    ~NumberWrapper() { delete ptr; }
    //NumberWrapper(const NumberWrapper& w) = delete;
};


int main()
{
    NumberWrapper number{52};
    {
        NumberWrapper copy = number;
    }

    //Point point;

    return 0;
}