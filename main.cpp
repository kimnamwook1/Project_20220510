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
void Arrange(int* Array, int Count)
{
    for (int i = 1; i < Count; i++)
    {
        int j = 0;

        for (j = i - 1; j >=0; j--)
        {
            if (Array[j] > Array[i])
            {
                Array[j + 1] = Array[j];
            }
            else
            {
                break;
            }
        }
        Array[j + 1] = Array[i];
    }
    for (int i = 0; i < Count; i++)
    {
        cout << Array[i] << endl;
    }
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

    cout << "�� ���ڵ��� ���� " << Sumf(Array, Count) << endl;
    cout << "                 " << endl;
    cout << "�� ���ڵ��� �����غ��ô�." << endl;

    Arrange(Array, Count);

    delete[] Array;

    Array = nullptr;

    return 0;
}