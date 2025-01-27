// #include <iostream>
// using namespace std;

// void printarr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void swapa(int arr[], int size)
// {
//     for (int i = 0; i < size; i+=2)
//     {
//         if (i + 1 < size)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }
// int main()
// {
//     int even[8] = {5, 2, 6, 4, 9, 8, 1, 3};
//     int odd[5] = {1, 2, 3, 4, 5};

//     swapa(even, 8);
//     printarr(even, 8);

//     swapa(odd,5);
//     printarr(odd,5);

//     return 0;
// }


#include<iostream>
using namespace std;

void printad(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapa(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
   
}
int main(){
    int size;
int arr[size];

 
 cout<<"Enter the size of array : ";      
 cin>>size;
 for(int i=0;i<size;i++){
    cin>>arr[i];
 }

 swapa(arr,size);
 printad(arr,size);

return 0;
}