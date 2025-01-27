// spanning tree prtocol


#include <iostream>
using namespace std;
#include <vector>

void rotatearray(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }
    nums = temp;
}

int main()
{
    vector<int> num = {1, 2, 3, 4, 5};
    int k = 1;
    rotatearray(num, k);
    cout<<"Rotated array : "<<endl;

    for (int i=0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    cout<<endl;
    cout<<num.size();
    cout << endl;
    cout<<5%6;
    cout<<5/6;
    cout<<num[1];

    return 0;
}