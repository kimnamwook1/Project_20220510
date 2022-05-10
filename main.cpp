#include <iostream>

using namespace std;

int Sumf(int* Array, int Count)
{
	int Sum = 0;

	for (int i = 0; i < Count; ++i)
	{
		Sum += Array[i];
	}
    return Sum;
}

int Arrange(int* Array, int Count)
{
    for (int i = 1; i < Count; i++)
    {
        int j = 0;

        for (j = i-1; j < Count - 1  ; j++)
        {
            if (Array[j] > Array[j + 1])
            {
                int Temp = 0;
                Temp = Array[j + 1];
                Array[j + 1] = Array[j];
                Array[j] = Temp;
            }
            else
            {
                Array[j] = Array[j];
            }
        }
    }
    for (int i = 0; i < Count; i++)
    {
        cout << Array[i] << endl;
    }
    return 0;
}

int main()
{
    int Count = 0;

	cin >> Count;
	
    int* Array = nullptr;
    
    Array = new int[Count];

	for (int i = 0; i < Count; i++)
	{
		cin >> Array[i]; 
	}

    cout << "위 숫자들의 합은 " << Sumf(Array, Count) << endl;
    cout << "               " << endl;
    cout << "위 숫자들을 정렬해봅시다." << endl;
    cout << Arrange(Array, Count) << endl;

    delete[] Array;
    Array = nullptr;

	return 0;
}