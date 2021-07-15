#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 26

void offineCipher(){
	string t,s,s1;
    cin>>s;
    int n = s.size();
    //  ------ encrption --------
    for(int i=0; i<n; i++){
        if(s[i]<'a' || s[i]>'z'){
            t.push_back(s[i]);
            continue;
        }
        int x = s[i]-'a';
        int y = (7*x+11)%mod;
        if(y<0) y += mod;
        t.push_back(y+'a');
    }
    cout<<"Encrypted data: "<<t<<"\n";
    // ------ decryption -------
    for(int i=0; i<n; i++){
        if(t[i]<'a' || t[i]>'z'){
            s1.push_back(t[i]);
            continue;
        }
        int x = t[i]-'a';
        int y = (15*x+17)%mod;
        if(y<0) y += mod;
        s1.push_back(y+'a');
    }
    cout<<"Encrypted data: "<<s1<<"\n";
}

ll fastExpo(ll a,ll b,ll md){
    ll res=1;
    while(b>0){
        if(b&1) res=(res*a)%md;
        a=(a*a)%md;
        b>>=1;
    }
    return res;
}

int gcd(int a,int b){
    return a==0?b:gcd(b%a,a);
}

/*
    ---  how eular's phi function works? ----

    m^@(n) = 1 (mod n)  // m == message
    m^k*@(n) = 1 (mod n)  // 1^(k) = 1;
    m^k*@(n)+1 = m (mod n) // product m both side
    m^e*d = 1  // e*d = k*@(n)+1
    
    one step == two step
    5^2*3 == (5^2)^3
    5^6 == 25^3
    15625 == 15625
*/

void RSA(){
    double p = 53, q = 59;
    double n = p*q; // public key
    double phi = (p-1)*(q-1), e = 2; //pk - encrypt
    while(e<phi){
        if(gcd(e,phi)==1) break;
        else e++;
    }
    int k = 2;
    double d = (k*phi+1)/e;
    double msg = 20;   // data
    cout<<"message data: "<<msg<<" e: "<<e<<" "<<phi<<"\n";
    double  c = fastExpo(msg,e,n);
    cout<<"Encrypted data: "<<c<<"\n";
    double original_msg = fastExpo(c,d,n);
    cout<<"original Message sent: "<<original_msg<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    // offineCipher();
    RSA();
    return 0;
}
