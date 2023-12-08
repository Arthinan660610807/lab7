#include <iostream>
using namespace std;

//Dialog of the first example is given below.
string name;
string mov;
string day;
string z;
int x;
int main(){

cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<"\n";
getline(cin,name);
cout << "?????: ";
cout << "Fahsai: Wow!!! " <<name << " is a really cool name.\n";
cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
cout << name <<": ";
cin >> x;
cin.ignore();
x /= 10000000;
x = x - 12;
cout <<"Fahsai: I think you may be GEAR "<<x <<". I have a free movie ticket for you.\n";
cout << "Fahsai: Let's go to the cinema together!!!\n";
cout << "Fahsai: What movie do you want to watch?\n";
cout << name << ": ";
getline(cin,mov);
cout << "Fahsai: So....which day are you free to go with me?\n";
cout << name << ": ";
getline(cin,day);
cout << "Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<< mov <<" with you.\n";
cout << name<<": ";
getline(cin,z);
cout <<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";
}