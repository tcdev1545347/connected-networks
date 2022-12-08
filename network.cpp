class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int replace = 0;
        if ( connections.size() >= n - 1 ) {
            for (int i = 0; i < connections.size() - 1; i++) {
                for (int j = i; j < connections.size(); j++) {
                    if(i!=j){
                        if (connections[i][1] == connections[j][1]) {
                            replace++;
                        }
                    }
                }
            }
            return replace;
        }
        return -1;
    }
};
