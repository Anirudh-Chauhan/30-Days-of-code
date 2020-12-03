#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int T;
   cin>>T;
   while(T--)
   {   int l,k=0;
       char S[100];
       scanf(" %[^\n]s",S);
       l=strlen(S);
       if(S[0]=='n'&&S[1]=='o'&&S[2]=='t'&&(S[3]==' '||S[3]=='\0'))
       {k=1;}
       else{
       for(int i=0;i<l-3;i++)
       {  
          if(S[i]==' '&&S[i+1]=='n'&&S[i+2]=='o'&&S[i+3]=='t'&&(S[i+4]==' '||S[i+4]=='\0'))
                k=1;
       }
       if(k==1)
       cout<<"Real Fancy\n";
       else
       cout<<"regularly fancy\n";
       puts(S);
       }
   }
	return 0;
}
