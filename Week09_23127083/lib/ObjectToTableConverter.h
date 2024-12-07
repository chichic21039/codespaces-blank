#include "Object.h"
#include <iostream>
#include <string>

#include <vector>
using namespace std;

class ObjectToTableConverter : public Object
{
    private:
    vector<string> headers;
    vector<int> columnSizes;
    public:
    ObjectToTableConverter();
    virtual string convert(vector<Object*> objects) = 0;
    string toString() override;

    class ObjectToRowConverter {
        private:
        vector<int> columnSizes;
        public:
        ObjectToRowConverter();
        string convert(Object* obj);
    };
};

