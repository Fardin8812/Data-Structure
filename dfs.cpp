#include<bits/stdc++.h>
using namespace std;
vector<int>G[1000];
int main()
{
    int nodes,edges;
    cout<<"ENTER THE NUMBER OF NODES:";
    cin>>nodes;
    cout<<"ENTER THE NUMBER OF EDGES:";
    cin>>edges;
    while(edges!=0)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        edges--;
    }
    int visited [nodes]={0};
    int source;
    cout<<"ENTER THE STARTING NODE:";
    cin>>source;
    stack<int>q;
    q.push(source);
    visited[source]=1;
    while(!q.empty())
    {
        int v=q.top();
        cout<<v<<" ";
        q.pop();
        for(int i=0;i<G[v].size();i++)
        {
            int u=G[v][i];;
            if(visited[u]==0)
            {
                visited[u]=1;
                q.push(u);
            }
        }
    }
    return 0;
}



