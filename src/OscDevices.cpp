/*!
 * Copyright Mind Powered Corporation 2020
 *
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>

Persistence::Persistence(::maglev::MagLev bus)
{
    //TODO: in haxe thread
    _cppbus = new ::maglev::MagLevCpp(bus);
}

Persistence::~Persistence()
{
    
}
