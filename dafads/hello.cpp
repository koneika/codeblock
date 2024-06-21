#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

//int add(int a, int b) {
    //return a + b;
//}

int main() {
    //string a;
    //cout << "write like this: 10 + 20" << endl;
    //cin >> a;
    //cout << stoi(a);

    //int* dynamicInt = new int;
    //*dynamicInt = 42;
    //cout << "result: " << *dynamicInt << endl;

    //delete dynamicInt;

    vector<int> a = {1,2,3,4,5};

    cout << "Vectors is: "; for(int a : a) {cout << a << " ";}
    cout << endl;


    return 0;
}
