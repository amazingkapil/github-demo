#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stack>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <limits.h>
#include <string.h>
#define for0(i,m1,n1)		for(int i=m1; i<n1; i++)
#define for1(i,m1,n1)		for(int i=m1; i<=n1; i++)
#define for2(i,m1,n1)     	for(int i=0; m1<=n1; i++)
#define for3(i,m1)     	    for(int i=0; i<n1; i++)

using namespace std;
void blackutil(vector<string> &a,int n,int m,int i,int j){
	a[i][j]='O';
	if(i+1<n && a[i+1][j]!='O')
		blackutil(a,n,m,i+1,j);
	if(i-1>=0 && a[i-1][j]!='O')
		blackutil(a,n,m,i-1,j);
	if(j+1<m && a[i][j+1]!='O')
		blackutil(a,n,m,i,j+1);
	if(j-1>=0 && a[i][j-1]!='O')
		blackutil(a,n,m,i,j-1);
}
void soveutil(vector<vector<char>> &a,int n,int m,int i,int j){
	a[i][j]='B';
	if(i+1<n && a[i+1][j]!='X')
		soveutil(a,n,m,i+1,j);
	if(i-1>=0 && a[i-1][j]!='X')
		soveutil(a,n,m,i-1,j);
	if(j+1<m && a[i][j+1]!='X')
		soveutil(a,n,m,i,j+1);
	if(j-1>=0 && a[i][j-1]!='X')
		soveutil(a,n,m,i,j-1);
}
void Solution::solve(vector<vector<char>> &a) {
    int n=a.size();int m=a[0].size();
   
   int i=0,j;
   for (j = 0; j < m; ++j)
   {	if(a[i][j]=='O')
   		soveutil(a,n,m,i,j);	
   }
   j=m-1;
   for (i = 1; i < n; ++i)
   {	if(a[i][j]=='O')
   		soveutil(a,n,m,i,j);	
   }
   i=n-1;
   for (j = m-2; j>=0; j--)
   {	if(a[i][j]=='O')
   		soveutil(a,n,m,i,j);	
   }
   j=0;
   for (i = n-2; i>=1; i--)
   {	if(a[i][j]=='O')
   		soveutil(a,n,m,i,j);	
   }
   for (int i = 0; i < n; ++i)
   {
   		for (int j = 0; j < m; ++j)
   		{
   			if(a[i][j]=='B')
   				a[i][j]='O';
   			else if(a[i][j]=='O')
   				a[i][j]='X';
   		}
   }
}
int black(vector<string> &a) {
   int n=a.size(),ans=0;int m=a[0].size();
   if(n==0 || m==0)return 0;
   for (int i = 0; i < n; ++i)
   {
   		for (int j = 0; j < m; ++j)
   		{
   			if(a[i][j]=='X'){
   				ans++;
   				blackutil(a,n,m,i,j);
   			}
   		}
   }
   return ans;
}



 

int main(int argc, char const *argv[])
{
	
	return 0;
}