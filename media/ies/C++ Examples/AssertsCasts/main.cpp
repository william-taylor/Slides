
#include <type_traits>
#include <iostream>

struct A {};

class Base
{
    public:
        Base(){}
        virtual ~Base(){}
};

class Derived2 : public Base{};
class Derived : public Base{};

void printYourType(Base * base)
{
    if (dynamic_cast<Derived *>(base))
    {
        std::cout << "Derived " << std::endl;
    }

    if (dynamic_cast<Derived2 *>(base))
    {
        std::cout << "Derived2 " << std::endl;
    }

    delete base;
}

void moarConst(const int * ptr)
{
    //*ptr = 10;
    *const_cast<int *>(ptr) = 10;
}

int main()
{
    static_assert(std::is_class<A>::value, "This object isnt a class");
    static_assert(std::is_abstract<A>::value, "This object isnt abstract");

    const auto numFromString = static_cast<int>("0");
    const auto numFromFloat = static_cast<int>(50.0f);
    
    printYourType(new Derived());
    printYourType(new Derived2());

    auto i{0};
    moarConst(&i);
    return 0;
}