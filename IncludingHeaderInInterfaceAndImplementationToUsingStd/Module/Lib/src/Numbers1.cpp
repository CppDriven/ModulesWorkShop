module Numbers;

import std;

namespace Numbers
{

int absDiff(int x, int y)
{
    return (x > y) ? x - y : y - x;
}

std::vector<std::string> doubleString(const std::string& input)
{
    const std::vector<std::string> result{input, input};
    return result;
}

std::string reverse(const std::string& input)
{
    auto result = input;
    std::reverse(result.begin(), result.end());
    return result;
}

} // namespace Numbers
