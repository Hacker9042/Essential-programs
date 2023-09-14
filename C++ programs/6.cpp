// // Update the '_' below to solve the problem

// #include <iostream>
// #include <string>
// using namespace std;

// int main() 
// {
//  int t;
//  //accept the count of test cases given in the the 1st line
//  cin>>t;
//  //Run a loop to accept 't' inputs
// for(int i=1; i<=t; i++){
//     int A,B,C,D,E;
//     cin>>A>>B;
//     cin>>C>>D>>E;
//     cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
// }
//  return 0;
// }

// Update the '_' in the code below

// #include <iostream>
// #include <string>
// using namespace std;

// int main() 
// {
//  int t;
//  cin>>t;
//  while(t--)
//   { 
//    int X,N;
//    cin>>X>>N;
//    int points_per_testcase=X/10;
//    int score= points_per_testcase*N;
//    cout<<score<<endl;
//    }
//  return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ld long double
// #define mp make_pair
// #define pb push_back
// #define eb emplace_back
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define vi vector<int>
// #define vll vector<long long>
// #define mii map<int, int>
// #define si set<int>
// #define vpii vector<pii>
// #define f(i, a, b) for (auto i = a; i < b; ++i)
// #define fd(i, a, b) for (auto i = a; i >= b; --i)
// #define cnl(c) cout << c << "\n";

// void solve()
// {
// 	int n,b,w,h,p,A; cin>>n>>b;
// 	mii tablets;
// 	f(i, 0, n){
// 		cin>>w>>h>>p;
// 		A=w*h;
// 		tablets[A]=p;
// 	}
// 	//mii :: iterator iter;
// 	// auto iter= tablets.begin();
	
// 	auto iter= --tablets.end();
// 	int flag=0;
// 	for(iter = --tablets.end(); iter!= tablets.begin();iter--){
// 		if(iter->second <= b){
// 			flag=1;
// 			break;
// 		}

// 	}
// 	if(flag!=1) cout<<"no tablet"<<endl;
// 	else cout<<iter->first<<endl;


// }

// int main()
// {
// 	int tc=1;
// 	cin>>tc;
// 	while(tc--)
// 	{
// 		solve();
// 	}
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define msi multiset<int>
#define mii map<int, int>
#define si set<int>
#define vpii vector<pii>
#define f(i, a, b) for (auto i = a; i < b; ++i)
#define fd(i, a, b) for (auto i = a; i >= b; --i)
#define cnl(c) cout << c << "\n";

void solve()
{
	msi mset; si set;
	int n,x; cin>>n;
	f(i,0,n){
		cin>>x;
		mset.insert(x);
		set.insert(x);
	}
	int max_count=0;
	auto iter = set.begin();
	for(iter=set.begin();iter!=set.end();iter++){
		int temp=mset.count(*iter);
		if(max_count<temp) max_count=temp;
	}
	cout<<n-max_count<<endl;
}

int main()
{
	int tc=1;
	cin>>tc;
	while(tc--)
	{
		solve();
	}
	return 0;
}