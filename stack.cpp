#include <iostream>
#include <string>
#include <limits>

using namespace std;

void wait()
{
	char flag;
	cout << endl
		 << endl
		 << "Press Any Key to continue..." << endl
		 << endl;
	cin >> flag;
}

class Stack
{
private:
	int arr[5];
	int top;

public:
	Stack()
	{
		top = -1;
		for (int i = 0; i < 5; ++i)
		{
			arr[i] = 0;
		}
	}

	void display()
	{
		for (int i = 4; i >= 0; i--)
		{
			cout << " [" << i + 1 << "] - " << arr[i] << endl;
		};
	}

	void push(int n)
	{
		if (top == 4)
		{
			cout << "Stack Overflow" << endl;
			return;
		}

		top++;
		arr[top] = n;
	}

	int pop()
	{
		if (top == -1)
		{
			cout << "Stack Underflow" << endl;
			return 0;
		}

		int temp = arr[top];
		arr[top] = 0;
		top--;
		return temp;
	}

	void isEmpty()
	{
		if (top == -1)
		{
			cout << "Stack is Empty" << endl;
			return;
		}

		cout << "Stack is not Empty" << endl;
	}

	void isFull()
	{
		if (top == 4)
		{
			cout << "Stack is Full" << endl;
			return;
		}

		cout << "Stack is not Full" << endl;
	}

	void count()
	{
		cout << "Number of items : " << top + 1 << endl;
	}

	int peek(int pos)
	{
		if (top == -1)
		{
			cout << "Stack underflow" << endl;
			return 0;
		}
		else if (top < pos)
		{
			cout << "Position out of Bound" << endl;
			return 0;
		}
		else
		{
			cout << "Target value : " << arr[pos] << endl;
			return arr[pos];
		}
	}

	void reset()
	{
		if (top == -1)
		{
			cout << "Stack underflwo, No need to RESET" << endl;
			return;
		}

		for (int i = 0; i <= top; i++)
		{
			arr[i] = 0;
		}
	}
};

int main()
{
	int option, position, value;
	Stack s1 = Stack();
	do
	{
		system("clear");
		cout << "Welcome to Stack Walkthrough" << endl
			 << endl;

		cout << "1 - Display" << endl;
		cout << "2 - Count" << endl;
		cout << "3 - Full or Not" << endl;
		cout << "4 - Empty or Not" << endl;
		cout << "5 - Push" << endl;
		cout << "6 - Pop" << endl;
		cout << "7 - Reset" << endl;
		cout << "0 - Exit" << endl
			 << endl;

		cout << "Please enter your choice : ";
		cin >> option;
		system("clear");

		switch (option)
		{
		case 0:
			break;
		case 1:
			s1.display();
			wait();
			break;
		case 2:
			s1.count();
			wait();
			break;
		case 3:
			s1.isFull();
			wait();
			break;
		case 4:
			s1.isEmpty();
			wait();
			break;
		case 5:
			cout << "Enter value to push : ";
			cin >> value;
			s1.push(value);
			s1.display();
			wait();
			break;
		case 6:
			s1.pop();
			s1.display();
			wait();
			break;
		case 7:
			s1.reset();
			cout << "Reset complete" << endl;
			wait();
			break;
		default:
			break;
		}

	} while (option != 0);

	return 0;
}