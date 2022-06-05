//HaekalNajibAli
//G1A021052
//InformatikaB

#include <iostream>
#define MAX 15
using namespace std;

struct Queue {
	int head; 
	int tail; 
	int data[MAX];
}
Q;

bool isFull() {
	return Q.tail == MAX;
}

bool isEmpty() {
	return Q.tail == 0;
}

void printQueue() {
	if (isEmpty()) {
    cout << "Empty Queue"<<endl;
	}
	else {
		cout << "QUEUE : ";
		for (int i = Q.head; i < Q.tail; i++)
			cout << Q.data[i] << ((Q.tail-1 == i) ? "" : ",");
		cout << endl;
  }
}

void enqueue() {
	if (isFull())
	{
		cout << "Queue Full!"<<endl;
	}
	else {
		int data;
		cout << "Input Data : ";cin >> data;
		Q.data[Q.tail] = data;
		Q.tail++;
		cout << "Data Is Added\n";
		printQueue();
	}
}

void dequeue() {
	if (isEmpty())
	{
		cout << "Queue Is Empty"<<endl;
	}
	else{
		cout << "Gets Data \"" << Q.data[Q.head] << "\"..." << endl;
		for (int i = Q.head; i < Q.tail; i++)
			Q.data[i] = Q.data[i + 1];
		Q.tail--;
		printQueue();
	}
}

int main() {
	int choose;
	do
	{
		cout << "-------------QUEUE--------------\n"
			<< "---------------------------------\n"
			<< " 1. Add Data To Queue \n"
			<< " 2. Get Data From Queue \n"
			<< " 3. EXIT \n\n"
			<< "----------------------------------\n"
			<< "Input Option : "; cin >> choose;
		switch (choose)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		default:
			cout << "Option Is Not Available";
			break;
		}
	} while (choose !=3);
	return 0;
}