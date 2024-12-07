#include "../../lib/ObjectToTableConverter.h"
#include "../../lib/Object.h"
#include "../../Models/Idea.h"
#include "../../Models/MVP.h"

class ProjectToTableConverter : public ObjectToTableConverter
{ 
    private:
    vector<string> headers;
    vector<int> columnSizes;
    public:
    ProjectToTableConverter();
    string convert(vector<Object*> objects) override;
    string toString() override;
    class ProjectToRowConverter {
        private:
        vector<int> columnSizes;
        public:
        ProjectToRowConverter(vector<int> columnSizes);
        string convert(Idea* idea);
        string convert(MVP* mvp);  
    };
};