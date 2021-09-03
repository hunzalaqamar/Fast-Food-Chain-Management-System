
#include "FFCP.h"

Queue::Queue()
{
	rear = front = -1;

	capacity = 5;

	for (int i = 0; i < capacity; i++)
	{
		customers[i] = "";
	}
}
void Queue::setFront(int nF)
{
	front = nF;
}
void Queue::setRear(int nR)
{
	rear = nR;
}
int Queue::getCapacity()
{
	return capacity;
}
int Queue::getFront()
{
	return front;
}
int Queue::getRear()
{
	return rear;
}
Franchise::Franchise()
{
	
}
void Queue::addCustomer(string c)
{
	if (rear == capacity - 1)
	{
		return;
	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}

		rear++;

		customers[rear] = c;
	}
}
string* Queue::getCustomers()
{
	return customers;
}
void Queue::printCustomers()
{
	int i;

	cout << "\nCustomers in line : "<<endl;

	for (i = 0; i < capacity; i++)
	{
		cout << i+1 << " : " << customers[i]<<endl;
	}
}
void Queue::removeCustomer()
{
	rear = front = -1;

	capacity = 5;

	for (int i = 0; i < capacity; i++)
	{
		customers[i] = "";
	}
}
void Franchise::fillCountersF1()
{
	Counter1.addCustomer("Ali");

	Counter1.addCustomer("Amjad");

	Counter1.addCustomer("Shaharyar");

	Counter1.addCustomer("Junaid");

	Counter1.addCustomer("Huma");

	Counter2.addCustomer("Wajeeh");

	Counter2.addCustomer("Ameer");

	Counter2.addCustomer("Sohaib");

	Counter2.addCustomer("Amna");

	Counter2.addCustomer("Alisha");

	Counter3.addCustomer("Noman");

	Counter3.addCustomer("Faizan");

	Counter3.addCustomer("Fahad");

	Counter3.addCustomer("Zeeshan");
}
void Franchise::fillCountersF2()
{
	Counter1.addCustomer("Ali");

	Counter1.addCustomer("Amjad");

	Counter1.addCustomer("Shaharyar");

	Counter1.addCustomer("Junaid");

	Counter1.addCustomer("Huma");

	Counter2.addCustomer("Wajeeh");

	Counter2.addCustomer("Ameer");

	Counter2.addCustomer("Sohaib");

	Counter2.addCustomer("Amna");

	Counter3.addCustomer("Alisha");

	Counter3.addCustomer("Noman");

	Counter3.addCustomer("Faizan");

	Counter3.addCustomer("Fahad");

	Counter3.addCustomer("Zeeshan");
}

void Franchise::fillCountersF3()
{
	Counter1.addCustomer("Ali");

	Counter1.addCustomer("Amjad");

	Counter1.addCustomer("Shaharyar");

	Counter1.addCustomer("Junaid");

	Counter2.addCustomer("Wajeeh");

	Counter2.addCustomer("Ameer");

	Counter2.addCustomer("Sohaib");

	Counter2.addCustomer("Amna");

	Counter2.addCustomer("Alisha");

	Counter3.addCustomer("Noman");

	Counter3.addCustomer("Faizan");

	Counter3.addCustomer("Fahad");

	Counter3.addCustomer("Zeeshan");

	Counter3.addCustomer("Huma");
}

void Franchise::fillCountersF4()
{
	Counter1.addCustomer("Ali");

	Counter1.addCustomer("Amjad");

	Counter1.addCustomer("Shaharyar");

	Counter1.addCustomer("Junaid");

	Counter1.addCustomer("Huma");

	Counter2.addCustomer("Wajeeh");

	Counter2.addCustomer("Ameer");

	Counter2.addCustomer("Sohaib");

	Counter2.addCustomer("Amna");

	Counter2.addCustomer("Alisha");

	Counter3.addCustomer("Noman");

	Counter3.addCustomer("Faizan");

	Counter3.addCustomer("Fahad");

	Counter3.addCustomer("Zeeshan");

	Counter3.addCustomer("Akbar");
}
void Franchise::executeCode()
{
	franchise();

	int choice,choice1,choice2;

	bool flag = false;

	cin >> choice;

	string name;

	while (1)
	{
		switch (choice)
		{
		case 1:
		{
			menu();

			cin >> choice1;

			switch (choice1)
			{
			case 1:
			{
				counterNo();

				cin >> choice2;

				if (choice2 == 1)
				{
					if (flag == false)
					{
						fillCountersF1();

						flag = true;
					}

					if (Counter1.getRear() == Counter1.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter1.printCustomers();

						system("Pause");
					}
					else if (Counter1.getRear() < Counter1.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter1.addCustomer(name);

						Counter1.printCustomers();

						system("Pause");
					}
				}
				else if (choice2 == 2)
				{
					if (flag == false)
					{
						fillCountersF1();

						flag = true;
					}

					if (Counter2.getRear() == Counter2.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter2.printCustomers();

						system("Pause");
					}
					else if (Counter2.getRear() < Counter2.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter2.addCustomer(name);

						Counter2.printCustomers();

						system("Pause");
					}
				}
				else if (choice2 == 3)
				{
					if (flag == false)
					{
						fillCountersF1();

						flag = true;
					}

					if (Counter3.getRear() == Counter3.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter3.printCustomers();

						system("Pause");
					}
					else if (Counter3.getRear() < Counter3.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter3.addCustomer(name);

						Counter3.printCustomers();

						system("Pause");
					}
				}
				break;
			}
			case 2:
			{
				system("CLS");

				cout << "\nPlease Wait System is checking if there is space in any counter ";

				system("Pause");

				if (flag == false)
				{
					fillCountersF1();

					flag = true;
				}

				if (Counter1.getRear() < Counter1.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 1 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter1.addCustomer(name);

					Counter1.printCustomers();

					system("Pause");
				}
				else if (Counter2.getRear() < Counter2.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 2 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter2.addCustomer(name);

					Counter2.printCustomers();

					system("Pause");
				}
				else if (Counter3.getRear() < Counter3.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 3 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter3.addCustomer(name);

					Counter3.printCustomers();

					system("Pause");
				}
				else
				{
					cout << "\nSorry No Counter is empty try again in other franchise" << endl;

					system("Pause");
				}
				break;
			}
			case 3:
			{
				system("CLS");

				Counter1.removeCustomer();
				
				Counter2.removeCustomer();
				
				Counter3.removeCustomer();
				
				executeCode();
				break;
			}
			case 4:
			{
				system("CLS");
				cout << "\nThe Program will now terminate" << endl;
				system("Pause");
				exit(0);
			}
			default:
			{
				cout << "\nInvalid Choice Try Again" << endl;

				system("Pause");
			}
			}
			break;
		}
		case 2:
		{
			menu();

			cin >> choice1;

			switch (choice1)
			{
			case 1:
			{
				counterNo();

				cin >> choice2;

				if (choice2 == 1)
				{
					if (flag == false)
					{
						fillCountersF2();

						flag = true;
					}

					if (Counter1.getRear() == Counter1.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter1.printCustomers();

						system("Pause");
					}
					else if (Counter1.getRear() < Counter1.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter1.addCustomer(name);

						Counter1.printCustomers();

						system("Pause");
					}
				}
				else if (choice2 == 2)
				{
					if (flag == false)
					{
						fillCountersF2();

						flag = true;
					}
					if (Counter2.getRear() == Counter2.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter2.printCustomers();

						system("Pause");
					}
					else if (Counter2.getRear() < Counter2.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter2.addCustomer(name);

						Counter2.printCustomers();

						system("Pause");
					}
				}
				else if (choice2 == 3)
				{
					if (flag == false)
					{
						fillCountersF2();

						flag = true;
					}
					if (Counter3.getRear() == Counter3.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter3.printCustomers();

						system("Pause");
					}
					else if (Counter3.getRear() < Counter3.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter3.addCustomer(name);

						Counter3.printCustomers();

						system("Pause");
					}
				}
				break;
			}
			case 2:
			{
				system("CLS");

				cout << "\nPlease Wait System is checking if there is space in any counter ";

				system("Pause");

				if (flag == false)
				{
					fillCountersF2();

					flag = true;
				}
				if (Counter1.getRear() < Counter1.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 1 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter1.addCustomer(name);

					Counter1.printCustomers();

					system("Pause");
				}
				else if (Counter2.getRear() < Counter2.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 2 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter2.addCustomer(name);

					Counter2.printCustomers();

					system("Pause");
				}
				else if (Counter3.getRear() < Counter3.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 3 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter3.addCustomer(name);

					Counter3.printCustomers();

					system("Pause");
				}
				else
				{
					cout << "\nSorry No Counter is empty try again in other franchise" << endl;

					system("Pause");
				}
				break;
			}
			case 3:
			{
				system("CLS");

				Counter1.removeCustomer();

				Counter2.removeCustomer();

				Counter3.removeCustomer();

				executeCode();

				break;
			}
			case 4:
			{
				system("CLS");
				cout << "\nThe Program will now terminate" << endl;
				system("Pause");
				exit(0);
			}
			default:
			{
				cout << "\nInvalid Choice Try Again" << endl;

				system("Pause");
			}
			}
			break;
		}
		case 3:
		{
			menu();

			cin >> choice1;

			switch (choice1)
			{
			case 1:
			{
				counterNo();

				cin >> choice2;

				if (choice2 == 1)
				{
					if (flag == false)
					{
						fillCountersF3();

						flag = true;
					}
					if (Counter1.getRear() == Counter1.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter1.printCustomers();

						system("Pause");
					}
					else if (Counter1.getRear() < Counter1.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter1.addCustomer(name);

						Counter1.printCustomers();

						system("Pause");
					}
				}
				else if (choice2 == 2)
				{
					if (flag == false)
					{
						fillCountersF3();

						flag = true;
					}

					if (Counter2.getRear() == Counter2.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter2.printCustomers();

						system("Pause");
					}
					else if (Counter2.getRear() < Counter2.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter2.addCustomer(name);

						Counter2.printCustomers();

						system("Pause");
					}
				}
				else if (choice2 == 3)
				{
					if (flag == false)
					{
						fillCountersF3();

						flag = true;
					}

					if (Counter3.getRear() == Counter3.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter3.printCustomers();

						system("Pause");
					}
					else if (Counter3.getRear() < Counter3.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter3.addCustomer(name);

						Counter3.printCustomers();

						system("Pause");
					}
				}
				break;
			}
			case 2:
			{
				system("CLS");

				cout << "\nPlease Wait System is checking if there is space in any counter ";

				system("Pause");

				if (flag == false)
				{
					fillCountersF3();

					flag = true;
				}

				if (Counter1.getRear() < Counter1.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 1 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter1.addCustomer(name);

					Counter1.printCustomers();

					system("Pause");
				}
				else if (Counter2.getRear() < Counter2.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 2 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter2.addCustomer(name);

					Counter2.printCustomers();

					system("Pause");
				}
				else if (Counter3.getRear() < Counter3.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 3 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter3.addCustomer(name);

					Counter3.printCustomers();

					system("Pause");
				}
				else
				{
					cout << "\nSorry No Counter is empty try again in other franchise" << endl;

					system("Pause");
				}
				break;
			}
			case 3:
			{
				system("CLS");

				Counter1.removeCustomer();

				Counter2.removeCustomer();

				Counter3.removeCustomer();

				executeCode();
			}
			case 4:
			{
				system("CLS");
				cout << "\nThe Program will now terminate" << endl;
				system("Pause");
				exit(0);
			}
			default:
			{
				cout << "\nInvalid Choice Try Again" << endl;

				system("Pause");
			}
			}
			break;
		}
		case 4:
		{
			menu();

			cin >> choice1;

			switch (choice1)
			{
			case 1:
			{
				counterNo();

				cin >> choice2;

				if (choice2 == 1)
				{
					if (flag == false)
					{
						fillCountersF4();

						flag = true;
					}

					if (Counter1.getRear() == Counter1.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter1.printCustomers();

						system("Pause");
					}
					else if (Counter1.getRear() < Counter1.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter1.addCustomer(name);

						Counter1.printCustomers();

						system("Pause");
					}
				}
				else if (choice2 == 2)
				{
					if (flag == false)
					{
						fillCountersF4();

						flag = true;
					}

					if (Counter2.getRear() == Counter2.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter2.printCustomers();

						system("Pause");
					}
					else if (Counter2.getRear() < Counter2.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter2.addCustomer(name);

						Counter2.printCustomers();

						system("Pause");
					}
				}
				else if (choice2 == 3)
				{
					if (flag == false)
					{
						fillCountersF4();

						flag = true;
					}

					if (Counter3.getRear() == Counter3.getCapacity() - 1)
					{
						cout << "\nSorry This Counter is Full Please Move to next one or select choice 2 from menu to check all counters at ones" << endl;

						Counter3.printCustomers();

						system("Pause");
					}
					else if (Counter3.getRear() < Counter3.getCapacity() - 1)
					{
						cout << "\nWe Found a space for you in the counter Hop in!!";

						cout << "\nYour Name : ";

						cin >> name;

						Counter3.addCustomer(name);

						Counter3.printCustomers();

						system("Pause");
					}
				}
				break;
			}
			case 2:
			{
				system("CLS");

				cout << "\nPlease Wait System is checking if there is space in any counter ";

				system("Pause");

				if (flag == false)
				{
					fillCountersF4();

					flag = true;
				}

				if (Counter1.getRear() < Counter1.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 1 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter1.addCustomer(name);

					Counter1.printCustomers();

					system("Pause");
				}
				else if (Counter2.getRear() < Counter2.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 2 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter2.addCustomer(name);

					Counter2.printCustomers();

					system("Pause");
				}
				else if (Counter3.getRear() < Counter3.getCapacity() - 1)
				{
					cout << "\nWe Found a space for you in counter 3 Hop in!!";

					cout << "\nYour Name : ";

					cin >> name;

					Counter3.addCustomer(name);

					Counter3.printCustomers();

					system("Pause");
				}
				else
				{
					cout << "\nSorry No Counter is empty try again in other franchise" << endl;

					system("Pause");
				}
				break;
			}
			case 3:
			{
				system("CLS");

				Counter1.removeCustomer();

				Counter2.removeCustomer();

				Counter3.removeCustomer();

				executeCode();
			}
			case 4:
			{
				system("CLS");
				cout << "\nThe Program will now terminate" << endl;
				system("Pause");
				exit(0);
			}
			default:
			{
				cout << "\nInvalid Choice Try Again" << endl;

				system("Pause");
			}
			}
			break;
		}
		case 5:
		{
			system("CLS");
			cout << "\nThe Program will now terminate" << endl;
			system("Pause");
			exit(0);
		}
		default:
		{
			cout << "\nInvalid Choice Try Again" << endl;

			system("Pause");
		}
		}
	}

	
}
void Franchise::menu()
{
	system("CLS");
	cout << "\n\n**************************************************************************************************";
	cout << "\n\n						Welcome To Cloud Fast Food		            ";
	cout << "\n\n**************************************************************************************************";
	cout << "\n\n1:Add Customer ";
	cout << "\n\n2:Check All Counters for space ";
	cout << "\n\n3:Go back to franchise menu ";
	cout << "\n\n4:Exit Program ";
	cout << "\n\nYour Choice : ";
}
void Franchise::franchise()
{
	system("CLS");
	system("COLOR 0B");
	cout << "\n\nThere are 4 franchises open right now which one do you want to enter ?";
	cout << "\n\n1:Franchise 1";
	cout << "\n\n2:Franchise 2 ";
	cout << "\n\n3:Franchise 3 ";
	cout << "\n\n4:Franchise 4 ";
	cout << "\n\n5:Exit Program ";
	cout << "\n\nYour Choice : ";
}
void Franchise::counterNo()
{
	system("CLS");
	cout << "\n\nThere are 3 counters available which one do you want to see for space ?";
	cout << "\n\n1:Counter 1";
	cout << "\n\n2:Counter 2 ";
	cout << "\n\n3:Counter 3 ";
	cout << "\n\n4:Go back to main menu ";
	cout << "\n\nYour Choice : ";
}