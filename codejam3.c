#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define f1(n) for(int i=0;i<n;i++)
#define f2(n) for(int i=n-1;i>=0;i--)
#define fast ios::sync_with_stdio(false);
using namespace std;
signed main()
{
	fast
	int x,kk=1;
	cin>>x;
	while(x--)
	{
		int n;
		cin>>n;
		map<pair<int,int>,int> mm;
		vector<pair<int,int> >v;
		for(int i=0;i<n;i++){
			int x1,y1;
			cin>>x1>>y1;
			mm[{x1,y1}]=i;
			v.push_back(make_pair(x1,y1));
		}
		sort(v.begin(),v.end());
		string javab="";
		for(int i=0;i<n;i++) javab+="C";
	    javab[mm[{v[0].first,v[0].second}]]='C';
	    int e_c=v[0].second,e_j,fl=0,im1=0;
	    for(int i=1;i<n;i++){
	    	if(v[i].first>=e_c){
	    		javab[mm[{v[i].first,v[i].second}]]='C';
	    		e_c=v[i].second;
			}
			else if(v[i].first<e_c && fl==0){
				fl=1;
				e_j=v[i].second;
				javab[mm[{v[i].first,v[i].second}]]='J';
			}
			else if(v[i].first<e_c && v[i].first>=e_j){
				e_j=v[i].second;
				javab[mm[{v[i].first,v[i].second}]]='J';
			}
			else if(v[i].first<e_c && v[i].first<e_j){
				im1=1;
				break;
			}
		}
		if(im1==1) cout<<"Case #"<<kk<<": "<<"IMPOSSIBLE"<<endl;
		else cout<<"Case #"<<kk<<": "<<javab<<endl;
		kk++;
	}
}
