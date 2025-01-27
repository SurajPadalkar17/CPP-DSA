#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if(n<=1){
        return n;
    }

    int ans = fibo(n - 1) + fibo(n - 2);
    return ans;
}

// int main()
// {
//     int num;
//     cin >> num;
//     int s = fibo(num);
//     cout << s;
    

//     return 0;
// }
 
int main(){
     int num;
    cin >> num;
    for(int i = 0;i<num;i++){
        cout<<fibo(i);
    }

}

// using for oop

// int main()
// {
//     int n;
//     cout << "enter the no";
//     cin >> n;
//     int a = 0;
//     int b = 1;

//     cout << "The series is" << endl;
//     cout << a << " " << b << " ";
//     for (int i = 2; i <= n; i++)
//     {
//         int nextno = a + b;
//         cout << nextno << " ";
//         a = b;
//         b = nextno;
//     }
//     cout << endl;
//     cout << b;
// }