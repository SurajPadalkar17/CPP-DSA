#include<iostream>
using namespace std;

bool searchkey(int arr[],int size,int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingpart = searchkey(arr+1,size-1,key);
        return remainingpart;
    }


}

int main(){
int arr[5]={1,2,3,4,5};
int size= 5;
int key = 3;
bool ans = searchkey(arr,size,key);
if(ans){
    cout<<"ELement is found";
}
else{
    cout<<"element is not fond";
}

return 0;
}