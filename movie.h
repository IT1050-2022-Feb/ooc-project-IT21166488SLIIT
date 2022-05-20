using namespace std;
// Class Movie
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

class NowShowingMovie: public Movie {
protected:
    string showEndDate;
public:
    NowShowingMovie();
    NowShowingMovie(int id, string name, string cat, string dir, string wri, string cas, string endDate);
    void displayMovieDetails();
};

class ComingSoonMovie : public Movie {
protected:
    string releaseDate;
public:
    ComingSoonMovie();
    ComingSoonMovie(int id, string name, string cat, string dir, string wri, string cas, string rDate);
    void displayMovieDetails();
};