#include <iostream>
using namespace std;
int pivot(int arr[], int n){
    int left_total = 0;
    int total = 0;
    for(int i=0; i<n; i++){
        total = total + arr[i];
    }
    cout<<total<<endl;
    int pivot = 0;
    for(int i = 0; i<n; ++i){
        int pivot = arr[i];
        int right_total = (total - left_total) - pivot;
        if(left_total == right_total){
            return i;
        }
        left_total += arr[i];
        // cout << pivot<<" " << right_total<<" "<< left_total<<endl;
    }
    return -1;

}
int main(){
    int even[3] = {1,2,3};
    int ans = pivot(even, 3);
    cout << "Pivot element is : "<< ans << endl;

}