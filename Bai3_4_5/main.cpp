/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int c = *b;
    *b = *a;
    *a = c;
}

int main()
{
    int a[5] = {3, 21, 6, 2, 1};
    int i, j, max_p;
    for(i = 5; i > 0 ; i--) {
        for(j = 0; j < i; j++) {
            if(a[j] > a[j+1]) {
                swap(&a[j], &a[j+1]);
            }
        }
    }
    
    for(i = 0; i< 5; i++) cout << a[i] << endl;
    
    cout << "Max value = " << a[4] << endl;

    return 0;
}
