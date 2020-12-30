#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 * 
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>
#include <persistence/Persistence.h>
#include <haxecpp/haxe_thread.h>
#include <string>
#include <map>

void __boot_maglev();
void __boot_persistence();

/*!
 * Persistence
 */
class Persistence {
public:
	Persistence()
	{
		run_haxe([](){
			__boot_maglev();
			__boot_persistence();
			::maglev::MagLev m0 = ::maglev::MagLev_obj::getInstance("default");
			auto o = new ::persistence::Persistence_obj();
			o->__construct(m0);
		});
	}
	~Persistence()
	{
	}

	/*!
	 * 
	 * @param obj 
	 * @return {std::string} 
	*/
	std::string EnglishAuction_Auction_CreateNew(std::map<std::string,::maglev::CppAny> obj)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,obj](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setMap(obj);
			myargs.push_back(param0);
			bus->call("Persistence.EnglishAuction.Auction.CreateNew", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getStdString();
	}

	/*!
	 * 
	*/
	void EnglishAuction_Auction_FindById()
	{
		::maglev::CppAny ret;
		run_haxe([&ret](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			bus->call("Persistence.EnglishAuction.Auction.FindById", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	*/
	void EnglishAuction_Auction_FindStarting()
	{
		::maglev::CppAny ret;
		run_haxe([&ret](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			bus->call("Persistence.EnglishAuction.Auction.FindStarting", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	*/
	void EnglishAuction_Auction_FindEnding()
	{
		::maglev::CppAny ret;
		run_haxe([&ret](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			bus->call("Persistence.EnglishAuction.Auction.FindEnding", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	*/
	void EnglishAuction_Auction_FindOpen()
	{
		::maglev::CppAny ret;
		run_haxe([&ret](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			bus->call("Persistence.EnglishAuction.Auction.FindOpen", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	*/
	void EnglishAuction_Bid_CountForAuction()
	{
		::maglev::CppAny ret;
		run_haxe([&ret](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			bus->call("Persistence.EnglishAuction.Bid.CountForAuction", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	*/
	void EnglishAuction_Bid_FindByHighestPriceForAuction()
	{
		::maglev::CppAny ret;
		run_haxe([&ret](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			bus->call("Persistence.EnglishAuction.Bid.FindByHighestPriceForAuction", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	*/
	void EnglishAuction_Bid_New()
	{
		::maglev::CppAny ret;
		run_haxe([&ret](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			bus->call("Persistence.EnglishAuction.Bid.New", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

};

