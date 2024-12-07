// #pragma once
// #include <map>
// #include <typeinfo>
// using namespace std;

// #include "../models/Object.h"

// class Factory: public Object {
// private:
//     inline static map<string, Object*> _services;
// public:
//     template <typename Parent, typename Child>
//     static void registerService() {
//         string name = typeid(Parent).name();
//         _services.insert({name, new Child()});
//     }

//     template <typename Child>
//     static Object* getService() {
//         string name = typeid(Child).name();
//         return _services[name];
//     }

//     string toString() override;
// };


#ifndef FACTORY_H
#define FACTORY_H
#include <string>
#include <vector>
#include <map>
#include <typeinfo>
#include <iostream>
#include <memory>
using namespace std;

#include "../Models/Object.h"

class Factory: public Object {
private:
    inline static bool _isConfigured = false;
    inline static map<string, Object*> _types;
    inline static map<string, Object*> _services;
    static void _config();

    template <typename T>
    static void _registerType() {
        T* project = new T();
        _types.insert(
            {project->name(), project}
        );
    }

    template <typename Parent, typename Child>
    static void _registerService() {
        // IDaO* type = new MockDao();
        Parent* type = new Child();
        _services.insert(
            // {"IDao", type}
            {typeid(type).name(), type} 
        );
    }

private:
    inline static shared_ptr<Factory> _instance = nullptr;
    Factory();
public:
    static shared_ptr<Factory> instance();

public:

    static Object* getType(string name);

    template <typename T>
    static Object* getService() {
        Object* service = nullptr;
        string name = typeid(T*).name();
        if (_services.find(name) != _services.end()) {
            service = _services[name];
        }
        return service;
    }
    string toString() override;
};

#endif