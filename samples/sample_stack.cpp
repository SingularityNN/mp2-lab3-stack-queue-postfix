#include "stack.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Rus");
	bool flag = 1;
	int switch_on;
	size_t _size = 0;
	
	TStack<int>* p = new TStack<int>(1);

	while (flag) {
		cout << "___________________________________________________________________________________\n";
		cout << "1)������ ������\n" << "2)�������� �����\n" << "3)�������� �����\n"  << "4)�����\n" << "������� ��� �����:\n";

		/*cout << "IsFull: " << p->IsFull() << "\n";
		cout << "IsEmpty: " << p->IsEmpty() << "\n";
		cout << "Top index: " << p->GetTop() << "\n";
		cout << "Top el: " << p->TopView() << "\n";
		cout << "Size: " << p->GetSize() << "\n";
		cout << "_size = " << _size << "\n";*/
		
		if (p->IsEmpty())
			cout << "���� ����\n";
		else
			cout << p;
			//p->print();


		cout << "������� ����� ��������: ";
		cin >> switch_on;

		switch (switch_on)
		{
		case 1:
			system("cls");
			delete p;
			cout << "������� ������ �����: ";
			cin >> _size;
			p = new TStack<int>(_size);
			system("cls");
			break;
		case 2:
			system("cls");
			if (p->IsFull()) {
				cout << "� ����� ������ ��� �����\n";
				
			}
			else {
				cout << "������� �����: ";
				int val;
				cin >> val;
				p->Push(val);
			
				system("cls");
			}
			break;
		case 3:
			if (p->IsEmpty()) {
				system("cls");
				cout << "���� ����\n";
			}
				
			else {
				p->Pop();
				system("cls");
			}
			break;
		case 4:
			flag = 0;
			break;
		default:
			system("cls");
			cout << "�������� ����� ��������\n";
			break;
		}



		
	}





	return 0;
}