#include<iostream>
#include<string.h>
#include<bits\stdc++.h>
using namespace std;
const int N=100;
char msg[N];
int key=3;
//for decryption
void decryption()
{
char ch;
for(int i = 0; msg[i] != '\0'; ++i)
{
ch = msg[i];
//decrypt for lowercase letter
if(ch >= 'a' && ch <= 'z')
{
ch = ch - key;
if(ch < 'a')
{
ch = ch + 'z' - 'a' + 1;
}
msg[i] = ch;
}
//decrypt for uppercase letter
else if(ch >= 'A' && ch <= 'Z')
{
ch = ch - key;
if(ch < 'A')
{
ch = ch + 'Z' - 'A' + 1;
}
msg[i] = ch;
}
}
cout << "Decrypted message: " << msg;
}
//for encryption
void encryption()
{
char ch;
for(int i = 0; msg[i] != '\0'; ++i)
{
ch = msg[i];
//encrypt for lowercase letter
if(ch >= 'a' && ch <= 'z')
{
ch = ch + key;
if (ch > 'z')
{
ch = ch - 'z' + 'a' - 1;
}
msg[i] = ch;
}
//encrypt for uppercase letter
else if (ch >= 'A' && ch <= 'Z')
{
ch = ch + key;
if (ch > 'Z')
{
ch = ch - 'Z' + 'A' - 1;
}
msg[i] = ch;
}
}
printf("Encrypted message: %s", msg);
}
int main()
{
int choice;
//cin.getline(msg,100); //take the message as input
cout<<"Enter a Massage :- ";
cin>>msg;
//cout << "Enter key: ";
//cin >> key; //take the key as input
cout<<"Enter your choice \n1. Encryption \n2. Decryption \n3. Exit\n";

while(1){
        cin>>choice;
    switch(choice)
{
case 1:
encryption();
break;
case 2:
decryption();
break;
case 3:
exit(0);
default:
cout<<"please select right one";
break;
}
}
}
