#include <iostream>
#include <deque>
using namespace std;


int main()
{
	deque<int> arr{ 2, 5, 1, 4, 3 };
	//for (int i = 0; i < arr.size(); i++)
	//{
	//	cout << arr[i] << " ";
	//}
	arr.push_back(7);
	arr.push_back(6);
	arr.pop_back();
	arr.insert(arr.begin()+1, 100);
	arr.push_front(200);




	deque<int>::iterator ptr;
	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		cout << *ptr << " ";
	}
	cout << endl;
}