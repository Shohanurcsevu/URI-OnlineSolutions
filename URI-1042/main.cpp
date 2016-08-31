#include <iostream>

using namespace std;

int main()
{
   int a,b,c,p,q,r,temp;

   while(cin>>a>>b>>c)
   {
       p=a;
       q=b;
       r=c;

       if(p>q){
        int tmp = p;
        p = q;
        q = tmp;
    }
    if(p>r){
        int tmp = p;
        p=r;
        r = tmp;
    }
    if(q>r){
        int tmp = q;
        q=r;
        r=tmp;

   }

   cout<<p<<"\n"<<q<<"\n"<<r<<"\n"<<endl;
   cout<<a<<"\n"<<b<<"\n"<<c<<endl;

}
return 0;
}
