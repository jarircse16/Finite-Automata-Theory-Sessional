#include<bits/stdc++.h>
using namespace std;

int m=10, a=19765, c=143, n, otp=0;
vector <string> x;

int generate_otp();

int main()
{
    FILE *fout;
    fout = fopen("OTP 2.txt", "w");
    cout<<"How many numbers: ";
    cin>>n;
    cout<<endl;
    generate_otp();
    /*for(int i=1; i<=n; i++)
    {
        fprintf(fout, "%s\n", x[i]);
    }*/
}

int generate_otp()
{
    srand (time(NULL));
    string s1 = "RUET-", s2="", str;
    int temp = rand()%10;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<6; j++)
        {
            temp = ((a*temp + c)%m);
            s2 += to_string(temp);
        }
        str = s1+s2;
        cout<<str<<endl;
        x.push_back(str);
        s2="";
    }
}
