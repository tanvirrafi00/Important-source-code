#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void Login()
{
    string username,password,un,pass;
    cout<<"enter user name:"<<endl;
    cin>>username;
    cout<<"enter password:"<<endl;
    cin>>password;
    ifstream read(username+".txt");
    read>>un>>pass;
    if(username==un&&password==pass)
    {
        cout<<"login succesfull"<<endl;
    }
    else
    {
        cout<<"incorrect name or password"<<endl;
    }

}
int main()
{
    int choice;
    string username,password;
    cout<<"enter your choice"<<endl;
    cout<<"1.Register"<<endl<<"2.Login"<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter a user name:"<<endl;
        cin>>username;
        cout<<"enter a password:"<<endl;
        cin>>password;
        ofstream write(username+".txt");
        write<<username<<endl;
        write<<password<<endl;

        cout<<endl;
        main();

    }

    else if(choice==2)
    {
        Login();
        cout<<endl;
        main();
    }

}
