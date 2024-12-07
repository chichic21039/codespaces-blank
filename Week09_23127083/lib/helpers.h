
#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
#include <tuple>

using namespace std;


template <class T>
class Result {
public:
    bool success;    
    int errorCode;
    string message; 
    T data;   

public:
    Result(bool result, int code, string errorMessage, T info)
    {
    success = result;
    errorCode = code;
    message = errorMessage;
    data = info;
    }
};