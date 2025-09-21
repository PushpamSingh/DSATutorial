#include <iostream>
using namespace std;
int BinarySearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if (arr[mid]<target)
        {
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1; //if not found
}

int main(){
    int arr[6]={1,2,3,5,6,7};
    int n=6;
    int ans=BinarySearch(arr,n,6);
    cout<<"The number 6 is at the index: "<<ans;

    return 0;
}