// #include "Factory.h"

// string Factory::toString() {
//     return "Factory";
// }

#include "Factory.h"
#include "../Models/MVP.h"
#include "../Models/Idea.h"


#include "../Services/DataAccess/MockDao.h"
#include "../Services/DataAccess/TextDao.h"

void Factory::_config()
{
    if (_isConfigured)
        return;
    _isConfigured = true;
    _registerType<Idea>();
    _registerType<MVP>();
   
    //_registerService<IDao, TextDao>();
    _registerService<IDao, MockDao>();
}

Object *Factory::getType(string name)
{
    Object *type = nullptr;

    if (_types.find(name) != _types.end())
    {
        type = _types[name];
    }

    return type;
}

Factory::Factory()
{
    _config();
}

shared_ptr<Factory> Factory::instance()
{
    if (_instance == nullptr)
    {
        _instance = shared_ptr<Factory>(new Factory());
    }

    return _instance;
}

string Factory::toString()
{
    return "Factory";
}