class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    int stripeCount = 4;
                    if (j + 1 < grid[i].size() && grid[i][j+1] == 1) {
                        stripeCount -= 1;
                    }
                    if (i + 1 < grid.size() && grid[i+1][j] == 1) {
                        stripeCount -= 1;
                    }
                    if (j > 0) {
                        if (grid[i][j-1] == 1) stripeCount -= 1;
                    }
                    if (i > 0) {
                        if (grid[i-1][j] == 1) stripeCount -= 1;
                    }
                    perimeter += stripeCount;
                }
            }
        }
        return perimeter;
    }
};