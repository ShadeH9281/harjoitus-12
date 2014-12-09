//Made by Toni Pajukanta,Ryhmä IIO14S1

#include <iostream> 
using namespace std;
int main()
{
	int kerrat;
	cout << "Syota kokonaisluku 1-9\n";
	cin >> ws >> kerrat;
	for (int num = 1; num != kerrat+1; num++)
	{
		
		for (int lkm = 1; lkm <= num; lkm++)
		{
			cout << num;

		}
		cout << endl;
	}

}
