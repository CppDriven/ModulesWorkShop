#include "Numbers.h"
#include "Helper.h"


/// we could call absDiff()

namespace
{
int max(int x, int y)
{
    return (x > y) ? x : y;
}
} // namespace

namespace Numbers
{

int squareMax(int x, int y)
{
    [[maybe_unused]] const auto dontCare = whereAmI();
    return max(x, y) * max(x, y);
}

} // namespace Numbers
