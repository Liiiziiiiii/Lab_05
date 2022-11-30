#include <iostream>

using namespace std;

class Movie
{
public:
    int id;
    string title;
    int ranking;
    int release_date;
    int character_number;
    string comment;
    int ticket_price;

    //Конструктор
    Movie()
    {
    }
    Movie(int Id, string Title, int Ranking, int Release_date, int Character_number, string Comment, int Ticket_price)
    {
        id = Id;
        title = Title;
        ranking = Ranking;
        release_date = Release_date;
        character_number = Character_number;
        comment = Comment;
        ticket_price = Ticket_price;
    }


    void print_1()
    {
        cout << "\nId -- " << id << endl;
        cout << "   Title" << title << endl;
        cout << "   Ranking -- " << ranking << endl;
        cout << "   Release date --" << release_date << endl;
        cout << "   Character_number -- " << character_number << endl;
        cout << "   Comment -- " << comment << endl;
        cout << "   Ticket price -- " << ticket_price << endl;
    }
};

class Cinema
{
public:
    string name;
    string location;
    Movie arr[99];
    Movie arr2[1];
    int NumberOfMovies = 0;

    Cinema(string Name, string Location)
    {
        name = Name;
        location = Location;
    }

    void MovieAdd(Movie Movie_)
    {
        arr[NumberOfMovies] = Movie_;
        NumberOfMovies++;
    }

    void SeeAllBook_ByYear()
    {
        for (int i = 1; i < NumberOfMovies; i++)
        {
            for (int j = 1; j < NumberOfMovies; j++)
            {
                if (arr[j].release_date > arr[j - 1].release_date)
                {
                    arr2[0] = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = arr2[0];
                }
            }
        }

        cout << "------------------------------------------------Sort By Year-----------------------------------------------------------" << endl;
        for (int i = 0; i < NumberOfMovies; i++)
        {
            arr[i].print_1();
        }
    }
};

int main()
{
    enum type {
        Action,
        Comedy,
        Drama,
        Fantasy
    };

    int a = type::Action;
    int b = type::Comedy;
    int c = type::Drama;
    int m = type::Fantasy;

    string choose;
    cout << "\n Action";
    cout << "\nComedy";
    cout << "\nDrama";
    cout << "\nFantasy";
    cout << "\nAll";
    cout << "\nChoose -- ";
    cin >> choose;

    if (choose == "Action") {
        Movie a(1, "Titan", 9, 2022, 1, "omg", 33);
        a.print_1();

    }
    else if (choose == "Comedy") {
        Movie b(2, "Tools", 5, 2021, 2, "ohhhh", 433);
        b.print_1();
    }
    else if (choose == "Drama") {
        Movie c(3, "Time", 10, 2022, 3, "perfect", 333);
        c.print_1();
    }
    else if (choose == "Fantasy") {
        Movie p(4, "Lucky", 10, 2005, 4, "WOW!!!", 346);
        p.print_1();
    }
    else if (choose == "All") {

        Movie a(1, "Titan", 9, 2022, 1, "omg", 33);
        Movie b(2, "Tools", 5, 2021, 2, "ohhhh", 433);
        Movie c(3, "Time", 10, 2022, 3, "perfect", 333);
        Movie p(4, "Lucky", 10, 2005, 4, "WOW!!!", 346);


        Cinema cinema("BestName", "InTheMiddleOfNowhere");
        cinema.MovieAdd(a);
        cinema.MovieAdd(b);
        cinema.MovieAdd(c);
        cinema.MovieAdd(p);

        cinema.SeeAllBook_ByYear();
    }
 
   
}

 