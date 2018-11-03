#include<iostream>
#include<list>
#include <algorithm>
using namespace std;
int zhiyinshumu(int m)
{
    list<int> yinzi;int t=m;
    for(int i=2;t>1&&m!=i;i++)
    {
        if(t%i==0)
        {
            yinzi.push_back(i);
            t=t/i;
            i=1;
        }
    }
    //for(list<int>::iterator ii=yinzi.begin();ii!=yinzi.end();ii++)cout<<*ii<<" ";
    yinzi.unique();
    if(yinzi.empty())return 0;
    return yinzi.size();
}
template<class T>
class judge
{
    public:
bool operator()(T m,T n){
    if(zhiyinshumu(m)==zhiyinshumu(n))return m>n;
    else return (zhiyinshumu(m)>zhiyinshumu(n));
}
};
int main()
{
int t;
cin>>t;list<int>a;
while(t--)
{
    int temp;
    for(int i=0;i<10;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    list<int>::iterator it;
    a.sort(judge<int>());
cout<<a.front()<<" "<<a.back()<<endl;
a.pop_front();a.pop_back();
//for(list<int>::iterator ii=a.begin();ii!=a.end();ii++)cout<<*ii<<" ";
}
cout<<a.size();
return 0;
}
