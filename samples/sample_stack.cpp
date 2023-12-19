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
		cout << "1)Ввести размер\n" << "2)Положить число\n" << "3)Вытащить число\n"  << "4)Выход\n" << "Внешний вид стека:\n";

		/*cout << "IsFull: " << p->IsFull() << "\n";
		cout << "IsEmpty: " << p->IsEmpty() << "\n";
		cout << "Top index: " << p->GetTop() << "\n";
		cout << "Top el: " << p->TopView() << "\n";
		cout << "Size: " << p->GetSize() << "\n";
		cout << "_size = " << _size << "\n";*/
		
		if (p->IsEmpty())
			cout << "Стек пуст\n";
		else
			cout << p;
			//p->print();


		cout << "Введите номер операции: ";
		cin >> switch_on;

		switch (switch_on)
		{
		case 1:
			system("cls");
			delete p;
			cout << "Введите размер стека: ";
			cin >> _size;
			p = new TStack<int>(_size);
			system("cls");
			break;
		case 2:
			system("cls");
			if (p->IsFull()) {
				cout << "В стеке больше нет места\n";
				
			}
			else {
				cout << "Введите число: ";
				int val;
				cin >> val;
				p->Push(val);
			
				system("cls");
			}
			break;
		case 3:
			if (p->IsEmpty()) {
				system("cls");
				cout << "Стек пуст\n";
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
			cout << "Неверный номер операции\n";
			break;
		}



		
	}





	return 0;
}