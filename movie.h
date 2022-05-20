using namespace std;
// Movie Class - Parent Class
class Movie
{
protected:
    int movieID;
    string movieName;
    string category;
    string director;
    string writers;
    string cast;

public:
    Movie();
    Movie(int id, string name, string cat, string dir, string wri, string cas);
    void displayMovieDetails();
};

// Now Showing Movie Class -  Child Class
class NowShowingMovie: public Movie {
protected:
    string showEndDate;
public:
    NowShowingMovie();
    NowShowingMovie(int id, string name, string cat, string dir, string wri, string cas, string endDate);
    void displayMovieDetails();
};

// Coming Soon Movie Class - Child Class
class ComingSoonMovie : public Movie {
protected:
    string releaseDate;
public:
    ComingSoonMovie();
    ComingSoonMovie(int id, string name, string cat, string dir, string wri, string cas, string rDate);
    void displayMovieDetails();
};