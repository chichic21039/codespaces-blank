#include "Idea.h"
#include "../Services/UI/ProjectToTableConverter.h"

string Idea::toString() {
    return "Idea";
}

Idea::Idea(int devMonths, string name)
{
    this->devMonths = devMonths;
    this->name = name;
}

std::string Idea::accept(ProjectToTableConverter::ProjectToRowConverter* visitor)
{
    return visitor->convert(this);
}

int Idea::getDevMonths()
{
    return devMonths;
}

string Idea::getName()
{
    return name;
}
