#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	int sayilar[10];
	cout << "Please enter the numbers:" << endl;
	cin >> sayilar[0] >> sayilar[1] >> sayilar[2] >> sayilar[3] >> sayilar[4] >> sayilar[5] >> sayilar[6] >> sayilar[7] >> sayilar[8] >> sayilar[9];
	cout << endl;
	cout << "===================" << endl;
	for(int j=0;j<10;j++)
	{	
		for (int i = j; i < 10; i++)
		{
				if (sayilar[j] > sayilar[i])
				{
				int temp = sayilar[j];
				sayilar[j] = sayilar[i];
				sayilar[i] = temp;

				}
		}
	}
	cout << "the numbers inputed be like:" << endl<< sayilar[0] << endl << sayilar[1] << endl << sayilar[2] << endl << sayilar[3] << endl << sayilar[4] << endl << sayilar[5] << endl << sayilar[6] << endl << sayilar[7] << endl << sayilar[8] << endl << sayilar[9] << endl;
}