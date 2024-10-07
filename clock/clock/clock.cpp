#include <Windows.h>
#include <iostream>
using namespace std;
int main()
{
	ad:
	cout << "|-------------clock app -------------|" << endl;
	cout << "\n|Please pick what you want to do     |" << endl;
	cout << "\n|1)         normal clock             |" << endl;
	cout << "\n|2)         timer                    |" << endl;
	cout << "\n|3)         quit                     |" << endl;
	cout << "\n|------------------------------------|" << endl;
	cout << "choice: ";
	int ch;
	cin >> ch;
	switch (ch) {
	case 1:
		system("cls");
		int h, m, s;
		cout << "Hours :";
		cin >> h;
		cout << "Minutes : ";
		cin >> m;
		cout << "Seconds : ";
		cin >> s;
		while (1) {
			system("cls");
			if (s > 59) {
				m++;
				s = 0;
			}
			if (m > 59) {
				h++;
				m = 0;
			}
			if (h > 23) {
				h = 0;
			}
			cout << h << ":" << m << ":" << s << endl;
			s++;
			Sleep(900);
		}
		break;

	case 2:
		system("cls");
		int m2, s2;
		cout << "minutes: ";
		cin >> m2;
		cout << "Seconds: ";
		cin >> s2;
		while (s2 != 0 || m2 != 0) {
			system("cls");
			cout << m2 << ":" << s2;
			
			if (s2 == 0) {
				m2--;
				s2 = 60;
			}
			s2--;
			Sleep(900);
		}
		system("cls");
		cout << "TIME OUT " << endl;
		goto ad;
		break;

	case 3: 
		exit(0);
		break;

	default : 
		system("cls");
		cout << "wrong number, choice from the list please : " << endl << endl;
		goto ad;
		break;
	}
	
	system("pause");
	return 0;
}