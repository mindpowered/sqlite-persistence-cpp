#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 *
 * https://mindpowered.dev/
 */

namespace persistence{

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>

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
