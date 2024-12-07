#include "ProjectToTableConverter.h"
#include "../../Models/Idea.h"
#include "../../Models/MVP.h"
#include <sstream>
#include <iomanip>


string ProjectToTableConverter::ProjectToRowConverter::convert(Idea* idea)
{
    stringstream builder;
    for(int i = 0; i < columnSizes.size(); i++)
    {
        builder << "|" << setfill(' ') << setw(columnSizes[i]);
        if (i == 0)
        {
            builder << idea->toString();
        }
        else if (i == 1)
        {
            builder << idea->getDevMonths();
        }
    }

     builder << "|\n";
    return builder.str();
}