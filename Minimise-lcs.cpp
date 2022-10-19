#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;

        map <char, int> m1;
        map <char, int> m2;
        for (int i = 0; i < n; i++)
        {
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        int ans = 0;
        for(int j=0; j<n; j++){
            int x=0;
            int y=0;
            if(m1.find(s1[j]) != m1.end()){
                x = m1[s1[j]];
            }
            if(m2.find(s1[j]) != m2.end()){
                y = m2[s1[j]];
            }
            int res = min(x,y);
            ans = max(ans, res);
        }
        cout<<ans<<endl;
    }
    return 0;
}


