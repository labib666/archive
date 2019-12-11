/*
UVa
10986 - sending email
graph
13.3.2013
*/

# include <cstdio>
# include <iostream>
# include <cstring>
# include <vector>
# include <queue>

using namespace std;

struct go {
    int p, c;
    bool operator < (const go &s) const {
        return c > s.c;
    }
};

priority_queue <go> q;
vector <go> e[20005];
int v[20005];

int main() {
    int t, i, m, n, st, dst, j, k, w;
    go g1, g2;

    cin >> t;
    for (i=1; i<=t; i++){
        memset (v, 0, sizeof (v));
        cin >> n >> m >> st >> dst;

        while (m--){
            cin >> j >> k >> w;
            g1.c = g2.c = w;
            g1.p = k, g2.p = j;

            e[j].push_back(g1);
            e[k].push_back(g2);
        }

        g1.p = st, g1.c = 0;
        q.push(g1);

        while (!q.empty()){
            g1 = q.top();
            q.pop();

            if (v[g1.p]) continue;
            v[g1.p] = 1;
            if (g1.p == dst) break;

            for (j=0; j<(int)e[g1.p].size(); j++){
                g2.p = e[g1.p][j].p, g2.c = g1.c + e[g1.p][j].c;
                q.push(g2);
            }
        }
        if (v[dst]) printf ("Case #%d: %d\n", i, g1.c);
        else printf ("Case #%d: unreachable\n", i);
        for (j = 0; j < n; j++) e[j].clear();
        while (!q.empty()) q.pop();
    }
    return 0;
}
