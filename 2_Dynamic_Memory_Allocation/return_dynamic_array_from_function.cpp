#include <bits/stdc++.h>
using namespace std;

int* myFunc ()
{
    int *arr = new int [5];

    for (int i=0; i<5; i++) arr[i] = i+1;;

    return arr;
}
int main ()
{
    int *a = myFunc();

    for (int i=0; i<5; i++) {
        cout << a[i] << endl;
    }
    delete []a;
    return 0;
}
