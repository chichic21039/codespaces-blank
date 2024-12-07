#include "IDao.h"

class TextDao:public IDao
{
public:
    vector<Project*> getAll() override;
    string toString() override;
};