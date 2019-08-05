/*------------------------------------------------------------------------------
* Module Name      :
* Description      :  使用递归调用寻找字符串中的连续段。
* Revision History :
* Date          Author        Version        Notes
2019/8/5         bdx                         创建
------------------------------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

//vector<char> str;
string str;

int n,m,k;
int isLian(int a,int N)
{
    if(a == N-1)
    {
        return 0;
    }
    if(str.at(a+1)-str.at(a)  == 1)
    {
        return isLian(a+1,N)+1;
    }else{
        return 0;
    }
}

int main()
{
    cin >> n;
    for(int i=0;i<n;++i)
    {
        str.clear();
        str.resize(0);

        cin >> str;
        m=str.size();
        k=0;
        for(int j=0;j<m;)
        {
            k=isLian(j,m);
            if(k>=3)
            {
                cout << str.at(j)<<"-"<<str.at(j+k);
            }else{
                for(int z=0;z<k+1;++z)
                {
                     cout << str.at(j+z);
                }
            }
            j=j+k+1;
        }
        cout <<endl;
    }
}
