#include<bits/stdc++.h>
using namespace std;


#define deb(x) cout<<#x <<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define fok(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define Yes cout<<"YES";
#define No cout<<"NO";
#define pb push_back
#define maxi INT_MIN
#define mini INT_MAX
#define inf 1e9
#define mod 1000000007

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
 
template<typename... T>
void read(T&...args){
	((cin>>args),...);
}
template<typename... T>
void write(T&&...args){ //rvalue reference you may can remove &&
	((cout<<args<<" "),...);
}

void err(istream_iterator<string> it) {} //fro debugging multiple values at a time
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}


void solve(){
	
}

void judge(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

int main(){
	judge();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt=1; 
	cin>>tt;
	while(tt--){
		solve();
	}
}
