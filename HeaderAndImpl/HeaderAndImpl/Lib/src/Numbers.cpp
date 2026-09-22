#include "Numbers.h"

namespace
{
int max(int x, int y)
{
    return (x > y) ? x : y;
}
} // namespace

namespace Numbers
{

int absDiff(int x, int y)
{
    return (x > y) ? x - y : y - x;
}

int squareMax(int x, int y)
{
    return max(x, y) * max(x, y);
}

} // namespace Numbers
