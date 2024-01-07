#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	vector<vector<int>>p(n,vector<int>(32,0));
	
	for(int i=0;i<n;i++)
	{
		int x = arr[i];
		for(int j=0;j<32;j++)
		{
			//cout << ((x>>j)&1) << " " << j << endl;
			if((x>>j)&1)
			{

				p[i][j] = 1;

			}
		}
		//cout << "*" << endl;
	}
	for(int i=0;i<32;i++)
	{
		for(int j=1;j<n;j++)
		{
			p[j][i] = p[j][i]+p[j-1][i];
		}
	}
	
	int q;
	cin >> q;
	while(q--)
	{
		int l,r;
		cin >> l >> r;
		int x = r-l+1;
		int ans=0;
		if(l==0)
		{
			for(int i=0;i<32;i++)
			{
				if(p[r][i]==x)
				{
					ans = ans|(1<<i);
				}
			}
		}
		else
		{
			for(int i=0;i<32;i++)
			{
				if(p[r][i]-p[l-1][i]>0)
				{
					ans = ans|(1<<i);
				}
			}
		}
		cout << ans << endl;
	}
}