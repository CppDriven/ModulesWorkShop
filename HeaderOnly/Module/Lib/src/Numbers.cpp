export module Numbers;

namespace Numbers
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
    return (x > y) ? x - y : y - x;
}

export int squareMax(int x, int y)
{
    return Details::MyMax(x, y) * Details::MyMax(x, y);
}

} // namespace Numbers
