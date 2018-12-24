
#include <iostream>
#include <vector>

using namespace std;

vector<int> add(vector<int>& numbers, int multi)
{
    auto output(move(numbers));
    for(auto& n : output)
        n *= multi;    
    return output;
}

void moveSemantics()
{
    vector<int> vec1 { 1, 2, 3, 4, 5 };
    void * address = vec1.data();
    
    vector<int> vec2 = add(vec1, 10);
    bool sameAddress = vec2.data() == address;

    cout << (sameAddress ? "Same Address" : "Diff Address");
    cin.get();
}

int main(int argc, char * argv[])
{
    moveSemantics();
    return 0;
}
