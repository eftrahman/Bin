#include<iostream>
#include <list>

using namespace std;

class Graph
{
    int V;

    list<int> *adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int s) // 1
{
    bool *visited = new bool[V];   //V=4
    for(int i = 0; i < V; i++)
        visited[i] = false;       // NO vertex is visited in the queue

    list<int> queue;

    visited[s] = true;            // s=1
    queue.push_back(s);            // queue[0]=1
    list<int>::iterator i;

    while(!queue.empty())
    {
        s = queue.front();    // s=2
        cout << s << " ";     // 2
        queue.pop_front();    //

        for (i = adj[s].begin(); i != adj[s].end(); ++i) // 2
        {
            if (!visited[*i])
            {
                visited[*i] = true;   //2
                queue.push_back(*i);
            }
        }
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(1);

    return 0;
}
