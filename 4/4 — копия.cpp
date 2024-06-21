#include <iostream>
using namespace std;
const int amout_of_books = 5;

struct book
{
    string name_of_book;
    string author_of_book;
    int creted_of_book_by_the_year;
    string janra_of_book;
};

int main()
{
    book book[amout_of_books];

    //ask data about book
    for(int i = 0; i < amout_of_books; i++)
    {
        cout << "name_of_book:" << endl;
        getline(cin, book[i].name_of_book);

        cout << "author_of_book:" << endl;
        getline(cin, book[i].author_of_book);

        cout << "creted_of_book_by_the_year:" << endl;
        cin >> book[i].creted_of_book_by_the_year;
        cin.ignore();

        cout << "janra_of_book:" << endl;
        getline(cin, book[i].janra_of_book);
        system("cls");
    }

    for(int i = 0; i < amout_of_books; i++)
    {
        cout << i << ". " << "book:" << endl;
        cout << "name_of_book - " <<book[i].name_of_book << endl;
        cout << "author_of_book - " << book[i].author_of_book << endl;
        cout << "creted_of_book_by_the_year - " << book[i].creted_of_book_by_the_year << endl;
        cout << "janra_of_book - " << book[i].janra_of_book << endl;

    }
    //show the data about book
    return 0;
}
