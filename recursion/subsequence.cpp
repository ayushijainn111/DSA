#include <iostream>
#include <vector>
using namespace std;

void solve(string nums, string output, int index, vector<string> &ans){
    // base case
    if(index >= nums.length()){
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
    string nums = {"abc"};
    vector<string> ans;
    int index=0;
    string output = "";
    solve(nums, output, index, ans);

    for (int i = 0; i < ans.size(); ++i) {
    cout << ans[i] << endl;
    }

    return 0;
}