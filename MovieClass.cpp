#include "MovieClass.h"
#include "TheaterClass.h"

Movie::Movie()
{
	Title = "Star Wars: A New Hope";
	Genre = "Sci-Fi";
	ShowTime = 0;
}

Movie::Movie(string T, string G, int STime)
{
	Title = T;
	Genre = G;
	ShowTime = STime;
}

string Movie::GetTitle()
{
	return Title;
}

int Movie::GetShowTime()
{
	return ShowTime;
}

string Movie::GetGenre()
{
	return Genre;
}