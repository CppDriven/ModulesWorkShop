export module Numbers;

//#include "Helper.h"     /// we will come to this later on

namespace NumbersNs
{

namespace Details   /// one would put this in ano namespace, but for making point
{
    int MyMax(int x, int y)
    {
        return (x > y) ? x : y;
    }
}

export int absDiff(int x, int y)
{
    //sillyMe();
    return (x > y) ? x - y : y - x;
}

export int squareMax(int x, int y)
{
    return Details::MyMax(x, y) * Details::MyMax(x, y);
}

} // namespace NumbersNs

int y;

namespace foo
{
    int x;
    void function1() {};
}

export int a;
namespace bar
{
    export int b;
    export void function2() {};
}

// opt out ==> extern "C" of extern "C++"  ==> into global module
