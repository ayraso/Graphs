class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int numOfEdges = edges.size();
        int numOfNodes = numOfEdges + 1;

        vector<int> degreesOfNodes(numOfNodes + 1, 0); // we are not using index 0.

        for (vector<int> x : edges){
            degreesOfNodes[x[0]] += 1;
            degreesOfNodes[x[1]] += 1;
        }
    
        for (int i=1; i<=numOfNodes; i++)
            if (degreesOfNodes[i] == numOfEdges) return i;
        
        return 0;
    }
};