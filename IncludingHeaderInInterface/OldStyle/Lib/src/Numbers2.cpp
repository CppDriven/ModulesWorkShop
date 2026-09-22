#include "Numbers.h"
#include <algorithm>

namespace
{
    int MyMax(int x, int y)
    {
        return std::max(x, y);
    }
} // namespace

namespace Numbers
{

int squareMax(int x, int y)
{
    return MyMax(x, y) * MyMax(x, y);
}

} // namespace Numbers
