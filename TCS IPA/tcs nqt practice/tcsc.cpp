#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
vector<string> g;
vector<vector<bool>> v1, v2;

void bfs(int band, vector<vector<bool>> &vis) {
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) vis[i][j]=false;
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++)
        if((band==1 && g[i][j]=='1')||(band==2 && g[i][j]=='2')){
            q.push({i,j});
            vis[i][j]=true;
            goto done;
        }
    done:
    int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
    while(q.size()){
        int x=q.front().first,y=q.front().second; q.pop();
        for(int d=0;d<4;d++){
            int nx=x+dx[d],ny=y+dy[d];
            if(nx>=0&&nx<n&&ny>=0&&ny<n&&!vis[nx][ny]&&g[nx][ny]==g[x][y]){
                vis[nx][ny]=true;
                q.push({nx,ny});
            }
        }
    }
}

int main(){
    cin>>n;
    g=vector<string>(n);
    for(int i=0;i<n;i++) cin>>g[i];
    v1=vector<vector<bool>>(n,vector<bool>(n,false));
    v2=vector<vector<bool>>(n,vector<bool>(n,false));
    bfs(1,v1);
    bfs(2,v2);
    int overlap=0;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++)
        if(v1[i][j]&&v2[i][j]) overlap++;
    vector<vector<bool>> vis(n,vector<bool>(n,false));
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++)
        if(v1[i][j]){
            q.push({i,j});
            vis[i][j]=true;
            goto l1;
        }
    l1:
    int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
    while(q.size()){
        int x=q.front().first,y=q.front().second; q.pop();
        for(int d=0;d<4;d++){
            int nx=x+dx[d],ny=y+dy[d];
            if(nx>=0&&nx<n&&ny>=0&&ny<n&&!vis[nx][ny]&&
              ((g[nx][ny]=='1'&&v1[nx][ny])||(g[nx][ny]=='2'&&v2[nx][ny]))){
                vis[nx][ny]=true;
                q.push({nx,ny});
            }
        }
    }
    bool interlocked=false;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++)
        if(v1[i][j]!=vis[i][j]||v2[i][j]!=vis[i][j]) interlocked=true;
    if(interlocked) cout<<"Impossible"<<endl;
    else cout<<overlap<<endl;
    return 0;
}
