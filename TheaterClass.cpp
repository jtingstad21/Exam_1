#include "TheaterClass.h"
#include "MovieClass.h"

Theater::Theater(string N, string P)
{
	N = Name;
	P = Phone;
}

void Theater::AddMovie(Movie& M)
{
	for (int i = 0; i < 10; i++)
	{
		MovieList[i] = M;
	}
}

string Theater::GetMovieForHour(int hour)
{
	if (hour >= 0 && hour <= 23)
	{
		return Movie::GetTitle();
	}
	else
	{
		return "";
	}
}

int Theater::GetShowTimeForGenre(string Genre)
{
	if (Genre == "Comedy")
		return Movie::GetShowTime();
	else if (Genre == "Action")
		return Movie::GetShowTime();
	else if (Genre == "Documentary")
		return Movie::GetShowTime();
	else if (Genre == "Horror")
		return Movie::GetShowTime();
	else
	{
		Genre = "Comedy";
		return Movie::GetShowTime();
	}
}

const int Theater::GetPopcornPrice()
{
	return PopcornPrice;
}

const int Theater::GetCokePrice()
{
	return CokePrice;
}