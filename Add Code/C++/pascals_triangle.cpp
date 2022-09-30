/*
To print the pascals triangle for given input number of rows
*/


//Most optimized solution

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for(int i=0;i<numRows;i++){
            v.resize(i+1);
            for(int j=0;j<=i;j++){
                if(j-i==0||j==0){
                    v[i].push_back(1);
                }
                else{
                    v[i].push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
        }
        return v;
    }
};