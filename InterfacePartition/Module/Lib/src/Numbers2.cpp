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

int squareMax(int x, int y)
{
    return MyMax(x, y) * MyMax(x, y);
}

} // namespace Numbers
