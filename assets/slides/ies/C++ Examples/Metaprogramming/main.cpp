
#pragma region Helpers 

#include <initializer_list>
#include <functional>
#include <iostream>
#include <ctime>

using namespace std;

auto timeit(function<void()> functionToTime)
{
    const static auto div = static_cast<double>(CLOCKS_PER_SEC / 1000);
    const auto start = clock();
    functionToTime();
    return (clock() - start) / div;
}

#pragma endregion

/** Metaprogramming / Compile Time */
template<int N>
struct Factorial {
    static const int64_t result = N * Factorial<N-1>::result;
};

template<>
struct Factorial<0> {
    static const int64_t result = 1;
};



/* Regular function */
int64_t factorial(int64_t n)
{
    return n == 1 || n == 0 ? 1 : factorial(n - 1) * n;
}

int main(int argc, char * argv[])
{
    auto testSize{10000000};

    auto fastTime = timeit([&]() {
        for (auto b = 0; b < testSize; ++b) {
            auto r = Factorial<20>::result;
        }
    });

    auto slowTime = timeit([&]() {
        for(auto b = 0; b < testSize; ++b) {
            auto r = factorial(20);
        }
    });

    cout << "Fast Factorial " << fastTime << endl;
    cout << "Slow Factorial " << slowTime << endl;
    return cin.get();
}