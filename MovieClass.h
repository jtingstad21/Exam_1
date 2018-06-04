#include <iostream>
using namespace std;

#ifndef MOVIE_H
#define MOVIE_H
class Movie
{
private:
	static string Title;
	static string Genre;
	static int ShowTime;

public:
	Movie();
	Movie(string T, string G, int STime);

	static string GetTitle();
	static int GetShowTime();
	static string GetGenre();
};
#endif