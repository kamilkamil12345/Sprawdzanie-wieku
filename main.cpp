#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Witaj. Ile masz lat?" << endl; cin >> wiek;

    if (wiek < 18)                          {cout << "Jeste� niepe�noletni i nie mo�esz zosta� prezydentem." << endl;}
    else if ((wiek >= 18) && (wiek < 35))   {cout << "Jeste� pe�noletni, ale nie mo�esz zosta� prezydentem." << endl;}
    else if (wiek >= 35)                    {cout << "Jeste� pe�noletni i mo�esz zosta� prezydentem." << endl;}
    return 0;
}
