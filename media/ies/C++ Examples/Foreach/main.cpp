
#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> e{ 0, 1, 2, 3, 4, 5 };
map<int, int> nums{ { 0, 0 } };
int ints[]{ 0, 1, 2, 3, 5 };

int main(int argc, char * argv[])
{
    for (auto i{0}; i < 5; ++i)
    {
        cout << i << endl;
    }

    for(auto it = e.begin(); it != e.end(); ++it)
    {
        cout << *it << endl;
    }
    
    for(auto& v : { 0, 1, 2, 3, 5 })
    {
        cout << v << endl;
    }

    return cin.get();
}