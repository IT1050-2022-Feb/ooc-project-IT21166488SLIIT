#include <iostream>
#include <string>
#include "admin.h"
#include "movie.h"
using namespace std;

int main(void){

    cout << "-- Admin Details --" << endl;
	Admin ad001 = Admin(1, "Diwan Sachidu", "diwansachidu", "diwansachidu@gmail.com");
	ad001.displayAdminDetails();

	cout << "-- Movie Details --" << endl;
    Movie m1 = Movie(1,"Sonic the Hedgehog 2", "Action", "Jeff Fowler", "Josh Miller,Patrick Casey,John Whittington", "Ben Schwartz,Idris Elba,Colleen O'Shaughnessey");
    m1.displayMovieDetails();

    cout << "-- Now Showing Movie Detials --" << endl;
    NowShowingMovie n1 = NowShowingMovie(2, "Turning Red", "Animation", "Domee Shi", "Rosana Sullivan,Searit Huluf,Sarah Streicher", "Rosalie Chiang,Sandra Oh,Ava Morse", "2022-05-30");
    n1.displayMovieDetails();

    cout << "-- Comimg Soon Movie Detials --" << endl;
    ComingSoonMovie c1 = ComingSoonMovie(3, "Jurassic World Dominion", "Adventure", "Colin Trevorrow", "Colin Trevorrow,Derek Connolly,Emily Carmichael", "Sam Neill,Laura Dern,Jeff Goldblum", "2022-07-10");
    c1.displayMovieDetails();

    return 0;
}