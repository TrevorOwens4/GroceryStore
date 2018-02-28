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
        string itemInput;
        string item[LIST_SIZE];

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
                        cout << "What is the item?\n";
                        cin >> itemInput;
                

                if (index<5)
                {
                    item[index]= itemInput;
                        index++;
                }
                else 
                {
                        cout << "You'll need a bigger list!\n";
                }
                }
        }



while (input != 'q' && input != 'Q');

index = 0;
cout << "\n==ITEMS TO BUY==" << endl;

for(index = 0; index < LIST_SIZE; index ++)
{
cout << index + 1 << " " <<  item[index] << endl;
}








return 0;
}
