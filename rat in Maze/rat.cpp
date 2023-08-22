#include <bits/stdc++.h>

void solve(int x, int y, vector<vector<int>> &arr, vector<vector<bool>> &vis,
           vector<string> &ans, int n, string &path) {
    if (x < 0 || x >= n || y < 0 || y >= n || vis[x][y] || arr[x][y] == 0) {
        return;
    }

    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    vis[x][y] = true;

    // Move Down
    path.push_back('D');
    solve(x + 1, y, arr, vis, ans, n, path);
    path.pop_back();

    // Move Left
    path.push_back('L');
    solve(x, y - 1, arr, vis, ans, n, path);
    path.pop_back();

    // Move Right
    path.push_back('R');
    solve(x, y + 1, arr, vis, ans, n, path);
    path.pop_back();

    // Move Up
    path.push_back('U');
    solve(x - 1, y, arr, vis, ans, n, path);
    path.pop_back();

    vis[x][y] = false;
}

vector<string> searchMaze(vector<vector<int>> &arr, int n) {
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    string path = "";

    if (arr[0][0] == 0) {
        return ans;
    }

    solve(0, 0, arr, visited, ans, n, path);
    return ans;
}
