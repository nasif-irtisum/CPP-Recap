#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int *a = new int [5];

    for (int i=0; i<5; i++) cin>>i;

    int *b = new int [7];

    for (int i=0; i<5; i++) b [i] = a[i];

    a[5] = 70, a[6] = 80;

    for (int i=0; i<7; i++) cout << a[i] << endl;

    delete []a;



}
