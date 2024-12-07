
#include "Project.h"

class MVP : public Project{
    private:
    int RunMonths;
    int Marketing;
    string name;
    public:
    MVP(int runMonths, int marketing, string name);
    std::string toString() override;
    std::string accept(ProjectToTableConverter::ProjectToRowConverter* visitor) override;
};