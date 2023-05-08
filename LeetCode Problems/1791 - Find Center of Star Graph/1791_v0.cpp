class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int centerNode = 0;
        for(int i=0; i<edges[0].size(); i++){
            centerNode = edges[0][i];
            for(int j=0; j<edges[1].size(); j++){
                if(centerNode == edges[1][j]) return centerNode;
            }
        }
        return centerNode;
    }
};