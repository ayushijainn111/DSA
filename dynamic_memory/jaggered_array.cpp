#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n ; 

    // creating jaggered array
    int **arr = new int * [n];
    for(int i = 0; i <n ; i++){
        int m;
        cout<< " Enter the no of element for row "<< i + 1<< ":";
        cin >> m;
        arr[i] = new int[m];

        // taking input
        cout << "Enter the elements for row" << i+1 << ":";
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    // taking input
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // getting ouput
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < (sizeof(arr[i])/sizeof(arr[i][0])); ++j){
            cout << arr[i][j]<< " ";
        }
        cout << endl;

    }

    for(int i = 0; i<n; i++){
        delete [] arr[i];
    }
    delete [] arr;
}