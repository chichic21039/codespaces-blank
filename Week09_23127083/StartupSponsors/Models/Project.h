
#include "../../lib/Object.h"
//#include "../Services/UI/ProjectToTableConverter.h"
class ProjectToTableConverter{
    public:
    class ProjectToRowConverter{};
};

class Project: public Object
{
    private:
    int DevPerMonth;
    int RunningPerMonth;
    int MarketingPerMonth;

    public:
    Project(int devPerMonth, int runningPerMonth, int marketingPerMonth);
    void setSponsor(string filename); // filename = "./input/SponsorsPerMonth.txt"
    virtual string accept(ProjectToTableConverter::ProjectToRowConverter* visitor) = 0;
    string toString() override;  
};