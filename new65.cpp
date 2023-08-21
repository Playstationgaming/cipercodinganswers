#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"please enter the size of your array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int first=0;
    int last=size-1;
    int ans=0;
    while(last>=first){
        int max,min;
        int maxdis,mindis;
    if(arr[first]>arr[last]){
        max=arr[first];
        maxdis=last;
        min=arr[last];
        mindis =first;
        last--;
    }
    else{
        max=arr[last];
        maxdis=last;
        min=arr[first];
        mindis=first;
        first++;
    }
    int distance=maxdis-mindis;
    int currentidx=distance*min;
    if(ans<currentidx){
        ans=currentidx;
    }
    }
    cout<<ans;
    
}