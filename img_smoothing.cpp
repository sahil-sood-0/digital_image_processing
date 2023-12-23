#include <bits/std++.h>
#include <vector>

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows = img.size();
        int cols = img[0].size();
        vector<vector<int>> result(rows, vector<int>(cols, 0));

        int dx[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int total_sum = 0;
                int count = 0;

                for (int k = 0; k < 9; ++k) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni >= 0 && ni < rows && nj >= 0 && nj < cols) {
                        total_sum += img[ni][nj];
                        count += 1;
                    }
                }
                result[i][j] = total_sum / count;
            }
        }

        return result;
    }

    int main(int a,int b,int c,int d,int e, int f,int g, int h,int i){
    vector<vector<int>> img[3][3]={{a,b,c}
                                    ,{d,e,f}
                                    ,{g,h,i}}; 
}
};


