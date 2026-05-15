#include "mthfuncs.h"
#include <iostream>
#include <windows.h>
using namespace std;
string menuopt;
int o = 0;
int d = 0;
bool fd = false;
int main(bool ff)
{
    if (!fd)
    {
        cout << "Vyberite optsiyu:" << endl;
        cout << "1. Slozhenie\n" << endl;
        cout << "2. Vychitanie\n" << endl;
        cout << "3. Delenie\n" << endl;
        cout << "4. Umnozhenie\n" << endl;
        cout << "Vyberite: " << endl;
        cin >> menuopt;
        if (menuopt == "1")
        {
            cout << "Pervoe chislo: " << endl;
            cin >> o;
            cout << "Vtoroe chislo: " << endl;
            cin >> d;
            cout << o + "+" + d << endl;
            cout << sum(o, d) << endl;
        }
        else if (menuopt == "2")
        {
            cout << "Pervoe chislo: " << endl;
            cin >> o;
            cout << "Vtoroe chislo: " << endl;
            cin >> d;
            cout << o + "-" + d << endl;
            cout << mns(o, d) << endl;
        }
        else if (menuopt == "3")
        {
            cout << "Pervoe chislo: " << endl;
            cin >> o;
            cout << "Vtoroe chislo: " << endl;
            cin >> d;
            cout << o + ":" + d << endl;
            cout << divd(o, d) << endl;
        }
        else if (menuopt == "4")
        {
            cout << "Pervoe chislo: " << endl;
            cin >> o;
            cout << "Vtoroe chislo: " << endl;
            cin >> d;
            cout << o + "x" + d << endl;
            cout << mul(o, d) << endl;
        }
        else
        {
            cout << "Vyberite optsiyu esche raz!" << endl;
        }
        fd = true;
        return main(true);
    }
    else
    {
        cout << "Vyberite: " << endl;
        cin >> menuopt;
        if (menuopt == "1")
        {
            cout << "Pervoe chislo: " << endl;
            cin >> o;
            cout << "Vtoroe chislo: " << endl;
            cin >> d;
            cout << o + "+" + d << endl;
            cout << sum(o, d) << endl;
        }
        else if (menuopt == "2")
        {
            cout << "Pervoe chislo: " << endl;
            cin >> o;
            cout << "Vtoroe chislo: " << endl;
            cin >> d;
            cout << o + "-" + d << endl;
            cout << mns(o, d) << endl;
        }
        else if (menuopt == "3")
        {
            cout << "Pervoe chislo: " << endl;
            cin >> o;
            cout << "Vtoroe chislo: " << endl;
            cin >> d;
            cout << o + ":" + d << endl;
            cout << divd(o, d) << endl;
        }
        else if (menuopt == "4")
        {
            cout << "Pervoe chislo: " << endl;
            cin >> o;
            cout << "Vtoroe chislo: " << endl;
            cin >> d;
            cout << o + "x" + d << endl;
            cout << mul(o, d) << endl;
        }
        else
        {
            cout << "Vyberite optsiyu esche raz!" << endl;
        }
    }
}