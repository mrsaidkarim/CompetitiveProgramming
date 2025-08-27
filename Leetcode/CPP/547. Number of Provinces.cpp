class Solution {
    class DisjointSet {
        public:
            vector<int> rank, parent;
            DisjointSet(int n) {
                parent.resize(n + 1);
                rank.resize(n + 1, 0);
                for (int i = 1; i <= n; i++) {
                    parent[i] = i;
                }
            }

            int find(int u) {
                if (u == parent[u])
                    return u;
                return parent[u] = find(parent[u]);
            }

            void unionByRank(int u, int v) {
                int pu = find(u);
                int pv = find(v);

                if (pu == pv) return;

                if (rank[pu] < rank[pv])
                    swap(pu, pv);
                parent[pv] = pu;
                if (rank[pu] == rank[pv])
                    rank[pu]++;
            }
    };
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        DisjointSet dsu(isConnected.size());
        for (int i = 0; i < isConnected.size(); i++)
        {
            for (int j = 0; j < isConnected.size(); j++)
            {
                if (isConnected[i][j] == 1)
                    dsu.unionByRank(i + 1, j + 1);
            }
        }
        unordered_set<int> parents;
        for (int i = 1; i <= isConnected.size(); i++)
        {
            parents.insert(dsu.find(i));
        }
        return (parents.size());
    }
};