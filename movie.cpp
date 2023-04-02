#include <iostream>
using namespace std;
struct movie
{
    string movie_name;
    string director_name;
    string language;
    string journal;
    int no_of_songs;
    string hero_name;
    string heroine_name;
    struct release
    {
        int date;
        int month;
        int year;
    } time;
};

int main(int argc, char const *argv[])
{

    int n;
    cout << "Enter number of movies: " << endl;
    cin >> n;
    struct movie mov[n];

    for (int i = 0; i <= n; i++)
    {
        cout << "Enter movie name : " << endl;
        cin >> mov[i].movie_name;

        cout << "Enter director name: " << endl;
        cin >> mov[i].director_name;

        cout << "Enter language : " << endl;
        cin >> mov[i].language;

        cout << "Enter journal: " << endl;
        cin >> mov[i].journal;

        cout << "Enter number of songs: " << endl;
        cin >> mov[i].no_of_songs;

        cout << "Enter hero name: " << endl;
        cin >> mov[i].hero_name;

        cout << "Enter heroine name: " << endl;
        cin >> mov[i].heroine_name;

        cout << "Enter date";
        cin >> mov[i].time.date;

        cout << "Enter month :" << endl;
        cin >> mov[i].time.month;

        cout << "Enter year: " << endl;
        cin >> mov[i].time.year;
    }
    return 0;
}
