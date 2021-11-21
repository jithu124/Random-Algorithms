#include<iostream>
#include<stack>
#include<vector>
#include<map>
using namespace std;

class edge{
    public:
        int edgevertex;
        int edge_length;
        edge(int w = -1):edgevertex(w),edge_length(1){}
};


class node{
    public:
        bool visited;
        int nodevalue;
        int len;
        vector<edge> edgestovertex;
        node(int i=999):visited(false),nodevalue(i),len(0){}
        
};


class graph{
    public:
        vector<node> g;
        graph(const graph & in)//copy constructor
        {
             g = in.g;
        }
        graph &operator=(const graph & in)//copy assignemnt
        {   
            g = in.g;
            return *this;
        }
        graph(){}
        void addnode(int i)
        {
            g.push_back(node(i));
        }

        void addedge(int v,int addedvertex)
        {     
            g[v].edgestovertex.push_back(edge(addedvertex));
        }
            
        

        void printit()
        {
            for(auto a:g)
            {
                cout<<a.nodevalue<<": ";
                for(auto e:a.edgestovertex)
                {
                    cout<<e.edgevertex<<" ";
                }
                cout<<"\n";
                
            }
            
        }

};

class DFS{
    public:
        stack<node> Q;
        DFS(){}

        void PrintBRS(graph &t)
        {
            //graph t(s);
            stack<node> Q;
            Q.push(t.g[0]);

            while(!Q.empty())
            {
                auto temp = Q.top();
                Q.pop();
                if(t.g[temp.nodevalue].visited == false)
                {   
                    t.g[temp.nodevalue].visited = true;
                    cout<<temp.nodevalue<<" ";

                    for(auto a:t.g[temp.nodevalue].edgestovertex)
                    {
                        auto v = a.edgevertex;
                        Q.push(t.g[v]);                     
                    }
                }
            }
            
        }



};

int main(){
    graph a;
    a.addnode(0);
    a.addnode(1);
    a.addnode(2);
    a.addnode(3);
    a.addnode(4);
    a.addnode(5);

    a.addedge(0,1);
    a.addedge(0,4);
    a.addedge(1,0);
    a.addedge(1,2);
    a.addedge(2,1);
    a.addedge(2,5);
    a.addedge(3,4);
    a.addedge(3,5);
    a.addedge(4,0);
    a.addedge(4,3);
    a.addedge(5,2);
    a.addedge(5,3);
    a.printit();
    DFS b;
    b.PrintBRS(a);
    return 0;
}