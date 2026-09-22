module;

#include <algorithm>

module Numbers;

//#include <algorithm>  //NOT here

namespace
{
    int MyMax(int x, int y)
    {
        return std::max(x, y);
    }
}

namespace Numbers
{

int squareMax(int x, int y)
{
    [[maybe_unused]] auto foo = absDiff(0, 0);

    return MyMax(x, y) * MyMax(x, y);
}

} // namespace Numbers
