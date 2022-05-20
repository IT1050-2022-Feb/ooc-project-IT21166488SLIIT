#include <iostream>
#include <string>
#include "movie.h"
using namespace std;

Movie::Movie()
{
}

Movie::Movie(int id, string name, string cat, string dir, string wri, string cas) {
    movieID = id;
    movieName = name;
    category = cat;
    director = dir;
    writers = wri;
    cast = cas;
};

void Movie::displayMovieDetails() {
    cout << "Movie ID: " << movieID << endl;
    cout << "Movie Name: " << movieName << endl;
    cout << "Movie Category : " << category << endl;
    cout << "Movie Director: " << director << endl;
    cout << "Movie Writers: " << writers << endl;
    cout << "Movie Cast: " << cast << endl << endl;
};

NowShowingMovie::NowShowingMovie()
{
}

NowShowingMovie::NowShowingMovie(int id, string name, string cat, string dir, string wri, string cas, string endDate)
    :Movie(id, name, cat, dir, wri, cas)
{
    showEndDate = endDate;
}

void NowShowingMovie::displayMovieDetails()
{
    cout << "Movie ID: " << movieID << endl;
    cout << "Movie Name: " << movieName << endl;
    cout << "Movie Category : " << category << endl;
    cout << "Movie Director: " << director << endl;
    cout << "Movie Writers: " << writers << endl;
    cout << "Movie Cast: " << cast << endl;
    cout << "Show endDate: " << showEndDate << endl << endl;
}

ComingSoonMovie::ComingSoonMovie()
{
}

ComingSoonMovie::ComingSoonMovie(int id, string name, string cat, string dir, string wri, string cas, string rDate)
    :Movie(id, name, cat, dir, wri, cas)
{
    releaseDate = rDate;
}

void ComingSoonMovie::displayMovieDetails()
{
    cout << "Movie ID: " << movieID << endl;
    cout << "Movie Name: " << movieName << endl;
    cout << "Movie Category : " << category << endl;
    cout << "Movie Director: " << director << endl;
    cout << "Movie Writers: " << writers << endl;
    cout << "Movie Cast: " << cast << endl;
    cout << "Movie Release Date: " << releaseDate << endl << endl;
}