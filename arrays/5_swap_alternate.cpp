#include <iostream>
using namespace std;
int swapAlternate(int arr[], int n){
    for(int i = 0; i<n; i+=2){
        if(i+1<n){
            // swap(arr[i], arr[i+1]);
            int temp; 
            temp= arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}
int printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    swapAlternate(arr, 6);
    printArray(arr, 6);

    int num[5] = {1,2,3,4,5};
    swapAlternate(num, 5);
    printArray(num, 5);

}


 // if(n%2==0){
    //     for(int i=0;i<n;i+=2){
    //     swap(arr[i], arr[i+1]);
    // }
    // }
    // else{
    //     for(int i=0;i<n-1;i+=2){
    //     swap(arr[i], arr[i+1]);
    // }
    // }