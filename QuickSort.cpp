#include<bits/stdc++.h>
using namespace std;
int f(int arr[],int st,int end){
    int i=st,j=end,pivot=arr[st];
    while(i<j){
        while(arr[i]<=pivot && i<=end-1){
            i++;
        }
        while(arr[j]>pivot && j>=st+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[st],arr[j]);
    return j;
}
void qs(int arr[],int st,int end){
    if(st<end){
        int pIndex = f(arr,st,end);
        qs(arr,st,pIndex-1);
        qs(arr,pIndex+1,end);
    }
}
int main(){
    int arr[]={8,6,4,2,3,5,7,0,1};
    int n=sizeof(arr)/4;
    int st=0,end=n-1;
    qs(arr,st,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}