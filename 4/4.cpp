#include <iostream>
#include <fstream>
using namespace std;

//struct book
//{
//    string name_of_book;
//    string author_of_book;
//    int creted_of_book_by_the_year;
//    string janra_of_book;
//};

int main()
{
    string* first_string_memory = new string();
    *first_string_memory = "how much do you want to create books?";
    cout << *first_string_memory << endl;

    delete first_string_memory;

    int* amout_of_books = new int();
    cin >> *amout_of_books;
    cin.ignore();

//    book* book[amout_of_books];
    //название
    const string name_file = "data.txt";
    // из структуры fstream в переменную f
    fstream f;
    // пересоздаём файл, дабы не возникало проблем
    f.open(name_file, ios::out);
    f.close();

    //ask data about book
    for(short i = 0; i < *amout_of_books; i++)
    {
        string* string_memory0 = new string();
        *string_memory0 = "name_of_book:";
        cout << *string_memory0 << endl;

        getline(cin, *string_memory0);

        f.open(name_file, ios::app);
        f << *string_memory0 << endl;
        f.close();



        *string_memory0 = "author_of_book:";
        cout << *string_memory0 << endl;

        getline(cin, *string_memory0);

        f.open(name_file, ios::app);
        f << *string_memory0 << endl;
        f.close();



        int* creted_of_book_by_the_year = new int();
        *string_memory0 = "creted_of_book_by_the_year:";
        cout << *string_memory0 << endl;

        cin >> *creted_of_book_by_the_year;

        f.open(name_file, ios::app);
        f << *creted_of_book_by_the_year << endl;
        f.close();
        cin.ignore();
        delete creted_of_book_by_the_year;



        *string_memory0 = "janra_of_book:";
        cout << *string_memory0 << endl;

        getline(cin, *string_memory0);

        f.open(name_file, ios::app);
        f << *string_memory0 << endl;
        f.close();
        delete string_memory0;

        system("cls");
    }

    f.open(name_file, ios::in);
    for(short i = 0; i < *amout_of_books; i++)
    {
        string* string_memory1 = new string();

        cout << i;
        *string_memory1 = ". ";
        cout << *string_memory1;
        *string_memory1 = "book:";
        cout << *string_memory1 << endl;

        *string_memory1 = "name_of_book - ";
        cout << *string_memory1;
        f >> *string_memory1;
        cout << *string_memory1 << endl;

        *string_memory1 = "author_of_book - ";
        cout << *string_memory1;
        f >> *string_memory1;
        cout << *string_memory1 << endl;


        int* creted_of_book_by_the_year = new int();

        *string_memory1 = "creted_of_book_by_the_year - ";
        cout << *string_memory1;
        f >> *creted_of_book_by_the_year;
        cout << *creted_of_book_by_the_year << endl;
        delete creted_of_book_by_the_year;


        *string_memory1 = "janra_of_book - ";
        cout << *string_memory1;
        f >> *string_memory1;
        cout << *string_memory1 << endl;

        delete string_memory1;
    }

    delete amout_of_books;
    f.close();
    //show the data about book
    return 0;
}
