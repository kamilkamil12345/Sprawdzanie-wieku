#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Witaj. Ile masz lat?" << endl; cin >> wiek;

    if (wiek < 18)                          {cout << "Jesteœ niepe³noletni i nie mo¿esz zostaæ prezydentem." << endl;}
    else if ((wiek >= 18) && (wiek < 35))   {cout << "Jesteœ pe³noletni, ale nie mo¿esz zostaæ prezydentem." << endl;}
    else if (wiek >= 35)                    {cout << "Jesteœ pe³noletni i mo¿esz zostaæ prezydentem." << endl;}
    return 0;
}
