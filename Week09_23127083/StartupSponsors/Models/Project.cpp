#include "Project.h"
#include <fstream>
#include <sstream>
#include <iostream>

string Project::toString()
{
    return "Project";
}

Project::Project(int DevPerMonth, int RunningPerMonth, int MarketingPerMonth)
{
    this->DevPerMonth = DevPerMonth;
    this->RunningPerMonth = RunningPerMonth;
    this->MarketingPerMonth = MarketingPerMonth;
}

void Project::setSponsor(string filename) {
        std::ifstream file(filename);
        std::string line;

        if (file.is_open()) {
            while (getline(file, line)) {
                std::stringstream ss(line);
                std::string key;
                int value;

                getline(ss, key, '=');
                ss >> value;

                if (key == "DevPerMonth") {
                    DevPerMonth = value;
                } else if (key == "MarketingPerMonth") {
                    MarketingPerMonth = value;
                } else if (key == "RunningPerMonth") {
                    RunningPerMonth = value;
                }
            }
            file.close();
        } else {
            std::cerr << "Unable to open file." << std::endl;
        }