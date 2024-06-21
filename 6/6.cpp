#include <iostream>
using namespace std;

void push(int * arr, int & size_of_memory, int & a, int & data)
{
    arr[a] = data;
    a++;
}

void pop(int * arr, int & size_of_memory, int & a)
{
    for(int i = 0; i < size_of_memory; i++)
    {
        arr[i-1] = arr[i];
    }
    a--;
}

void display(int * arr, int & size_of_memory)
{
    for(int i = 0; i < size_of_memory; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size_of_memory, data;

    cout << "how much memory do you want to use?" << endl;
    cin >> size_of_memory;

    int * arr = new int[size_of_memory];
    int a = 0;

    do
    {

        int choose, choose1;
        cout << endl;
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. display" << endl;
        cin >> choose;
        if(choose == 1)
        {
            cout << "write digit: ";
            cin >> choose1;
            push(arr, size_of_memory, a, data);
        }
        else if(choose == 2)
        {
            pop(arr, size_of_memory, a);
        }
        else if(choose == 3)
        {
            display(arr, size_of_memory);
        }
        else
        {
            cout << "exit" << endl;
            return 0;
        }
    }while(true);

    delete [] arr;
    return 0;
}
