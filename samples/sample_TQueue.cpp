#include "TQueue.h"
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	try {
		TQueue<char> q(0);
	}
	catch (exception e) { cout << "error"; }
	/*TQueue<char> q(5);
	cout << "������� �������:" << endl << q << endl;
	q.Push('A');
	q.Push('B');
	cout << "�������� � ��� � � �:" << endl << q << endl;
	q.Get();
	cout << "�������� �� ��� �������:" << endl << q << endl;
	q.Push('C');
	q.Push('D');
	q.Push('E');
	cout << "�������� � ��� C, D � E:" << endl << q << endl;
	q.Push('F');
	cout << "�������� � ��� F:" << endl << q << endl;*/

}