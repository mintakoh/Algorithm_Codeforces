#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> state;
vector<vector<int>> array;
vector<int> parent;
vector<int> cycle;

bool t = 1; 
int num;

bool dfs(int x)
{
    state[x] = 1;
    for(int j = 0; j < array[x].size(); j++)
    {
        if(state[array[x][j]] == 1 and parent[x] != array[x][j])
        {
            if(t)
            {
                int cycleNode = parent[x];
                cycle.push_back(array[x][j]);
                cycle.push_back(x);
                while(cycleNode != array[x][j])
                {
                    cycle.push_back(cycleNode);
                    cycleNode = parent[cycleNode];
                }
            }
            t = 0;
            return t;
        }
        if(state[array[x][j]] == 0)
        {
            parent[array[x][j]] = x;
            dfs(array[x][j]);
        }
    }
}

int main()
{
    int n, m, cyclecount;
    cin >> n >> m;
    
    if(n > m) {
        cout << "NO";
        return 0;
    }

    state.resize (n+1);
    array.resize (n+1);
    parent.resize (n+1);

    for (int i = 0; i < m; ++i)
    {
            int a, b; cin>>a>>b;
            array[a].push_back(b);
            array[b].push_back(a);
    }

    for (int i = 1; i < n + 1; ++i) {
        state.clear();
        state.resize(n + 1);
        if (state[i]==0) {
            if(dfs(i) == 0) {
                cyclecount++;
                break;
            }
        }
    }
    
    int cycle_size = cycle.size();
    
    // cycle -> 0
    // no cycle -> 1
    vector<int> temp;
    for(int i = 1; i < n + 1; i++) {
        temp.push_back(i);
    }
    
    sort(cycle.begin(), cycle.end());
    reverse(cycle.begin(), cycle.end());
    
    for(int i = 0; i < cycle_size; i++) {
        temp.erase(temp.begin() + cycle[i] - 1);
    }
    
    for(int i = 0; i < temp.size(); i++) {
        state.clear();
        state.resize(n + 1);
        if (state[temp[i]]==0) {
            if(dfs(temp[i]) == 0) {
                cyclecount++;
                break;
            }
        }
    }
    
    if(cyclecount == 1)
        cout << "FHTAGN!";
    else
        cout << "NO";
}