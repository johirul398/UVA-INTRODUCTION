#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,i,j,k,a1,b1,c1;
    string s;
    cin>>e;
    while(e--)
    {
        cin>>s;
        k=s.size();
        a=b=c=0;
        bool x,y,z;
        x=y=z=1;
        for(i=0;i<k;i++)
        {

            if(s[i]==s[0])
            {
                if(x) a++;
                if(y) b++;

            }
           else if(s[i]==s[k-1])
            {
                if(x) a--;
                if(y) b--;
                if(a<0) x=0;
                if(b<0) y=0;
            }
            else
            {
                if(x) a++;
                if(y) b--;
                if(b<0) y=0;
            }
            if(!x && !y) z=false;
        }
         if(s[0]==s[k-1]) z=false;
         else if(a==0 || b==0)z=true;
         else z=false;

        if(z==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    return 0;
}
