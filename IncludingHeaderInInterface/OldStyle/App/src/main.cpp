#include "Numbers.h"
#include <print>

int main()
{
    std::println("{}", Numbers::reverse("front"));
    
    const auto doubled = Numbers::doubleString("242");
    std::println("{}", doubled);
    
    
    return Numbers::absDiff(242, 100) +
            Numbers::absDiff(142, 242) +
            Numbers::squareMax(1, 2);
}
