#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <cstdio>
using namespace std;

int main(){

    string c;
    int a, b;
    //do{}while();
//    cout <<  << endl;
    while(true){
    int d = time(nullptr);
    int real_time = 1707748973; //12 Feb 2024, 17:42:53
    printf("%d seconds\n", d);
//    printf("%d minutes\n", d/60);
//    printf("%d hours\n", (d/60)/60);
//    printf("%d days\n", ((d/60)/60)/24);
//    printf("%d weeks\n", (((d/60)/60)/24)/7);
//    printf("%d month\n", (((d/60)/60)/24)/30);
//    printf("%d years\n", (((d/60)/60)/24)/365);
//    printf("hello, write your time target like this: 25-2024-Jan, use \"help\" for more information about it \n");
    }
//    if (a == "help"){
//        return 0;
//    }

    //create real time
    scanf("%d-%d-%s", &a, &b, &c);
    printf("%d-%d-%s\n", a, b, &c);
    printf("%d\n%d\n%s", a, b, &c);

//    cout << a << b << c;
//    if(){
//    printf(&a, "-", atoi(&b), "-", atoi(&c));
//    }


    return 0;
}
