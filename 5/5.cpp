#include <iostream>
#include <string>
using namespace std;
const int N = 100;

struct Contact
{
    string name;
    string phone_number;
    Contact* next;
};


int main()
{
    string x, a, b;
    Contact cont;
    cout << "write 1-1:" << endl;
    cin >> x;
    if(x == "1")
    {
        cout << "write name of contact: " << endl;
        cin >> a;
        cout << "write phone of contact: " << endl;
        cin >> b;
        add_contact(a, b);
        cout << cont.name << endl;
        cout << cont.phone_number << endl;
    }



    return 0;
}

//void add_contact(string &a, string &b)
//{
//    Contact* new_contact = new Contact();
//
//    new_contact->name = a;
//    new_contact->phone_number = b;
//    new_contact->next = nullptr;
//
//}
