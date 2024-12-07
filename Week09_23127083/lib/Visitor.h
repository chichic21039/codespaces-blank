#include "Object.h"

class Visitor : public Object
{
    public:
    //virtual string visit(Object* obj);
    string toString() override;
};