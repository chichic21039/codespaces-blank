#include "Project.h"

class Idea : public Project
{
private:
    int devMonths;
    string name;

public:
Idea (int devMonths, string name);
    string toString() override;
        std::string accept(ProjectToTableConverter::ProjectToRowConverter* visitor) override;
int getDevMonths();
string getName();
};