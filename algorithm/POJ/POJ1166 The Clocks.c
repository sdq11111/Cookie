#include<stdio.h>

int main(int argc, char* argv[])
{
	int m[9][9]={{1,1,0,1,1,0,0,0,0},{1,1,1,0,0,0,0,0,0},{0,1,1,0,1,1,0,0,0},{1,0,0,1,0,0,1,0,0},{0,1,0,1,1,1,0,1,0},{0,0,1,0,0,1,0,0,1},{0,0,0,1,1,0,1,1,0},{0,0,0,0,0,0,1,1,1},{0,0,0,0,1,1,0,1,1}};
	int s[9],c[9],t[9],i,j,f;
	for(i=0;i<9;i++) scanf("%d",&c[i]);
	for(s[0]=0;s[0]<4;s[0]++)
	{
	    for(s[1]=0;s[1]<4;s[1]++)
	    {
	        for(s[2]=0;s[2]<4;s[2]++)
	        {
	            for(s[3]=0;s[3]<4;s[3]++)
	            {
	                for(s[4]=0;s[4]<4;s[4]++)
	                {
	                    for(s[5]=0;s[5]<4;s[5]++)
	                    {
	                       for(s[6]=0;s[6]<4;s[6]++)
	                       {
	                           for(s[7]=0;s[7]<4;s[7]++)
	                           {
	                               for(s[8]=0;s[8]<4;s[8]++)
	                               {
	                                   f=1;
	                                   for(i=0;i<9;i++)
	                                   {
	                                       t[i]=c[i];
	                                       for(j=0;j<9;j++)
	                                       {
	                                           t[i]+=s[j]*m[j][i];
	                                       }
	                                       t[i]%=4;
	                                       if(t[i])
	                                       {
	                                           f=0;
	                                           break;
	                                       }
	                                   }
	                                   if(f)
	                                   {
	                                       for(i=0;i<9;i++)
	                                       {
	                                           while(s[i]--)
	                                           {
	                                               printf("%d ",i+1);
	                                           }
	                                       }
	                                       printf("\n");
	                                       return 0;
	                                   }
	                               }
	                           }
	                       }
	                    }
	                }
	            }
	        }
	    }
	}
	return 0;
}
