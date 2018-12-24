
#include <iostream>
#include <string>

using namespace std;

auto method()
{
    return "Hello "s;
}

int main()
{
    const auto * ptr = new int{52};
    const auto& ref = *ptr;

    const auto numberList = {50};
    const auto num {50};

    auto value = method();
    auto append = value + value;

    cout << append << endl;
    return cin.get();
}
