class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       unordered_map<int,int> a;unordered_map<int,int> b;
       vector<int> row, column;
       for(int i = 0 ; i < matrix.size();i++){
        for(int j = 0 ; j < matrix[0].size() ; j++){
            if(matrix[i][j]==0){
                a[i]++;b[j]++;
                if(a[i]==1){
                    row.push_back(i);
                }
                if(b[j]==1){
                    column.push_back(j);
                }
            }
        }
       }
       for(int x : row){
        for(int i = 0 ; i < matrix[0].size() ; i++){
            matrix[x][i]=0;
        }
       }
       for(int x : column){
        for(int i = 0 ; i < matrix.size() ; i++){
            matrix[i][x]=0;
        }
       }
       
    }
};