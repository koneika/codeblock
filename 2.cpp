#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* first_node(int &data, node* second)
{
    node* first = new node;

    first->data = data;
    first->next = second;

    return first;
}
node* second_node(int &data, node* third)
{
    node* second = new node;

    second->data = data;
    second->next = third;

    return second;

}
node* third_node(int &data, node* fourth)
{
    node* third = new node;

    third->data = data;
    third->next = fourth;

    return third;
}
node* fourth_node(int &data, node* fifth)
{
    node* fourth = new node;

    fourth->data = data;
    fourth->next = fifth;

    return fourth;
}
node* fifth_node(int &data)
{
    node* fifth = new node;

    fifth->data = data;
    fifth->next = nullptr;

    return fifth;
}

int main(node* first, node* second, node* third, node* fourth, node* fifth)
{
    int data;
    first_node(1, second);
    second_node(2, third);
    third_node(3, fourth);
    fourth_node(4, fifth);
    fifth_node(5);

    cout << first_node()->data << endl;

    return 0;
}
