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
	cout << "Создали очередь:" << endl << q << endl;
	q.Push('A');
	q.Push('B');
	cout << "Положили в нее А и В:" << endl << q << endl;
	q.Get();
	cout << "Вытащили из нее элемент:" << endl << q << endl;
	q.Push('C');
	q.Push('D');
	q.Push('E');
	cout << "Положили в нее C, D и E:" << endl << q << endl;
	q.Push('F');
	cout << "Положили в нее F:" << endl << q << endl;*/

}