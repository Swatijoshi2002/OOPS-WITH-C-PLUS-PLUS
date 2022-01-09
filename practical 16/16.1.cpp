#include<iostream>
using namespace std;
template <typename T1,typename T2,typename T3 >
T3 add(T1 A,T2 B)
{
    T3 ans=A+B;
    return ans;
}
int main()
{
    int ans=add<int,int,int>(3,5);
    cout<<ans<<endl;
   cout<<add<int,float,double>(3,10.5);
    
}
