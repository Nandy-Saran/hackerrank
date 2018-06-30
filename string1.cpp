#include <iostream>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,T;
    void Even(string str1);
    void Odd(string str1);
    cin>>T;
    string *s=new string[T];
    for(i=0;i<T;i++)
    {
        cin>>s[i];
        
    }
    for(i=0;i<T;i++)
    {
    Even(s[i]);
        cout<<" ";
        Odd(s[i]); cout<<endl;
    }
     return 0;
}

    void Even(string str)
    {
        int len,i;
        for(len=0;str[len]!='\0';len++);    
        for(i=0;i<len;i++)
        {
          if((i%2==0)||(i==0))
          {
            cout<<str[i];  
          }
           
        }
    }
    void Odd(string str)
    {
        int len,i;
        for(len=0;str[len]!='\0';len++);    
        for(i=0;i<len;i++)
        {
          if(i%2!=0)
          {
            cout<<str[i];  
          }
           
        }
    }
   
