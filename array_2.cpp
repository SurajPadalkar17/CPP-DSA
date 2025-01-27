#include <iostream>
using namespace std;

int get_min(int num[], int n)
{
    int mini = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        // we can also use instead of if ese
        mini = min(mini, num[i]);
        //     if(num[i]<mini){
        //         mini=num[i];
        //     }
    }
    // return min value;
    return mini;
}
int get_max(int num[], int n)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
        // if (num[i] > maxi)
        // {
        //     maxi = num[i];
        // }
    }
    // return max value;
    return maxi;
}

int maxvalue(int arr[],int size){
    int ans1=arr[0];
    for(int i=0;i<size;i++){
         
        if(arr[i]> ans1){
            ans1 = arr[i];
        }

    }
    return ans1;
}
int minvalue(int arr[],int size){
    int ans2=arr[0];
    for(int i=1;i<size;i++){
        
        if(arr[i]<ans2){
         ans2 = arr[i];
        }

    }
    return ans2;
}
int main()
{
    int size;
    cin >> size;

    int num[size];
    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximun Value is " << get_max(num, size) << endl;
    cout << "Minimum value is " << get_min(num, size) << endl<<endl;

    cout<<"Min val "<<minvalue(num,size)<<endl;
     cout<<"Max val "<<maxvalue(num,size)<<endl;


    return 0;
}