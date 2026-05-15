#include "mthfuncs.h"
#include <iostream>
using namespace std;
string menuopt;
int o = 0;
int d = 0;
bool fd = false;
int main()
{
    if (!fd)
    {
        cout << "Vyberite optsiyu:" << endl;
        cout << "1. Slozhenie\n" << endl;
        cout << "2. Vychitanie\n" << endl;
        cout << "3. Delenie\n" << endl;
        cout << "4. Umnozhenie\n" << endl;
        cout << "V. Vyhod\n" << endl;
        cout << "Vyberite: ";
        cin >> menuopt;
        if (menuopt == "1")
        {
            cout << "Pervoe chislo: ";
            cin >> o;
            cout << "Vtoroe chislo: ";
            cin >> d;
            cout << o << "+" << d << "=" << sum(o, d) << endl;
        }
        else if (menuopt == "2")
        {
            cout << "Pervoe chislo: ";
            cin >> o;
            cout << "Vtoroe chislo: ";
            cin >> d;
            cout << o << "-" << d << "=" << mns(o, d) << endl;
        }
        else if (menuopt == "3")
        {
            cout << "Pervoe chislo: ";
            cin >> o;
            cout << "Vtoroe chislo: ";
            cin >> d;
            cout << o << ":" << d << "=" << divd(o, d) << endl;
        }
        else if (menuopt == "4")
        {
            cout << "Pervoe chislo: ";
            cin >> o;
            cout << "Vtoroe chislo: ";
            cin >> d;
            cout << o << "x" << d << "=" << mul(o, d) << endl;
        }
        else if (menuopt == "V" || menuopt == "v")
        {
            return 0;
        }
        else
        {
            cout << "Vyberite optsiyu esche raz!" << endl;
        }
        fd = true;
        return main();
    }
    else
    {
        cout << "Vyberite: ";
        cin >> menuopt;
        if (menuopt == "1")
        {
            cout << "Pervoe chislo: ";
            cin >> o;
            cout << "Vtoroe chislo: ";
            cin >> d;
            cout << o << "+" << d << "=" << sum(o, d) << endl;
        }
        else if (menuopt == "2")
        {
            cout << "Pervoe chislo: ";
            cin >> o;
            cout << "Vtoroe chislo: ";
            cin >> d;
            cout << o << "-" << d << "=" << mns(o, d) << endl;
        }
        else if (menuopt == "3")
        {
            cout << "Pervoe chislo: ";
            cin >> o;
            cout << "Vtoroe chislo: ";
            cin >> d;
            cout << o << ":" << d << "=" << divd(o, d) << endl;
        }
        else if (menuopt == "4")
        {
            cout << "Pervoe chislo: ";
            cin >> o;
            cout << "Vtoroe chislo: ";
            cin >> d;
            cout << o << "x" << d << "=" << mul(o, d) << endl;
        }
        else if (menuopt == "V" || menuopt == "v")
        {
            return 0;
        }
        else
        {
            cout << "Vyberite optsiyu esche raz!" << endl;
        }
    }
}