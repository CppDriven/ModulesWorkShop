

void foo() {}

void foo(int x) {(void)x;}

void foo(int x, double d) {(void)x; (void)d;}


namespace NsOne
{
void foo() {}

void foo(int x) {(void)x;}

void foo(int x, double d) {(void)x; (void)d;}

}

namespace NsTwo
{
void foo() {}

void foo(int x) {(void)x;}

void foo(int x, double d) {(void)x; (void)d;}

}

class ClassA
{
public:
void foo() {}

void foo(int x) {(void)x;}

void foo(int x, double d) {(void)x; (void)d;}

};

class ClassB
{
public:
void foo() {}

void foo(int x) {(void)x;}

void foo(int x, double d) {(void)x; (void)d;}

};

int main()
{
    ClassB b;
    b.foo(242, 242.0);

    ClassA a;
    a.foo(242, 242.0);

    return 0;
}
