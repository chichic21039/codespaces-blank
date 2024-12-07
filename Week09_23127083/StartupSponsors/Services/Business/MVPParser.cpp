#include "MVPParser.h"
Object *MVPParser::parse(string data)
{
    stringstream ss(data);
    string token;
    int runMonths, marketing;
    string name;

    // Phân tích tên của MVP
    getline(ss, token, ':'); // Bỏ qua "MVP:"
    getline(ss, name, ',');

    // Phân tích thời gian chạy và marketing
    getline(ss, token, '=');
    ss >> runMonths;
    getline(ss, token, ',');
    getline(ss, token, '=');
    ss >> marketing;

    // Tạo đối tượng MVP và trả về
    return new MVP(runMonths, marketing, name);
}

string MVPParser::parsedObjectName()
{
    return "MVPParser";
}

string toString()
{
    return "MVPParser";
}