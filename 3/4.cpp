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
        cout << "book.name_of_book" << endl;
        cin >> book[i].name_of_book;
//        cout << "book.author_of_book" << endl;
//        cin >> book[i].author_of_book;
//        cout << "book.creted_of_book_by_the_year" << endl;
//        cin >> book[i].creted_of_book_by_the_year;
//        cout << "book.janra_of_book" << endl;
//        cin >> book[i].janra_of_book;
//        system("cls");
    }

//    for(int i = 0; i < amout_of_books; i++)
//    {
//        cout << book[i].name_of_book << endl;
//        cout << book[i].author_of_book << endl;
//        cout << book[i].creted_of_book_by_the_year << endl;
//        cout << book[i].janra_of_book << endl;
//    }
    //show the data about book
    return 0;
}
