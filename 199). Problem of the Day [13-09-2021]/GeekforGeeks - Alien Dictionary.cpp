#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    void get_order(int node, vector<vector<int> > &adj, vector<int> &vis, string &ans)
    {
        if(vis[node]==1) 
            return;
        for(int i=0;i<adj[node].size();i++)
            if(vis[adj[node][i]]==0) 
                get_order(adj[node][i],adj,vis,ans);
                
        ans+=node+'a'; 
        vis[node]=1;
        return;
    }
    
    string findOrder(string dict[], int N, int K) 
    {
        //code here
        vector<vector<int>> adj(K);
        for(int i=0;i<N-1;i++)
        {
            // Take the current two words and find the first mismatching character
            string s1=dict[i], s2=dict[i+1];
            int i1=0,i2=0;
            while(i1<s1.size() && i2<s2.size() && s1[i1]==s2[i2])
            {
                i1++;
                i2++;
            }
            // If we find a mismatching character, then add an edge from character of word1 to that of word2
            if(i1<s1.size() && i2<s2.size())
                adj[s1[i1]-'a'].push_back(s2[i2]-'a');
            
        }
        
        string ans;
        vector<int> vis(K,0);
        // as all k value(character in Alian dictionary) are from starting alphabate in actual one
        for(int i=0;i<K;i++) 
            if(vis[i]==0) 
                get_order(i,adj,vis,ans);
        
        // as in string "ans"  highest one coming first so we need to reverse it
        reverse(ans.begin(),ans.end()); 
        return ans;
    }
};

string order;
bool f(string a, string b)
{
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++)
    {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
    }

    if (p1 == p2 and a.size() != b.size()) 
        return a.size() < b.size();

    return p1 < p2;
}

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++)
            cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) 
            order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) 
                f = false;

        if(f)
            cout << 1;
        else 
            cout << 0;
        cout << endl;
    }
    return 0;
}
