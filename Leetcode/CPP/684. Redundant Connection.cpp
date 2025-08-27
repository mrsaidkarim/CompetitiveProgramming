class Solution {
    class DisjointSet {

        public:
            vector<int> rank, parent;
            vector<int> invalid;
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

                if (pu == pv)
                {
                    invalid.push_back(u);
                    invalid.push_back(v);
                    return ;
                }

                if (rank[pu] < rank[pv])
                    swap(pu, pv);
                parent[pv] = pu;
                if (rank[pu] == rank[pv])
                    rank[pu]++;
            }
    };
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        DisjointSet dsu(edges.size());
        for (int i = 0; i < edges.size(); i++)
        {
            dsu.unionByRank(edges[i][0], edges[i][1]);
        }
        vector<int> res(2);
        res[0] = dsu.invalid[dsu.invalid.size() - 2];
        res[1] = dsu.invalid[dsu.invalid.size() - 1];
        return (res);
    }
};