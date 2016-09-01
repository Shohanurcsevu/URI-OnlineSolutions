#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
   double salary;

    while(cin>>salary)
    {
        if(salary<=400)
        {
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary*0.15 +salary<<endl;
            cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<salary*0.15<<endl;
            cout<<"Em percentual: 15 %"<<endl;
        }
        else if(salary>400.00 && salary<=800)
        {
          cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary*0.12 +salary<<endl;
            cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<salary*0.12<<endl;
            cout<<"Em percentual: 12 %"<<endl;
        }
         else if(salary>800.00 && salary<=1200)
        {
          cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary*0.10 +salary<<endl;
            cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<salary*0.10<<endl;
            cout<<"Em percentual: 10 %"<<endl;
        }
        else if(salary>1200.00 && salary<=2000)
        {
          cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary*0.07 +salary<<endl;
            cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<salary*0.07<<endl;
            cout<<"Em percentual: 7 %"<<endl;
        }
         else if(salary>2.00)
        {
          cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary*0.04 +salary<<endl;
            cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<salary*0.04<<endl;
            cout<<"Em percentual: 4 %"<<endl;
        }

    }
    return 0;
}
