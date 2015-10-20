// Pascal's Triangle II
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        for(int i = 0; i < rowIndex + 1; i++){
            vector<int> temp(i+1,1);
            for(int j = 1; j < i; j++) 
                temp[j] = res[j-1] + res[j];
            res = temp;
        }
        return res;
    }
};