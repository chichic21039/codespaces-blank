#pragma once
#include "../../Models/Object.h"
#include "../../Models/Project.h"
#include <vector>


class IDao:public Object
{
public:
virtual vector<Project*> getAll() = 0;
};