
#include "MockDao.h"
#include "../../Models/MVP.h"
#include "../../Models/Idea.h"

string MockDao::toString() {
    return "MockDao";
}

vector<Project*> MockDao::getAll() {
    vector<Project*> project;
    project.push_back(new Idea(6, "SuperTech"));
    project.push_back(new MVP(3,4,"VirtualCar"));
    project.push_back(new Idea(7, "AIChatBot"));
    project.push_back(new MVP(2,5,"SmartHome"));
    project.push_back(new Idea(8, "ARApp"));
    project.push_back(new MVP(1,6,"MobileApp"));
    return project;
}
