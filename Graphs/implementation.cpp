// by using adjacency list
#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template <typename T>
class graph
{
public:
    unordered_map<T, list<T>> adj;
    void addEdge(T u, T v, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph
        // create an edge u to v

        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printAdjlist()
    {

        for (auto i : adj)
        {
            cout << i.first << "->"<<" ";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;

   graph<int> g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        // creating an undirected graph
        g.addEdge(u,v,0);
    }
    // printing graph
    g.printAdjlist();
    return 0;
}