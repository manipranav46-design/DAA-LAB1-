#include <iostream>
using namespace std;

class bubblesort
{
public:
    int size;
    int arr[100];
    int i;

    void arrayinput()
    {
        cout << "enter the size of array" << endl;
        cin >> size;
        cout << "enter the array elements" << endl;
        for (i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    void printarray()
    {
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void bubblelogic()
    {
        int i, j, temp;
        for (i = 0; i < size - 1; i++)
        {
            for (j = 0; j < size - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};

int main()
{
    bubblesort bs;
    bs.arrayinput();
    cout << "before sorting" << endl;
    bs.printarray();
    cout << "after sorting" << endl;
    bs.bubblelogic();
    bs.printarray();
    return 0;
}
