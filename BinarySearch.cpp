#include<bits/stdc++.h>
using namespace std;
//using recursion
int BinarySearch(vector<int>v,int target,int st,int end){
    if(st<=end){
    int mid=st+(end-st)/2;
    if(target>v[mid]){
       return  BinarySearch(v,target,mid+1,end);
    }
    else if(target<v[mid]){
       return BinarySearch(v,target,st,mid-1);
    }
    else{
        return mid;
    }
}
  return -1;
}
// int BinarySearch(vector<int>v,int target){
//     int st=0,end=v.size()-1;
//     while(st<=end){
//         // int mid=(st+end)/2;
//         int mid=st+(end-st)/2;// to remove overflow
//         if(target>v[mid]){
//             st=mid+1;
//         }
//         else if(target<v[mid]){
//             end=mid-1;
//         }
//         else {//target==v[mid]
//             // cout<<mid;
//             // break;
//             return mid;
//         }
//     }
//     return -1;
// }
int main(){
   vector<int>v={-1,0,2,3,4,5,6,7,8,9};
    int target=7;
    int st=0,end=v.size()-1;
   cout<< BinarySearch(v,target,st,end)<<endl;
}