module;

#include <vector>
#include <string>

export module Numbers;

namespace Numbers
{

export int absDiff(int x, int y);

export int squareMax(int x, int y);

export std::vector<std::string> doubleString(const std::string& input);

export std::string reverse(const std::string& input);


} // namespace Numbers
