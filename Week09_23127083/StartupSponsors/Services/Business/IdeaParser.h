#include "Parsable.h"
#include "../../Models/Idea.h"

#include <sstream>
#include <string>

class IdeaParser : public Parsable{
public:
    Object* parse(string data) override;
    string parsedObjectName() override;
    string toString() override;
};