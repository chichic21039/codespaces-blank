#include "../../lib/Object.h"

class Parsable:public Object{
public:
    virtual Object* parse(string data) = 0;
    virtual ~Parsable() {}
    virtual string parsedObjectName() = 0;

};