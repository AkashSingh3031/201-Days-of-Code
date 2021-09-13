#include<bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    int maxNumberOfBalloons(string text) 
    {
        int a = 0, b = 0, o = 0, l = 0, n = 0;
    
        for(auto &ch: text)
        {
            switch(ch)
            {
                case 'a':
                    a++;
                    break;
                case 'b':
                    b++;
                    break;
                case 'l':
                    l++;
                    break;
                case 'o':
                    o++;
                    break;
                case 'n':n++;
                    break;
            }
        }
    
        if(a > b) 
            a = b;
        if(a > l/2) 
            a = l/2;
        if(a > o/2) 
            a = o/2;
        if(a > n) 
            a = n;
        
    return a;
    }
};

int main()
{
    string text = "nlaebolko";
        
    Solution ob;
    cout<< ob.maxNumberOfBalloons(text);
}
