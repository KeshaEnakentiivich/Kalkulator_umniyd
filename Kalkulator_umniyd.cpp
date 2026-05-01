
#include <iostream>
using namespace std;
int sum(int frs, int dw)
{
    return frs + dw;
}
int mns(int frs, int dw)
{
    return frs - dw;
}
int divd(int frs, int dw)
{
    return frs / dw;
}
int mul(int frs, int dw)
{
    return frs * dw;
}
int main()
{
    cout << "2 + 2 =";
    cout << sum(2, 2) << endl;
    cout << "8 - 1 =";
    cout << mns(8, 1) << endl;
    cout << "93/28 =";
    cout << divd(93, 28) << endl;
    cout << "515151 x 676767 =";
    cout << mul(515151, 676767) << endl;
}