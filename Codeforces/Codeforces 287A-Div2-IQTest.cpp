#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> grid(4);
    for (int i = 0; i < 4; ++i) {
        cin >> grid[i];
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int black = 0, white = 0;
            for (int dx = 0; dx < 2; ++dx) {
                for (int dy = 0; dy < 2; ++dy) {
                    if (grid[i + dx][j + dy] == '#')
                        black++;
                    else
                        white++;
                }
            }
            if (black >= 3 || white >= 3) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" ;
    return 0;
}