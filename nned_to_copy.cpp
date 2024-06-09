/// *** --- |||  harekrishna harekrishna krishna krishna hare hare harerama harerama rama rama hare hare  ||| --- *** ///
/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||        niloysarker.cs@gmail.com           ||
||         nsarker12.niter.edu.bd            ||
||-------------------------------------------||
*/
#include<bits/stdc++.h>
using namespace std;

///************************************** M a r c o **************************************///
#define ull unsigned long long
#define ft float
#define pb push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define left(node) (node*2)
#define right(node) (node*2+1)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define mx_int_prime 999999937
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"

#define gcd(a,b)           __gcd(a,b)
#define lcm(a, b)          ((a)*((b)/gcd(a,b)))
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define MAX3(a,b,c) max(a,max(b,c))
#define MIN3(a,b,c) min(a,min(b,c))
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

///************************************** C o n t a i n e r **************************************///

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pri;
typedef pair<double, double> prd;
typedef pair<ll, ll> prl;
typedef vector<pri> vpri;
typedef vector<prl> vprl;
typedef vector<prd> vprd;
typedef double db;

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

///************************************** ar/v input-ouput **************************************///

#define arinput(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define aroutput(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}
#define vinput(v,n) for(int i=0;i<n;i++){cin>>v[i];}
#define voutput(v,n) for(int i=0;i<n;i++){cout<<v[i]<<" ";}
 
 ///************************************** C o n s t **************************************///

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};
 
 ///************************************** D e b u g e r **************************************///

template < typename A, typename B >
ostream& operator << ( ostream& os, const pair< A, B > & p ) {
    return os << "(" << p.f << ", " << p.s << ")";
}

template < typename V >
ostream &operator << ( ostream & os, const vector< V > &v ) {
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename S >
ostream &operator << ( ostream & os, const set< S > &s ) {
    os << "[";
    for(auto it = s.begin(); it != s.end(); ++it) {
        if( it != s.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename M >
ostream &operator << ( ostream & os, const multiset< M > &ms ) {
    os << "[";
    for(auto it = ms.begin(); it != ms.end(); ++it) {
        if( it != ms.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename K, typename V >
ostream &operator << ( ostream & os, const map< K, V > &mp ) {
    os << "[";
    for(auto it = mp.begin(); it != mp.end(); ++it) {
        if( it != mp.begin() ) os << ", ";
        os << it -> f << " = " << it -> s ;
    }
    return os << "]";
}

#define debug(args...) do {cerr << #args << " : "; err(args); } while(0)

void err () {
    cerr << endl;
}

template <typename T>
void err( T a[], int n ) {
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... rest>
void err( T arg, const rest &... r) {
    cerr << arg << ' ';
    err(r...);
}

 ///************************************** C O D E **************************************///
 ///-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-///
 

bool spp(vi& a) {
    int n = a.size();
    vi g(n - 1);
    for (int i = 0; i < n - 1; i++) {
        g[i] = __gcd(a[i], a[i + 1]);
    }
    for (int i = 1; i < n - 1; i++) {
        if (g[i] < g[i - 1]) {
            return false;
        }
    }
    return true;
}

void solve(int ttc) 
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (spp(a)) {
        yes;
        return;
    }

    int idx = -1;
    for (int i = 1; i < n - 1; i++) {
        if (__gcd(a[i], a[i - 1]) > __gcd(a[i], a[i + 1])) {
            idx = i;
            break;
        }
    }


    for (int j = idx - 1; j <= idx + 1; j++) {
        if (j >= 0 && j < n) {
            vi v;
            for (int i = 0; i < n; i++) {
                if (i != j) {
                    v.pb(a[i]);
                }
            }
            // Check if removing the element makes the array non-decreasing
            if (spp(v)) {
                yes;
                return;
            }
        }
    }
    no;
}

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        solve(t);
    }
    return 0;
}


// int gcd(int num1, int num2)
// {
//     if(num1==0 || num2==0)return 0;
//     if(num1==1 || num2==1)return 1;

//     int i,min_gcd,min = (num1>num2)?num1:num2;
//     for(i=2; i<=min; i++)
//     {
//         if(num1%i==0 && num2%i==0)
//         {
//             min_gcd = gcd(num1/i,num2/i);
//             break;
//         }
//     }
//     if(i>min) return 1;
//     else return(i*min_gcd);
// }

// int gcd(int a, int b) 
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }