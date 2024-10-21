#include <iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;

        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;    }
    return ans;
}
int main(){
    int even[6] = {4,5,5,5,8,8};
    cout<<"First occurrence is "<< firstOccurence(even, 6, 5)<<endl;
    return 0;
}