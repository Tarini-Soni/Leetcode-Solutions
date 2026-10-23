
class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for (int i = 0; i <= rows - 3; i++) {
            for (int j = 0; j <= cols - 3; j++) {

                bool seen[10] = {false};
                bool valid = true;

                
                for (int r = i; r < i + 3; r++) {
                    for (int c = j; c < j + 3; c++) {
                        int num = grid[r][c];

                        if (num < 1 || num > 9 || seen[num]) {
                            valid = false;
                            break;
                        }

                        seen[num] = true;
                    }

                    if (!valid) break;
                }

                if (!valid) continue;

                // Check all rows
                for (int r = i; r < i + 3; r++) {
                    if (grid[r][j] + grid[r][j + 1] + grid[r][j + 2] != 15) {
                        valid = false;
                    }
                }

                // Check all columns
                for (int c = j; c < j + 3; c++) {
                    if (grid[i][c] + grid[i + 1][c] + grid[i + 2][c] != 15) {
                        valid = false;
                    }
                }

                // Check both diagonals
                if (grid[i][j] + grid[i + 1][j + 1] + grid[i + 2][j + 2] != 15) {
                    valid = false;
                }

                if (grid[i][j + 2] + grid[i + 1][j + 1] + grid[i + 2][j] != 15) {
                    valid = false;
                }

                if (valid) count++;
            }
        }

        return count;
    }
};
