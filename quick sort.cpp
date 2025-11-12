#include<bits/stdc++.h>
using namespace std;

int swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
};

int partition(int arr[],int left,int right){
    int pivot=arr[right];
    int i=-1;

    for(int j=left;j<right;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,right);
    return i+1;
};

void quickSort(int arr[],int left,int right){
    if(left<right){
        int pi=partition(arr,left,right);
        quickSort(arr,left,pi-1);
        quickSort(arr,pi+1,right);
    }
};