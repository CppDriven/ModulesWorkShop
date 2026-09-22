module Numbers;

namespace
{
    int MyMax(int x, int y)
    {
        return (x > y) ? x : y;
    }
}

namespace Numbers
{

int absDiff(int x, int y)
{
    return (x > y) ? x - y : y - x;
}

int squareMax(int x, int y)
{
    return MyMax(x, y) * MyMax(x, y);
}

} // namespace Numbers
