//Author: Trevor Owens
#include<iostream>
#include<string>
using namespace std;

const int LIST_SIZE = 5;

int main()
{
  string list[LIST_SIZE]; //array of 5 strings
  int numItems = 0;
  char input;
  int index;

index = 0;

do {
cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if (input == 'A' || input == 'a')
  {
  
  if (index<5)
  {
  cout << "What is the item?\n";
  cin >> list[index];
  index++;
}
   }
  else 
  {
  cout << "You'll need a bigger list!\n";
  
}
}
while (input != 'q' && input != 'Q');

  return 0;
}
