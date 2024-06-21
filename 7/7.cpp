#include <iostream>
#include <string>
using namespace std;

struct Box
{
    int data;
    Box * next;
};

Box * beginner_box (int a)
{
    Box * new_box = new Box();

    new_box->data = a;
    new_box->next = nullptr;

    return new_box;
}


Box * add_box (int a)
{
    Box * new_box = new Box();

    new_box->data = a;
    new_box->next = nullptr;

    return new_box;
}


int main()
{
    int a;
    cout << "write data for the first box, here: " << endl;
    cin >> a;

    cout << add_box(a)->data << endl;
    return 0;
}
