#include <iostream>
using namespace std;

int FindMissing(int arr[],int n){
    int totalSum=n*(n+1)/2;
    int arraySum=0;
    for(int i=0;i<n;i++){
        arraySum+=arr[i];
    }

    int ans = totalSum-arraySum;
    return ans;
}
int main(){
    int arr[5]={1,2,3,5};
    int n=5;
    int ans=FindMissing(arr,n);
    cout<<"The missing number is: "<<ans;

    return 0;
}