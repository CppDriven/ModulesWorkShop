#include "Numbers.h"
#include "Helper.h"


/// we could call squareMax()

namespace Numbers
{

int absDiff(int x, int y)
{
    [[maybe_unused]] const auto dontCare = whereAmI();
    return (x > y) ? x - y : y - x;
}

} // namespace Numbers
