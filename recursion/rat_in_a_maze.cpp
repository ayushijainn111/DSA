#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, 
            vector<vector<int>> &mat){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && 
        mat[x][y] == 1){
        return true;
    }
    else{
        return false;
    }
}

void solve(vector<vector<int>> &mat, int n, vector<string> &ans, int x, int y,
           vector<vector<int>> &visited, string path){
        
        // you have reached x, y
        // base case
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return ;
        }

        visited[x][y] = 1;

        // 4 options L, R, U, D
        // down
        int newx = x+1;
        int newy = y;
        if(isSafe(newx, newy, n, visited, mat)){
            path.push_back('D');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // left
        newx = x;
        newy = y-1;
        if(isSafe(newx, newy, n, visited, mat)){
            path.push_back('L');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // right
        newx = x;
        newy = y+1;
        if(isSafe(newx, newy, n, visited, mat)){
            path.push_back('R');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // up
        newx = x-1;
        newy = y;
        if(isSafe(newx, newy, n, visited, mat)){
            path.push_back('U');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        visited[x][y] = 0;

}

int main(){
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    int srcx = 0;
    int srcy = 0;
    string path = "";
    vector<string> ans;
    int n = mat.size();
    if(mat[0][0] == 0){
        return 0;
    }
    vector<vector<int>> visited = mat;
    // initializing the visited to 0 in the beginning
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            visited[i][j] = 0;
        }
    }
    solve(mat, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
    }
    return 0;
}