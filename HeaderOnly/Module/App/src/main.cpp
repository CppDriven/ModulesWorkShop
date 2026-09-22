import Numbers;

int main()
{
    /// evil me   ==>  this wil not compile :-)
    /// [[maybe_unused]] const auto breakIn = Numbers::Details::MyMax(242, 100);


    return Numbers::absDiff(242, 100) +
            Numbers::absDiff(142, 242) +
            Numbers::squareMax(1, 2);
}
