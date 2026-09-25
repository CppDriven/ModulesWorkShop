module Numbers;

import std;    // wecould remove this line, since we get it from the PMI, but what if it would be removed there ...

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
