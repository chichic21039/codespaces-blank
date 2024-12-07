#include "IDao.h"

class MockDao:public IDao
{
public:
    vector<Project*> getAll() override;
    string toString() override;
};