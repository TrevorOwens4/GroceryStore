//Author: Trevor Owens
#include<iostream>
#include<vector>
using namespace std;


int main()
{
        char input;
        string items;
        vector <string> list;
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
                        cout << "What is the item?\n";
                        cin >> items;
                        list.push_back(items);
                }


        }

        while (input != 'q' && input != 'Q');
        index = 0;
        if (list.empty() == false)
        {
                cout << "==ITEMS TO BUY==" << endl;
                for(index = 0; index < list.size(); index ++)
                {             
                        cout << index + 1 << " " << list[index] << endl;
                }
        }
        else 
        {
                cout << "No items to buy!" << endl;
        }
        return 0;
}
