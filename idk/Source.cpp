#include <iostream>

using namespace std;
const int N = 10;

int main(){
    // why whenever we have +1 in N and for(int i = 1)?
    // because if we in first times
    // we will call an array in index -1
    // we will get error or no understand number
    // because we didnt create array in -1 index
    // that is why we use N + 1,
    // and we started in 1 no 0 in for loop like:
    // for(int i = 1) no for(int i = 0)
    int a[N + 1] = {0};

    cout << "Input 10 digits" << endl;
    for(int i = 1; i < N + 1; i++)
        cin >> a[i];

    system("cls");

    for(int i = 1; i < N + 1; i++){

        if(a[i]%2 == 1)
            cout << a[i-1]+a[i+1] << endl;
        else
            cout << a[i]*2 << endl;
    }



    return 0;
}
