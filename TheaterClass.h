#include "MovieClass.h"
#include <iostream>
using namespace std;

class Theater
{
private: 
	int PopcornPrice;
	int CokePrice;
	string Name;
	string Phone;
	int hour;
	static Movie MovieList[];

public:
	Theater(string N, string P);
	
	static void AddMovie(Movie& M);
	string GetMovieForHour(int hour);
	int GetShowTimeForGenre(string Genre);
	const int GetPopcornPrice();
	const int GetCokePrice();
};
