#include "TextDao.h"

#include <fstream>
#include <iostream>
using namespace std;

#include "../Factory.h"

vector<Project*> TextDao::getAll() {
    vector<Project*> projects;
    string input = "./input/MayProposals.txt";
    string checksum = "./input/MayProposals.checksum.txt";
    ifstream reader;    

    // TODO: Check exists
    reader.open(checksum, ios::in);
    string buffer;
    getline(reader, buffer);
    int count = stoi(buffer);
    reader.close();

    reader.open(input, ios::in);
    for(int i = 1; i <= count; i++) {
        string name;
        getline(reader, name);

        Project* project = dynamic_cast<Project*>(
            Factory::getType(name)
        );
        if (project != nullptr) {
            projects.push_back(project);
        }
    }

    reader.close();
    return projects;
}

string TextDao::toString() {
    return "TextDao";
}