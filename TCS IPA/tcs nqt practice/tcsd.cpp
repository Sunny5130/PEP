#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;
    vector<vector<int>> dist(m, vector<int>(m, 0));
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            cin >> dist[i][j];
    vector<int> emp(m, 0);
    for(int i=1;i<m;i++) cin >> emp[i];
    int cap;
    cin >> cap;
    vector<int> parent(m, -1);
    vector<int> d(m, 1e9), vis(m, 0);
    d[0]=0;
    for(int cnt=0;cnt<m;cnt++) {
        int u=-1, md=1e9;
        for(int i=0;i<m;i++) if(!vis[i] && d[i]<md) { md=d[i]; u=i; }
        vis[u]=1;
        for(int v=0;v<m;v++) if(!vis[v] && d[v]>d[u]+dist[u][v]) {
            d[v]=d[u]+dist[u][v];
            parent[v]=u;
        }
    }
    vector<vector<int>> tree(m);
    for(int i=1;i<m;i++)
        tree[parent[i]].push_back(i);
    vector<int> needed(m,0);
    function<void(int)> dfs = [&](int u) {
        int sum=emp[u];
        for(int v:tree[u]) {
            dfs(v); sum+=needed[v];
        }
        needed[u]=sum;
    };
    dfs(0);
    int buses=0;
    function<void(int)> go = [&](int u){
        for(int v:tree[u]) go(v);
        if(u) buses += (needed[u]+cap-1)/cap;
    };
    go(0);
    cout << buses << endl;
    return 0;
}
