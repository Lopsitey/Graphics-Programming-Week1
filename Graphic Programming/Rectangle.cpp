#include "Rectangle.h"

int main() 
{
	int width;
	int height;
	int totalSideLen = 0;
	vector<int> numArr;
	/*
	InputRectangle(width, height, totalSideLen);
	OutputRectangleArea(width, height);
	OutputRectanglePerimeter(totalSideLen);
	*/
	//InputInts(numArr);
	Menu();
}

void InputRectangle(int& width, int& height, int& totalSideLen)
{
	int sideNum;
	cout << "Please enter the rectangle width: ";
	cin >> width;
	cout << endl;
	cout << "Please enter the rectangle height: ";
	cin >> height;
	cout << endl;
	cout << "Please enter the number of sides the rectangle has: ";
	cin >> sideNum;
	cout << endl;
	for (int i = 0; i < sideNum; ++i) 
	{
		int len;
		cout << "Please input the length of side " << i + 1 << endl;
		cin >> len;
		totalSideLen += len;
	}

}

void OutputRectangleArea(const int width, const int height) 
{
	cout << "The area of the rectangle is: " << width * height << endl;
}

void OutputRectanglePerimeter(const int totalSideLen) 
{
	cout << "The perimeter of the rectangle is: " << totalSideLen << endl;
}

void InputInts(vector<int> numArr)
{
	int num;
	cout << "Please input ten integers" << endl;
	for (int i = 0; i < 10; ++i) 
	{
		cout << "Please input a number: ";
		cin >> num;
		cout << endl;
		numArr.push_back(num);
	}
	OutputHighest(numArr);
}

void OutputHighest(vector<int> numArr)
{
	int tempNumber;
	for (int k = 0; k < numArr.size(); ++k)//outer loop
	{
		bool swapped = false;
		for (int i = 0; i < numArr.size(); ++i)//bubble sort
		{
			if (i < numArr.size() - 1 && numArr[i + 1] < numArr[i])//while i is at most equal to 8 (i < array length (10) - 1)
			{
				swapped = true;
				tempNumber = numArr[i + 1];//saves value on the right
				numArr[i + 1] = numArr[i];//swaps right with left
				numArr[i] = tempNumber;//puts the old value of the right into the left
			}
		}
		if (!swapped)//if no swaps occured then the array is sorted
		{
			break;
		}
	}
	int highestNumber = numArr[9];
	cout << "The highest number is: " << highestNumber << endl;
}

void Menu() 
{
	int choice;
	do
	{
		cout << "Please choose an option 1. Happy 2. Sad 3. Rainbow 4. Exit" << endl;//done once
		cin >> choice;
	} while (choice < 1 || choice > 4);
	switch (choice) 
	{
		case 1:
			Happy();
			break;
		case 2:
			Sad();
			break;
		case 3:
			Rainbow();
			break;
		case 4:
			exit;
			break;//never run
	}
}

void Happy() 
{
	cout << "You're doing great, keep it up!" << endl;
}

void Sad() 
{
	cout << "Cheer up!" << endl;
}

void Rainbow()
{
	cout << "#PrideMonth!" << endl;
}