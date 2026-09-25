
/// this code is not a module, but uses:
///     - includes from old libraries,
///     - the std module

/// assume that header from that library, does an include of <string>
///         ==> so this include appears here as if we wrote it ourselves

///         ==> let's reduce to that here below
/// ==> include <string>
/// ==> import std;



///  ORDER MATTERS
///     FIRST includes
///     SECOND import std

/// other way around => gcc  says no, clang 23 is ok (though I think clang 22 did not accept it)
///     it seems that is just a trick in clang ... and is not conformant ...

// before the import !
#include <string>

import std;

// not after the import
//#include <string>


int main()
{
    std::println("One, you lock the target");

    const std::string test{"two, you bait the line"};


    std::println("{}", test);

    return 0;
}
