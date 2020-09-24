#include<bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,a,n) for(ll i=a;i<n;i++)
#define all(a) a.begin(), a.end()
typedef long long ll;
vector<struct node*> v;

ll flag=1;

void bst(ll a[],ll n, ll ma, ll mi)
{   
    static ll i=1;
    while(i<n)
    {
        if(a[i]>ma || a[i]<mi)
        {
            flag=0;
            break;
        }
        else if(a[i]>a[i-1])
        {
            i++;
            bst(a,n,ma,a[i-2]);
        }
        else
        {
            i++;
            bst(a,n,a[i-2],mi);
        }
        
    }
}
int main()
{
    ios;
    ll arr[] = { 512, 330, 78, 11, 8 }; 
    ll n = sizeof(arr) / sizeof(arr[0]);
    ll ma=100000000;
    ll mi=-100000000;
    bst(arr,n,ma,mi);
    if(flag)
        cout<<"Yes";
    else    
        cout<<"No";
	return 0;
}
