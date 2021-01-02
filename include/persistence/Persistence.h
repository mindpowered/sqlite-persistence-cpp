#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 *
 * https://mindpowered.dev/
 */

void __boot_persistence();

namespace persistence{

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>

class Persistence_obj
{
public:
    Persistence_obj();
    __construct(::maglev::MagLev);
};

class Persistence
{
private:
    ::maglev::MagLevCpp _cppbus;
public:
    Persistence(::maglev::MagLev);
    virtual ~Persistence();
private:
    void registerMyMethods(::maglev::MagLevCpp);
    void regNoImpl(std::string, ::maglev::MagLevCpp);
};

}//namespace persistence
