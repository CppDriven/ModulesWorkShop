#include <cstdio>  /// using c stuff here, since <print> or <iostream> seems to bring <vector> and <string>, <iostream> only string it seems

import Numbers;

int main()
{
    std::puts(Numbers::reverse("front").c_str());

    //const std::vector<std::string> doubled = Numbers::doubleString("242");
    const auto doubled = Numbers::doubleString("242");

    std::puts(doubled[0].c_str());
    std::puts(" ");
    std::puts(doubled[1].c_str());


    auto first = doubled[0];
    //std::string subpart = first.substr(1);
    auto subpart = first.substr(1);
    std::puts(subpart.c_str());


    return Numbers::absDiff(242, 100) +
            Numbers::absDiff(142, 242) +
            Numbers::squareMax(1, 2);
}
