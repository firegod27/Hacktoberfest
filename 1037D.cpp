#include<iostream>
#include<bits/stdc++.h>
#include <list>
using namespace std;
#define ll long long int
vector<ll>ans;



// This class represents a directed graph using
// adjacency list representation
class Graph
{
    int V;    // No. of vertices

    // Pointer to an array containing adjacency
    // lists
    list<int> *adj;
public:
    Graph(int V);  // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    // prints BFS traversal from a given source s
    void BFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
vector<long long int>bhams(m);
    vector<long long int>bhams2(n);
    for(int i=0;i<m;i++)
    {
        cin>>bhams[i];
    }
    ll ans=0;
    if(k<=(n+1))
    {
        ans=k/2;
        if(k%2==0)ans--;
    }
    else
    {
        ll x=k/2+1;
        if(x>n)ans=0;
        else
        {
            ans=n-x+1;
        }
    }
    for(int i=0;i<s.size()-1;i++)
    {
        if((s[i]=='1'&&s[i+1]=='0'))
        {
            swap(s[i],s[i+1]);
            countm++;
        }
        if((s[i]=='2'&&s[i+1]=='1'))
        {
            swap(s[i],s[i+1]);
            countm++;
        }
    }
    for(int i=0;i<n;i++)
        
       {
       bhams[i] = b1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b1[i];
void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    list<int>::iterator i;

    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
            ans.push_back(s);
        queue.pop_front();

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

// Driver program to test methods of graph class
int main()
{
    // Create a graph given in the above diagram
    int n;
    cin>>n;
    ll a,b;
    Graph g(n);

    vector<ll>check(n);

    for(ll i=0;i<n-1;i++)
    {
        cin>>a>>b;
        g.addEdge(a,b);
    }
    for(ll i=0;i<n;i++)
    {
        cin>>check[i];
    }

    bool kata = false;
        g.BFS(1);
      /*  for(ll i=0;i<check.size();i++)
        {
            if(check[i]!=ans[i])
            {
                kata = true;
                break;
            }
        }
        if(kata) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;*/
            for(ll i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }

    return 0;
}
