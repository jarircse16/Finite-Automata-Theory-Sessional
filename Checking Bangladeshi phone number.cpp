#include<bits/stdc++.h>
using namespace std;

vector <string> phone_num;
string buffer;

bool is_valid();

int main()
{
    ifstream f1;
    f1.open("phone-number.txt");
    while(!f1.eof())
    {
        f1>>buffer;
        phone_num.push_back(buffer);
    }
    for(int i=0; i<phone_num.size(); i++)
    {
        cout<<phone_num[i]<<endl;
    }
    cout<<endl<<endl;
    is_valid();
}

bool is_valid()
{
    int flag;
    string first_part, second_part;
    for(int i=0; i<phone_num.size(); i++)
    {
        if(phone_num[i].size() == 14)
        {
            flag = 1;
            first_part = phone_num[i].substr(0,3);
            if(first_part != "+88")
            {
                cout<<phone_num[i]<<" is not a Bangladeshi phone number."<<endl;
                flag=0;
                continue;
            }
            second_part = phone_num[i].substr(3,14);
            for(int j=0; j<second_part.size(); j++)
            {
                if(second_part[j]>=48 && second_part[j]<=57)
                {
                    flag=1;
                }
                else
                {
                    flag=0; break;
                }
            }
        }
        else
        {
            flag=0;
        }
        if(flag)
        {
            cout<<phone_num[i]<<" is a Bangladeshi phone number."<<endl;
        }
        else
        {
            cout<<phone_num[i]<<" is not a Bangladeshi phone number."<<endl;
        }
    }
}
