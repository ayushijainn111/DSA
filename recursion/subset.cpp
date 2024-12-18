#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans){
    // base case
    if(index >= nums.size()){
        ans.push_back(output);
        return ;
    }

    // exclude
    solve(nums, output, index+1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);

}
int main(){
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);

    for (size_t i = 0; i < ans.size(); ++i) {
    for (size_t j = 0; j < ans[i].size(); ++j) {
        cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}