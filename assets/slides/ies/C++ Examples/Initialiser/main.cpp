
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

double doubleValue = 0.0;
int intValue = 0;

struct point {
    int x;
    int y;
};

class word {
   string value;
public:
    explicit word(string v) : value(v) {}
};

int main(int argc, char * argv[])
{
    map<int, int> m{{ 0, 5 }};
    vector<int> v{0,1,2};
    point p{0, 0};
    word a{"Hi"};
   
    double e{ doubleValue };
    word* ptr{nullptr};
    int d{ 52 };

    //short s{intValue};
    //float f{doubleValue};

    return 0;
}