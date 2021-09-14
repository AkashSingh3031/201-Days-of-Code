#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string reverseOnlyLetters(string S) 
    {
        for (int i = 0, j = S.length() - 1; i < j;)
        {
            if (!isalpha(S[i]))
                ++i;
            else if (!isalpha(S[j]))
                --j;
            else
                swap(S[i++], S[j--]);
        }
        return S;
    }
};

int main()
{
    string S = "Test1ng-Leet=code-Q!";
    
    Solution ob;
    cout << ob.reverseOnlyLetters(S);
}
