
#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <bits/stdc++.h>

using namespace std;

// DSU Template
class DisjointSet {

	public:
		vector<int> rank, parent, black;
		DisjointSet(int n) {
			parent.resize(n + 1);
			rank.resize(n + 1, 0);
			black.resize(n + 1, 0);
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
			black[pu] += black[pv];
		}
};


void solve()
{
    int n, q; cin >> n >> q;
	DisjointSet dsu(n);
	vector<int> color(n + 1, 0);

	while (q--)
	{
		int nbr; cin >> nbr;
		int u, v;
		if (nbr == 1)
		{
			cin >> u >> v;
			dsu.unionByRank(u, v);
		}
		else if (nbr == 2)
		{
			cin >> u;
			int pu = dsu.find(u);
			if (color[u] == 0)
			{
				color[u] = 1;
				dsu.black[pu]++;
			}
			else
			{
				color[u] = 0;
				dsu.black[pu]--;
			}
		}
		else if (nbr == 3)
		{
			cin >> u;
			int pu = dsu.find(u);
			if (dsu.black[pu] >= 1) cout << "Yes\n";
			else cout << "No\n";
		}
	}
}

int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int t = 1;
        // cin >> t;
        while (t--)
                solve();
}