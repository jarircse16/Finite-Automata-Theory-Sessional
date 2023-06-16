#include<bits/stdc++.h>
using namespace std;

int m=1000000, a=19954, c=17461, n, otp=0;
vector <int> X;

int generate_otp();

int main()
{
    FILE *fout;
    fout = fopen("OTP.txt", "w");
    cout<<"How many numbers: ";
    cin>>n;
    cout<<endl;
    generate_otp();
    for(int i=1; i<=n; i++)
    {
        fprintf(fout, "RUET-%d\n", X[i]);
    }
}

int generate_otp()
{
    X.push_back(657981);
    for(int i=1; i<=n; i++)
    {
        X.push_back((a*X[i-1] + c)%m);
    }
}
