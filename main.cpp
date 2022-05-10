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
            if (Array[j] < Array[j + 1])
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
	
	int* Array = new int[Count];

	for (int i = 0; i < Count; i++)
	{
		cin >> Array[i]; 
	}

    cout << Sumf(Array, Count) << endl;
    cout <<  "               " << endl;
    cout << "               " << endl;
    cout << "               " << endl;
    cout << "               " << endl;
    cout << Arrange(Array, Count) << endl;

	

	return 0;
}