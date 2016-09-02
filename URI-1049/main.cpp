#include <iostream>
#include<string>

using namespace std;

int main()
{

    string s,b,j;
    while(cin>>s>>b>>j)
    {
        if(s=="vertebrado" && b=="ave" && j=="carnivoro")
        {
            cout<<"aguia"<<endl;
        }
        else if(s=="vertebrado" && b=="ave" && j=="onivoro")
        {
            cout<<"pomba"<<endl;
        }
        else if(s=="vertebrado" && b=="mamifero" && j=="onivoro")
        {
            cout<<"homem"<<endl;
        }
         else if(s=="vertebrado" && b=="mamifero" && j=="herbivoro")
        {
            cout<<"vaca"<<endl;
        }
         else if(s=="invertebrado" && b=="inseto" && j=="hematofago")
        {
            cout<<"pulga"<<endl;
        }
        else if(s=="invertebrado" && b=="inseto" && j=="herbivoro")
        {
            cout<<"lagarta"<<endl;
        }
         else if(s=="invertebrado" && b=="anelideo" && j=="hematofago")
        {
            cout<<"sanguessuga"<<endl;
        }
         else if(s=="invertebrado" && b=="anelideo" && j=="onivoro")
        {
            cout<<"minhoca"<<endl;
        }


    }
    return 0;

}
