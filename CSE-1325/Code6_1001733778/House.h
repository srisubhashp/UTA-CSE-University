//Sri Subhash Pathuri; UTA-Id: 1001733778
//Coding Assignment 6
// House class header file template

/* add the necessary includes */
#include<iostream>
#include<string>
#include<mutex>
#include<vector>
#include<cstring>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<chrono>
#include<map>
#include<thread>

/* add an include guard named _HOUSE_  */
#ifndef _HOUSE_
#define _HOUSE_
class House
{
	public :
		/* create the prototype for the constructor based on House.cpp */
		House(std::string Name, std::map<int,std::string>CandyRanking);

		/* create the prototype for ringDoorbell() based on House.cpp */
		virtual std::string ringDoorbell(std::ostringstream &path) = 0;// we are making this a virtual function inorder to make this class virtual 
	
		//initializing the destructor
		~House();
	
	protected:
		std::string houseName;
		std::mutex door;/* declare a mutex named door */
		std::map<int,std::string> CandyRankingMap;/* declare a map named CandyRankingMap of type int,string */
};

#endif
