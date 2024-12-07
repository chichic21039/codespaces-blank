#include "IdeaParser.h"

Object* IdeaParser::parse(string data)  {
        stringstream ss(data);
        string token;
        int devMonths;
        string name;

        getline(ss, token, ':');
        getline(ss, name, ',');

        getline(ss, token, '=');
        ss >> devMonths;

        return new Idea(devMonths, name);
    }