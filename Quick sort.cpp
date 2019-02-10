
#include<iostream>
using namespace std;
//declare the recursive function Quicksort
//choose pivot 2,1,5,3,4 for today  - last element
//partition - swap with the pivot one is larger than pivot is at right & other is smaller than the pivot is at left
// 2,1,3,5,4
// Call quicksort (right) & quicksort(left)
//stop when the array has a single element
void Swap(int i, int j, int *arr){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int Partition(int *arr,int low,int high){
    //taking pivot to be the last element of the array
    int pi = arr[high];
    int i= low;
    //check if the element is lesser  than pivot SWAP
    while(i<high;){

        if(arr[i+1]< pi){
            Swap(i+1,i+2,arr);
            i++;
        }
    }
    /*
    int i=0;
    while(arr[i]<= pi){
        i++;
       return i+1;
    }
    Swap(i+1,pi,arr);
    */
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}


void Quicksort(int *arr,int low,int high){
    //m,k
/*
    if(low<high){
        int pi = Partition(arr,low,high);
        Quicksort(arr,low,pi-1);
        Quicksort(arr,pi+1,high);
    }
    */

}

int main(){

    int arr[] = {3, 4, 6, 2, 1,5};
    // declaring the pivot and low and high;
     for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    int high = 5;
    int low = 0;

    cout<< "The sorted array is :" <<endl;
    Partition(arr,low,high);

    return 0;
}
