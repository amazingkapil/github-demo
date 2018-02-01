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
using namespace std;
int cmp(string s1,string s2){
	string p=s1+s2;
	string q=s2+s1;
	if(p>q)return 1;
	return 0;
}
string largestNumber(vector<int> &a){
  int n=a.size();vector<string> s;
  for (int i = 0; i < n; ++i)
  {
    s.push_back(to_string(a[i]));
  }
  sort(s.begin(),s.end(),cmp);
  string p="";
  for (int i = 0; i < n; ++i)
  {
  	p.append(s[i]);
  }
  int l=stoi(p);
  if(l==0)return "0";
  return p;
}
int maxDiff(vector<int> &a){
	int ans=0;int n=a.size();
	vector<int> b(n);vector<int> c(n);
	b[0]=a[0];c[n-1]=a[n-1];
	for (int i = 0; i < n; ++i)
		printf("%d ",a[i] );printf("\n");
	for (int i = 1; i < n; ++i)
	{
		b[i]=min(a[i],b[i-1]);
	}
	for (int i = 0; i < n; ++i)
		printf("%d ",b[i] );printf("\n");
	for (int i = n-2; i >= 0; i--)
	{
		c[i]=max(a[i],c[i+1]);
	}
	for (int i = 0; i < n; ++i)
		printf("%d ",c[i] );printf("\n");
	int i=0,j=0;
	while(i<n && j<n){
		if(b[i]<c[j]){
			ans=max(ans,j-i);
			j+=1;
		}
		else
			i+=1;
	}
	return ans;
}
int segregate(vector<int> &a){
	int i=0,j=0;
	for (i = 0; i < a.size(); ++i)
	{
		if(a[i]<=0)//beautiful..I tell u
		{
			int t=a[j];a[j]=a[i];a[i]=t;
			j++; 
		}
	}
	return j;
}
int firstMissingPositiveUtil(vector<int> &a,int n){
	for (int i = 0; i < n; ++i)
	{	if(abs(a[i]) - 1 < n && a[abs(a[i]) - 1] > 0)
		a[abs(a[i])-1]*=-1;
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i]>0)
			return i+1;
	}
	return n;
}
int Solution::findRank(string a) {
	string p=a;
	sort(a.begin(),a.end());
	int ans=1;
	while(p!=a){
		next_permutation(a.begin(),a.end());ans++;
	}
	return ans;
}

int firstMissingPositive(vector<int> &a) {
	int j=segregate(a);
	vector<int> b;
	for (int i = j; i < a.size(); ++i)
	{
		b.push_back(a[i]);
	}
	int ans=firstMissingPositiveUtil(b,b.size());
   	return ans;
}
void count(vector<int>&a,int n,int p){
	vector<int> res(10,0);vector<int> b(n,0);
	for (int i = 0; i < n; ++i)
		res[(a[i]/p)%10]+=1;
	for (int i = 1; i < 10; ++i)
		res[i]+=res[i-1];
	for (int i = n - 1; i >= 0; i--)
	{
		b[res[(a[i]/p)%10]-1]=a[i];
		res[(a[i]/p)%10]--;
	}
	for (int i = 0; i < n; ++i)
	{
		a[i]=b[i];
	}
	
}
void radix(vector<int> &a){
	int n=a.size();int maxi=0;
	for (int i = 0; i < n; ++i)
		maxi=max(maxi,a[i]);
	
	for (int i = 1;(maxi/i) > 0 ; i*=10)
	{
		count(a,n,i);

	}
}
int maxDifference(vector<int> &a){
	if(a.size()<2)
		return 0;
	radix(a);
	int ans=a[1]-a[0];
	for (int i = 2; i < a.size() ; ++i)
	{
		ans=max(ans,a[i]-a[i-1]);
	}
	return ans;
}
typedef struct p{
	int e;int c;
}p;
int nbyktimes(vector<int> &a,int k){
	int n=a.size();
	
	p temp[k-1];
	for (int i = 0; i < k-1; ++i)
		temp[i].c=0;
	for (int i = 0; i < n; ++i){
		int j=0;
		for ( j = 0; j < k-1; ++j)
		{
			if(temp[j].e==a[i]){
				temp[j].c+=1;break;
			}
		}
		if(j==k-1){int l;
			for (l = 0; l < k-1; ++l)
			{
				if(temp[l].c==0){
					temp[l].e=a[i];temp[l].c+=1;break;
				}
			}
			if(l==k-1){
				for (int o = 0; o < k-1; ++o)
					temp[o].c-=1;
			}
		}
	
	}
	for (int i = 0; i < k-1; ++i)
	{
		int c=0;
		for (int j = 0; j < n; ++j)
		{
			if(temp[i].e==a[j])
				c++;
		}
		if(c>(n/k))
			return temp[i].e;
	}
	return -1;
}
vector<int> flip(string a) {
	int n=a.length();
	vector<int> ans(n);
	for (int i = 0; i < n; ++i)
	{
		if(a[i]=='1')ans[i]=-1;
		else ans[i]=1;
	}
	vector<int>ib(2);
	int max_so_far=0,maximum=0,p=0,q=0;
	for (int i = 0; i < n; ++i)
	{
		max_so_far+=ans[i];
		if(max_so_far<0){
			p=i+1;
			max_so_far=max(0,max_so_far);
		}
		if(max_so_far>maximum){
			maximum=max_so_far;q=i;
			ib[0]=p+1;ib[1]=q+1;
		}
	}
	return ib;
	
}
vector<vector<int>> kthpascalrow(int k){
	vector<int> ans(k+1);vector<vector<int>>answer;
	ans[0]=1;
	for (int i = 1; i <= k; ++i)
	{	vector<int> l;
		for (int u = 0; u <= k; ++u)
		{	if(ans[u]==0)break;
			l.push_back(ans[u]);
			//printf("%d ",ans[u] );
		}
		answer.push_back(l);
		//printf("\n");
		for (int j = i; j >= 0; j--)
		{
			ans[j]=ans[j-1]+ans[j];
		}
		
	}vector<int> l;
		for (int u = 0; u <= k; ++u)
		{
			if(ans[u]==0)break;
			l.push_back(ans[u]);
		}
		answer.push_back(l);
	return answer;
}
int canCompleteCircuit(const vector<int> &gas, const vector<int> &cost) {
    int n=gas.size();vector<int>diff(n);
    for (int i = 0; i < n; ++i)
    {
    	diff[i]=gas[i]-cost[i];
    }
    int f=0;int i;
    for (i = 0; i < n; ++i)
    {
    	int p=0,l=-1;
    	if(diff[i]>0){
    		p+=diff[i];cout << diff[i];l=i;i++;
    		while(p>=0){
    			if(i==l)break;
    			(++i)%=n;
    			p+=diff[i];

    		}
    	}
    	if(l==i){f=1;break;}
    	else if(i<l)return -1;

    }
    if(f==1)
    	return i;
    return -1;
}
vector<vector<int> > diagonal(vector<vector<int> > &a) {
	vector<vector<int>>ans;int i=0,n=a[0].size();
	for (int j = 0; j < n; ++j)
	{	int k=j;vector<int>answer;i=0;
		while(i<=k ){printf("ballll %d\n",i);
			answer.push_back(a[i][j]);
			i++;j--;
		}j=k;
		ans.push_back(answer);
	}
	int j=n-1;
	for (int i = 1; i < n; ++i)
	{
		int k=j;vector<int>answer;j=n-1;
		while(i<=k ){printf("taa\n");
			answer.push_back(a[i][j]);
			i++;j--;
		}
		ans.push_back(answer);
	}
	return ans;
}
void nextPermutation(vector<int> &a) {
    int n=a.size();
    for (int i = n-1; i > 0 ; i--)
    {
    	if(a[i]>a[i-1]){
    		int t=a[i];a[i]=a[i-1];a[i-1]=a[i];return;
    	}
    }
    sort(a.begin(),a.end());
}
int Solution::seats(string s) {
   int n=s.size();
   vector<int> a;int ans=0;
   for (int i = 0; i < n; ++i)
   		if(s[i]=='X')a.push_back(i);
   	int mid;int j=a.size();
   	if(a.size()&1){mid=j/2;mid=a[mid];}
   	else {mid=j/2;mid=(a[mid]+a[mid-1])/2;}
   	int prev=0;
   	for (int i = mid; i>=0; i--)
   	{
   		while(s[i]=='X' && i>0)i--;
   			prev=i;
   		while(s[i]=='.' && i>0)i--;
   		if(i>0)s[i]='.';
   			ans+=prev-i;
   			i=prev;
   	}
   	 for (int i = mid+1; i<n; i++)
   	{
   		while(s[i]=='X' && i<n)i++;
   			prev=i;
   		while(s[i]=='.' && i<n)i++;
   		if(i<n)s[i]='.';
   			ans+=i-prev;
   			i=prev;
   	}
   	return ans;
}

int main() {
	//vector<int> a={ 281, 381, 172, 748, 675, 332, 877, 835, 967, 357, 600, 188, 679, 82, 568, 189, 979, 619, 847, 648, 518, 511, 794, 101, 780, 501, 608, 175, 957, 316, 778, 947, 528, 456, 667, 408, 831, 201, 905, 23, 308, 0, 364};
	//vector<int> b={106, 777, 62, 424, 607, 40, 204, 604, 91, 590, 905, 587, 837, 491, 198, 819, 737, 528, 286, 989, 602, 854, 611, 606, 903, 907, 255, 825, 641, 887, 225, 219, 625, 446, 809, 771, 733, 309, 283, 291, 298, 401, 659};
	//vector<int> diff(b.size());
	//for (int i = 0; i < b.size(); ++i)
	//{
	//	diff[i]=a[i]-b[i];cout << diff[i] <<" ";
	//}
	//cout << endl;
	//cout << canCompleteCircuit(a,b)<< endl;
	vector<vector<int>>a={
  					{1, 2, 3},
  					{4, 5, 6},
  					{7, 8, 9},
							};
		a=diagonal(a);					
	return 0;
}