#include <iostream>
using namespace std;
int i = 0;
const int N = 100;
int arr[N];

void push(int data)
{
    arr[i] = data;
    i++;
}

void pop()
{
    for(int i = 0; i < N; i++)
    {
        arr[i-1] = arr[i];
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    pop();
    pop();
    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
