#include <bits/stdc++.h>
using namespace std;

// constant
#define ll long long


// loop
#define loop(i, a, n) for (ll i = a; i < n; i++)
int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
	// ll t;
	// C(t);
	// w(t)
	// {
		ll n ,k;
		cin>>n>>k;
		ll r_q,c_q;
		cin>>r_q>>c_q;
		map<pair<ll,ll>,ll> m;
		loop(i,0,k)
		{
			ll x, y;
			cin>>x>>y;
			pair<ll,ll> por =  make_pair(x,y);
			m[por]++;
		}
		int ans =0;
		
		int p = r_q+1, q = c_q-1;
		while(p > 0 && q >0 && p <= n && q <= n)
		{
			pair<int,int> pr;
			pr.first = p,
			pr.second = q;
			if(!m[pr]) ans++;
			else{break;} 
			p++,q--;
		}
		p = r_q+1, q = c_q;
		while(p > 0 && q >0 && p <= n && q <= n)
		{
			pair<int,int> pr;
			pr.first = p,
			pr.second = q;
			if(!m[pr]) ans++;
			else{break;}  
			p++;
		}
		p = r_q+1, q = c_q+1;
		while(p > 0 && q >0 && p <= n && q <= n)
		{
			pair<int,int> pr;
			pr.first = p,
			pr.second = q;
			if(!m[pr]) ans++; 
			else{break;} 
			p++,q++;
		}
		p = r_q, q = c_q+1;
		while(p > 0 && q >0 && p <= n && q <= n)
		{
			pair<int,int> pr;
			pr.first = p,
			pr.second = q;
			if(!m[pr]) ans++; 
			else{break;} 
			q++;
		}
		p = r_q-1, q = c_q+1;
		while(p > 0 && q >0 && p <= n && q <= n)
		{
			pair<int,int> pr;
			pr.first = p,
			pr.second = q;
			if(!m[pr]) ans++; 
			else{break;} 
			p--,q++;
		}
		p = r_q-1, q = c_q;
		while(p > 0 && q >0 && p <= n && q <= n)
		{
			pair<int,int> pr;
			pr.first = p,
			pr.second = q;
			if(!m[pr]) ans++; 
			else{break;} 
			p--;
		}
		p = r_q-1, q = c_q-1;
		while(p > 0 && q >0 && p <= n && q <= n)
		{
			pair<int,int> pr;
			pr.first = p,
			pr.second = q;
			if(!m[pr]) ans++; 
			else{break;} 
			p--,q--;
		}
		p = r_q, q = c_q-1;
		while(p > 0 && q >0 && p <= n && q <= n)
		{
			pair<int,int> pr;
			pr.first = p,
			pr.second = q;
			if(!m[pr]) ans++; 
			else{break;} 
			q--;
		}
		p = r_q, q = c_q;
		cout<<ans;
	
}