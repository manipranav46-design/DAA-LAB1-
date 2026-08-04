#include <iostream>
using namespace std;

class selectionsort
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

    void selectionlogic()
    {
        int i, j, minIndex, temp;
        for (i = 0; i < size - 1; i++)
        {
            minIndex = i;
            for (j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
};

int main()
{
    selectionsort ss;
    ss.arrayinput();
    cout << "before sorting" << endl;
    ss.printarray();
    cout << "after sorting" << endl;
    ss.selectionlogic();
    ss.printarray();
    return 0;
}
