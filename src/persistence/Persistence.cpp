/*!
 * Copyright Mind Powered Corporation 2020
 *
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>
#include <haxecpp/haxe_thread.h>
#include <vector>
#include <stdexcept>
#include "persistence/Persistence.h"

void __boot_persistence() {}

namespace persistence{

Persistence_obj::Persistence_obj() {}
void Persistence_obj::__construct(::maglev::MagLev bus) { new Persistence(bus); }

Persistence::Persistence(::maglev::MagLev bus)
{
    run_haxe([this, &bus](){
        this->_cppbus = new ::maglev::MagLevCpp_obj();
        this->_cppbus->__construct(bus);
        registerMyMethods(this->_cppbus);
    });
}

Persistence::~Persistence()
{

}

void Persistence::registerMyMethods(::maglev::MagLevCpp cppbus)
{
    regNoImpl("Persistence.EnglishAuction.Auction.CreateNew", cppbus);
    regNoImpl("Persistence.EnglishAuction.Auction.FindById", cppbus);
    regNoImpl("Persistence.EnglishAuction.Auction.FindStarting", cppbus);
    regNoImpl("Persistence.EnglishAuction.Auction.FindEnding", cppbus);
    regNoImpl("Persistence.EnglishAuction.Auction.FindOpen", cppbus);
    regNoImpl("Persistence.EnglishAuction.Bid.CountForAuction", cppbus);
    regNoImpl("Persistence.EnglishAuction.Bid.FindByHighestPriceForAuction", cppbus);
    regNoImpl("Persistence.EnglishAuction.Bid.New", cppbus);
}

void Persistence::regNoImpl(std::string method, ::maglev::MagLevCpp cppbus)
{
    cppbus->_hx_register(method, [&cppbus, method](std::vector<::maglev::CppAny> args) -> ::maglev::CppAny {
        run_haxe([&cppbus, method](){
            ::maglev::MagLevCpp cppbus2 = cppbus;
            std::vector<::maglev::CppAny> myargs;
            ::maglev::CppAny myarg0 = new ::maglev::CppAny_obj();
            myarg0->setStdString("_not_implemented_");
            myargs.push_back(myarg0);
            ::maglev::CppAny myarg1 = new ::maglev::CppAny_obj();
            myarg1->setStdString("persistence");
            myargs.push_back(myarg1);
            ::maglev::CppAny myarg2 = new ::maglev::CppAny_obj();
            myarg2->setStdString("cpp");
            myargs.push_back(myarg2);
            ::maglev::CppAny myarg3 = new ::maglev::CppAny_obj();
            myarg3->setStdString(method);
            myargs.push_back(myarg3);
            cppbus2->call("MindPowered.Telemetry.Send", myargs, [](::maglev::CppAny async_ret) {
                (void)async_ret;
            });
            std::string errmsg = "You are trying to use the '" + method + "' method but it's not quite done yet. Please email support@mindpowered.dev to find out when it will be done.";
            throw std::runtime_error(errmsg);
        });
        ::maglev::CppAny ret = new ::maglev::CppAny_obj();
        ret->setNull();
        return ret;
    });
}

}//namespace persistence
