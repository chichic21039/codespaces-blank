#include "Parsable.h"
#include "../../Models/MVP.h"

#include <sstream>
#include <string>

class MVPParser : public Parsable{
public:
    Object* parse(string data) override;
    string parsedObjectName() override;
    string toString() override;
};