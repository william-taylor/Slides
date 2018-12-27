
#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void notAwesome(){ cout << "Not awesome " << endl; }
void awesome(){ cout << "Awesome " << endl; }

// Ugly
void (*myFunctionPtr)() = notAwesome;
// Better....
function<void()> myFunc(awesome);

int main(int argc, char * argv[])
{
    auto lowToHigh{ true };
    cin >> lowToHigh;
    vector<int> numbers {0, 1, 2, 3, 4, 5};
    sort(numbers.begin(), numbers.end(), [&](int a, int b) {
        return lowToHigh ? a < b : b < a;
    });

    for(auto& num : numbers)
        cout << num << endl;
    return 0;
}
