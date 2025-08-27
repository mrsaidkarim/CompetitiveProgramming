### DSU Implementation

A DSU (Disjoint Set Union), also known as Union-Find, is a very useful data structure for handling problems involving partitioning elements into disjoint sets and efficiently answering queries like:
- Find: Which set does this element belong to?
- Union: Merge the sets of two elements.
It is widely used in problems like connected components in a graph, Kruskal’s algorithm for Minimum Spanning Tree (MST), dynamic connectivity, etc.

```class DisjointSet {

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
```