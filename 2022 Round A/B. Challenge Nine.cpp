/*
     लोकः समस्ताः सुखिनो भवन्तु
*/

#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define forr(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define int long long int
#define prec(x,y) fixed<<setprecision(y)<<x

const int mod= 1e9+7;
const int modd = 998244353;
#define inf 9223372036854775807
#define PI 3.1415926535897932384626

#define F first
#define S second
#define pb push_back
#define pf push_front
#define ps push
#define tp top

#define lb(v, val) (lower_bound(v.begin(), v.end(), val) - v.begin())
#define ub(v, val) (upper_bound(v.begin(), v.end(), val) - v.begin())
#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define all(v) v.begin(), v.end()

#define max3(a, b, c) max(a, max(b, c));
#define min3(a, b, c) min(a, min(b, c));
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))
#define sum(x) accumulate(all(x), 0LL)

#define usi unordered_set<int>
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>

#define unp unordered_map<int, int>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"
#define sz(x) ((int)x.size())
#define double long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define que_max_pi priority_queue<pair<int , int>> 
#define que_min_pi priority_queue<pair<int , int>, vector<pair<int , int>>, greater<pair<int , int>>>

#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define inarr(arr, n)                 \
    for (long long i = 0; i < n; i++) \
        cin >> arr[i];
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl

#define print1(p) cout<<p<<"\n";
#define print2(p,q) cout<<p<<" "<<q<<"\n";
#define print3(p,q,r) cout<<p<<" "<<q<<" "<<r<<"\n";
#define printMap(a)  \
    for (auto x : a) \
    cout << x.F << " " << x.S << endl
#define printPart(a, x, y)      \
    for (int i = x; i < y; i++) \
        cout << a[i] << " ";    \
    cout << endl
#define my_sizeof(type) ((char *)(&type + 1) - (char *)(&type))

int ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
int floor(ll a, ll b) {return a % b == 0 ? a / b : (a-1) / b ;}


int gcd(int a, int b)
{
    return __gcd(a,b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int powr(int a, int b, int m)
{
    // last digit of power repeats after every 4 powers
    a %= m;
    int ans=1;
    while(b>0){
        if(b&1){
            ans= (ans*1ll*a)%m;
        }
        a= (a*1ll*a)%m;
        b>>=1;
    }
    return ans;
}

int multiply(int a, int b, int m)
{
    int res = 0;
    while (b)
    {
        if (b & 1)
            res = res + a, res %= m;
        a += a;
        a %= m;
        b /= 2;
    }
    return res;
}




// max({a,b,c,d});
// s.substr(start_pos, size);
// vector<vi> v(n, vector<int> (n));
//  fibonacii matrix 0 1
//                   1 1

//(n^p)%m == ((n%m)^p)%m
// think of GCD in case divisor, or whole array.

// const int nMax =  2e5 + 1;
//     int fact[nMax]; 
//     vi iF(nMax);


int sumofdig(string n){
    int ans=0;
    int a= n.size();
    for(int i=0; i<a; i++){
        int k= n[i]-'0';
        ans+=k;
        ans%=9;
    }
    return ans;
}

void solve(){
    string n; cin>>n;
    int k= sumofdig(n);
    int a= n.size();
    k= 9- (k%9);
    if(k==9){
        // n+="0";
        string x= "";
        x+=n[0];
        string y= n.substr(1,a-1);

        print1(x+"0"+y);
        return;
    }
    // print1(k);
    char c= '0'+k;
    
    int idx=a;
    for(int i=0; i<a; i++){
        if(n[i]>c){
            idx= i;
            break;
        }
    }
    string p= n.substr(0, idx);

    string q= "";
    if((idx) < a){
        q= n.substr(idx, a-idx);
    }
    string r="";
    r+=c;
    if(a==1){
        string ans= p+r+q;
        sorti(ans);
        print1(ans);
        return;
    }
    print1(p+r+q);



    


    


}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int test=1; 
    cin>>test;
    int z=test;

    
    // fact[0] = 1;
    // iF[0]=1;
    // for (ll i = 1; i < nMax; i++) {
    //     fact[i] = multiply(fact[i - 1], i, mod);
    // }
    // for(int i=1; i<nMax;i++){
    //     iF[i]=iF[i-1]*powr(i,mod-2,mod);
    //     iF[i]%=mod;
    // }

    
    while(test--){
        cout<<"Case #"<<z-test<<":"<<" ";
        solve();
    }
    return 0;
}


