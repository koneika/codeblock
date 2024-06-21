#include <iostream>

using namespace std;
const int N = 5;

int main()
{
    int a[N][N] = {0};
	for(int j = 0; j < N; j++){
        for(int i = 0; i < N; i++){
            // create a stick or frame in 4 different way

            // it is just like:
            // i==0      j==0      i==4      j==4(by array index)
            if(i==N-N || j==N-N || i==N-1 || j==N-1)
                // fill this frame by 5
                a[i][j] += 5;

            //frame inside by 5 frame
            // i==1(5-4=1) j==1        i==3      j==3
            if(i==N-N+1 || j==N-N+1 || i==N-2 || j==N-2)
                //so, if this stick find 5, no add by 4, or you will see frame 5 + frame 4
                if(a[i][j] != 5)
                // fill it by 4
                    a[i][j] += 4;

            //frame inside 5 and 4 frames
            // i==3        j==3        i==2      j==2
            if(i==N-N+2 || j==N-N+2 || i==N-3 || j==N-3)
                //no fill if in this array already exist 5 and 4,
                // so, if it is critical use target 5 and 4,
                // see my code below, it dont use target 5 and 4
                // but this code is more writed by coordinates in matrix
                if(a[i][j] != 5 && a[i][j] != 4)
                    // fill it by 3
                    a[i][j] += 3;
		cout << a[i][j] << " ";
    }
    cout << endl;
    }
    return 0;
}

































// used another method, it dont have a target 5 and 4, it is created by matrix of coordinates

//    int a[N][N] = {0};
//    for(int j = 0; j < N; j++){
//        for(int i = 0; i < N; i++){
//            if(j==0  ||  i==0  ||  j==N-1  ||  i==N-1)
//                a[i][j] += 5;
//            if(j==1 && i!=0 && i!=N-1  ||  i==1 && j!=0 && j!=N-1  ||  j==N-2 && i!=0 && i!=N-1  ||  i==N-2 && j!=0 && j!=N-1)
//                a[i][j] += 4;
//            if(j==2 && i!=0 && i!=1 && i!=N-1 && i!=N-2 || i==2 && j!=0 && j!=1 && j!=N-1 && j!=N-2 || j==N-3 && i!=0 && i!=1 && i!=N-1 && i!=N-2
//               || i==N-3 && j!=0 && j!=1 && j!=N-1 && j!=N-2)
//                a[i][j] += 3;
//            cout << a[i][j] << " ";
//        }
//    cout << endl;
//    }


// just old trash, not necessary
            /*if (i == N-1 - N-1 || !i == j && !i == N || !j == N)
                a[i+1][j+1] += 4;*/
            /*if(i == N-1)*/
