#include <iostream>
#include <memory>

using namespace std;

auto multiply(unique_ptr<int> value) { *value *= 10; return move(value); }
auto zero(unique_ptr<int> value) { *value *= 0; return move(value); }

void zero(shared_ptr<int> value) { *value = 0; }
void multiply(shared_ptr<int> value) { *value *= 10; }

void sharedPointer(int * ptr)
{
    shared_ptr<int> sharedNumber(ptr);

    multiply(sharedNumber);
    zero(sharedNumber);

    cout << *sharedNumber << endl;
}

void uniquePointer(int * ptr)
{
    unique_ptr<int> uniqueNumber(ptr);

    uniqueNumber = multiply(move(uniqueNumber));
    uniqueNumber = zero(move(uniqueNumber));

    cout << *uniqueNumber << endl;
}

int main(int argc, char * argv[])
{
    auto ptr1 = new int{52};
    auto ptr2 = new int{*ptr1};

    sharedPointer(ptr1);
    uniquePointer(ptr2);

    return 0;
}