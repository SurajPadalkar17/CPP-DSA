#include <iostream>
using namespace std;

int &func(int a)
{
    // bad practice
    int num = a;
    int &ans = num;
    return ans;
}
void update(int n)
{
    n++;
}
// pass by reference
void update2(int &n)
{
    n++;
}

int getsum(int *arr, int n) // we can write int arr[]
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    // int i = 5;
    // // create a reference variable

    // int &j = i;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout << j << endl;

    // int n = 5
    // cout << "Before " << n << endl;
    // update(n);
    // cout << "After " << n << endl;

    // cout << "Before " << n << endl;
    // update2(n);
    // cout << "After " << n << endl;

    // cout<<func(n);

    // char ch ='q';
    // cout<<sizeof(ch)<<endl;
    // char * c = & ch;
    // cout<<sizeof(c)<<endl;//for 64 bit it will be 8

    // int  d = 6;
    // cout<<sizeof(d)<<endl;
    // int  * e = & d;
    // cout<<sizeof(e)<<endl;

    // int * arrr= new int[5];
    // cout<<sizeof(arrr);

    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getsum(arr, n);
    cout << "the answer is " << ans<<endl;

    cout<<"size is " <<sizeof(arr);

    return 0;
}
