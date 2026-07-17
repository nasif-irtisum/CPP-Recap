#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    s = "Hello World!";
    cout << s.size () << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;

    string a = "hello";
    cout << a << endl;
    a.clear ();
    cout << a << endl;
    cout << a.empty() << endl;

    string str; getline(cin, str);
    cout << str << endl;

    string st = "Hello Coders! What's up?";

    cout << st << endl;
    st.resize(8);
    cout << st << endl;
    st.resize (20);
    cout << st << endl;
    cout << st.size() <<endl;
    st.resize(25, 'X');
    cout << st << endl;

    return 0;
}
