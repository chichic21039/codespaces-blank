

#include "ObjectToTableConverter.h"


ObjectToTableConverter::ObjectToTableConverter()
{
    this->headers = {};
    this->columnSizes = {};
}

string ObjectToTableConverter::toString()
{
    return "ObjectToTableConverter";
}

ObjectToTableConverter::ObjectToRowConverter::ObjectToRowConverter()
{
    this->columnSizes = {};
}