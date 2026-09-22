module Numbers;

import :Helper;

/// we could call absDiff()

namespace
{
    int MyMax(int x, int y)
    {
        return (x > y) ? x : y;
    }
}

namespace Numbers
{

int squareMax(int x, int y)
{
    [[maybe_unused]] const auto dontCare = whereAmI();

    [[maybe_unused]] auto foo = absDiff(0, 0);

    return MyMax(x, y) * MyMax(x, y);
}

} // namespace Numbers
