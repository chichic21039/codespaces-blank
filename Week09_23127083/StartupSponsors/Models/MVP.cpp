#include "MVP.h"

using namespace std;

MVP::MVP(int runMonths, int marketing, string name)
{
    this->RunMonths = runMonths;
    this->Marketing = marketing;
    this->name = name;
}

std::string MVP::toString()
{
    return "MVP";
}


std::string MVP::accept(ProjectToTableConverter::ProjectToRowConverter* visitor)
{
    return visitor->convert(this);
}
