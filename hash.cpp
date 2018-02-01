#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stack>
#include <iostream>
#include <math.h>
#include <vector>
#include <limits.h>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int colorful(int N) {
        char st[20];
        sprintf(st, "%d", N);
        int len = strlen(st);
        
        unordered_map<long long, string> Hash;

        for(int i = 0; i < len; ++i) {
            long long mul = 1;string s="";
            for(int j = i; j < len; ++j) {
                mul *= (long long)(st[j] - '0');
                s+=st[j];
                if(Hash.find(mul) != Hash.end())
                        return 0;
                Hash[mul] = s;
            }
        }

        return 1;
    }
string fraction_hash(int n,int d){
	if(n==0)return 0;
	string ans="";
	if(n<0 ^ d<0)ans+="-";
	n=abs(n);d=abs(d);
	ans+=to_string((n/d));
	unordered_map<int,int> u;
	int r=(n%d);
	if(r==0) return ans;ans+=".";
	for (; r; r%=d)
	{	r*=10;
		int p=r%d;	//cout << r <<endl;
		
		if(u.find(p)==u.end()){
			u.insert({p,ans.size()});
		}
		else{
			ans.insert(u[p],1,'(');ans.push_back(')');break;
		}
		ans+=to_string((r/d));

	}
	return ans;	
}

int samepointonline(vector<int> &x,vector<int> &y){
	
	int ans=0,n=x.size(),same=1;
	if(n==0)return 0;
	map<pair<int,int> ,int>u;
	for (int i = 0; i < n; ++i)
	{	u.clear();
		same=1;
		int temp=0;
		for (int j = i+1; j < n; ++j)
		{
			int xd=x[i]-x[j];
			int yd=y[i]-y[j];
			if(xd==0 && yd==0)
			{
				same++;continue;
			}
			if(xd<0){
				xd*=-1;yd*=-1;
			}
			u[make_pair(xd,yd)]++;
			temp=max(temp,u[make_pair(xd,yd)]);
		}
		temp+=same;
		ans=max(temp,ans);
	}
	return ans;
}

vector<int>distinctinwindow(vector<int> &a,int k){
	vector<int> ans;
	int dist=0;int n=a.size();unordered_map<int,int>u;
	for (int i = 0; i < k; ++i)
	{	if(u[a[i]]==0)dist++;
		u[a[i]]++;
	}
	ans.push_back(dist);
	for (int i = k; i < n ; ++i)
	{
		if(u[a[i-k]]==1)dist--;
		u[a[i-k]]--;
		u[a[i]]++;
		if(u[a[i]]==1)dist++;
		ans.push_back(dist);
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	vector<int>a={1, 2, 1, 3, 4, 3};
	vector<int>b=distinctinwindow(a,3);
	for (int i = 0; i < b.size(); ++i)
	{
		printf("%d\n",b[i] );
	}
	return 0;
}
