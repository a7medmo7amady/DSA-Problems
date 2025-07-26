#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
bool valid(int i, int j, int n) {
    return i < n && j < n;
}

int GridProblem(int i, int j, int n, vector<vector<int>>& grid, vector<vector<int>>& memo) {
    if (!valid(i, j, n)) return INT_MIN; 
    if (i == n-1 && j == n-1) return grid[i][j]; 
    if (memo[i][j] != -1) return memo[i][j];

    int path1 = GridProblem(i, j+1, n, grid, memo);
    int path2 = GridProblem(i+1, j, n, grid, memo);

    return memo[i][j] = grid[i][j] + max(path1, path2);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];

    vector<vector<int>> memo(n, vector<int>(n, -1));
    cout << GridProblem(0, 0, n, grid, memo) << endl;
}