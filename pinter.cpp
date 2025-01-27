#include <iostream>
using namespace std;

int main()
{
    // int *p=0;
    // cout << *p;

    // int i = 5;
    // int *q = &i;

    // cout << q << endl;
    // cout << *q << endl;

    // int *p = 0;
    // p = &i;
    // cout << p << endl;
    // cout << *p << endl;

    int num = 5;
    int a = num;

    cout << "before " << num << endl;
    a++;
    cout << "After " << num << endl;

    cout << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "After " << num << endl;

    // copy of pointer

    int *q = p;
    cout << p << " -" << q << endl;
    cout << *p << " - " << *q << endl;

    int i = 3;
    int *t = &i;
    *t = *t + 1;
    cout << *t << endl;
    cout << "Before t " << t << endl;
    t = t + 1;
    cout << "After t " << t << endl;

    return 0;
}