#ifndef NUMBERS_NUMBERS_H
#define NUMBERS_NUMBERS_H

namespace Numbers
{

namespace Details /// stay out ... please ... pray and hope
{

int MyMax(int x, int y)
{
    return (x > y) ? x : y;
}

} // namespace Details

inline int absDiff(int x, int y)
{
    return (x > y) ? x - y : y - x;
}

int squareMax(int x, int y)
{
    return Details::MyMax(x, y) * Details::MyMax(x, y);
}

} // namespace Numbers

#endif // NUMBERS_NUMBERS_H
