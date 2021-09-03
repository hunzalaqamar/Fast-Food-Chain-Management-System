
#include <iostream>

using namespace std;

class Queue
{
private:
	int rear, front,capacity;

	string customers[5];
public:
	Queue();

	void setRear(int);

	void setFront(int);

	int getRear();

	int getFront();

	int getCapacity();

	void addCustomer(string);

	void removeCustomer();

	string* getCustomers();

	void printCustomers();
};
class Franchise
{
private:
	Queue Counter1, Counter2, Counter3;
public:
	Franchise();

	void executeCode();

	void menu();

	void franchise();

	void counterNo();

	void fillCountersF1();

	void fillCountersF2();

	void fillCountersF3();

	void fillCountersF4();

};