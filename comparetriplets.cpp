#include <iostream>
#include <string>
using namespace std;
int main()
{
    int alice_cp=0,bob_cp=0,i;
    int alice_ip[3],bob_ip[3];
    for(i=0;i<3;i++)
    {
    cin>>alice_ip[i];
    }
    for(i=0;i<3;i++)
    {
    cin>>bob_ip[i];
    }    
    
    for(i=0;i<3;i++)
    {
        
        if(alice_ip[i]>bob_ip[i])
            alice_cp++;
        else if(alice_ip[i]==bob_ip[i])
            continue;
        else
            bob_cp++;
    }
    cout<<alice_cp<<" "<<bob_cp;
return 0;
}
