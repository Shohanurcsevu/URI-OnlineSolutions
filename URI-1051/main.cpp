#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    float input;
    float increase;
    float tax;


    while(cin>>input)
    {
          if(input<=2000.00)
        {
            cout<<"Isento"<<endl;
        }

        else
        {
              if(input>2000.00  && input<=3000.00)
        {
            increase=input-2000.00;
            tax=increase/100*8.00;
        }
        else if(input>3000.00 && input<=4500.00)
        {
            increase=input-3000.00;
            tax=increase/100.00*18.00+80.00;
        }

        else
        {
            increase=input-4500.00;
            tax=increase/100*28.00+350;
        }


        cout<<fixed<<setprecision(2)<<"R$ "<<tax<<endl;
        }


    }






    return 0;
}
