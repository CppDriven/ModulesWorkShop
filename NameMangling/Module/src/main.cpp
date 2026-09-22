import Numbers;

int main()
{
    /// evil me   ==>  this wil not compile :-)
    /// [[maybe_unused]] const auto breakIn = NumbersNs::Details::MyMax(242, 100);


    return NumbersNs::absDiff(242, 100) +
            NumbersNs::absDiff(142, 242) +
            NumbersNs::squareMax(1, 2);
}
