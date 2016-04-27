#ifndef NBACHAMPS_H
#define NBACHAMPS_H
#include <string>
//#include <vector>

struct HashElem{
	std::string champs;
	std::string year;
	std::string results;
	std::string runnersup;
	HashElem *next;
    HashElem *previous;

	HashElem(){};
	HashElem(std::string in_year, std::string in_champs, std::string in_results, std::string in_runnersup)
	{
		champs = in_champs;
		year = in_year;
		results = in_results;
		runnersup = in_runnersup;
		next = NULL;
		previous = NULL;
	}

};

class NBAChamps
{
	public:
		NBAChamps();
		~NBAChamps();
		void printTableContents();
		void insertYear(std::string year, std::string champs, std::string results, std::string runnersup);
		int ChampNumber(std::string name);
		int RunnersUpNumber(std::string name);
		int FinalsAppearances(std::string name);
		void ListChampYears(std::string name);
		void ListRunnersUpYears(std::string name);
		void ListFinalsYears(std::string name);
		void ListMatchups(std::string name1, std::string name2);
		void findSeason(std::string season);
	private:
		//int hashSum(std::string x, int s);
		int hashSum(std::string x);
		static const int tableSize = 10;
		HashElem* hashTable[10];

};

#endif // NBACHAMPS_H