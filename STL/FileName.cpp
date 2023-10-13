#include <iostream>
#include <string>
#include <map>

using namespace std;

void Menu() {
	cout << "1. Add elem to dictionary" << endl;
	cout << "2. Delete elem from dictionary" << endl;
	cout << "3. Rewrite word" << endl;
	cout << "4. Search" << endl;
	cout << "5. Exit" << endl;
	cout << "Enter n: ";
}

//typedef pair<int, string> myPair;
int main()
{
	//multiset<int> arr{ 1,3,2,7,9 };

	//arr.insert(6);
	//arr.insert(7);
	//arr.insert(10);
	//arr.insert(8);
	//arr.insert(9);
	//map<int, string> arr;
	//arr.insert(make_pair(1, "Hello"));
	//arr.insert(pair<int, string>(3, "World"));
	//arr.insert(myPair(2, "Forest"));
	//for (auto it = arr.begin(); it != arr.end(); it++)
	//{
	//	cout << it->first << "-" << it->second << endl;;
	//}

	//map<int , string> dictionary;
	//int choice;


    map<string, string> dictionary;
    string word, translate;
    int choice;

    while (true) 
    {
        Menu();
        cin >> choice;
        switch (choice) 
        {
        case 1:
            cout << "Enter word: ";
            cin >> word;
            cout << "Enter translation: ";
            cin >> translate;
            dictionary[translate] = word;
            cout << "Word: " << word << " Translation: " << translate << endl;
            break;
        case 2:
            cout << "Enter word to delete: ";
            cin >> translate;
            if (dictionary.find(translate) != dictionary.end()) 
            {
                dictionary.erase(translate);
                cout << "Word deleted!" << endl;
            }
            else 
            {
                cout << "Not found!" << endl;
            }
            break;
        case 3:
            cout << "Enter word to rewrite: ";
            cin >> translate;
            if (dictionary.find(translate) != dictionary.end())
            {
                cout << "Enter new word: ";
                cin >> word;
                dictionary[translate] = word;
            }
            else 
            {
                cout << "Not found!" << endl;
            }
            break;
        case 4:
            cout << "Enter word to search: ";
            cin >> translate;
            if (dictionary.find(translate) != dictionary.end())
            {
                cout << "Translation: " << dictionary[translate] << endl;
            }
            else 
            {
                cout << "Not found!" << endl;
            }
            break;
        case 5:
            return 0;
        default:
            cout << "Error!" << endl;
        }
    }
}