#include <iostream>
using namespace std;

class insertionsort
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

    void insertionlogic()
    {
        int i, j, key;
        for (i = 1; i < size; i++)
        {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
};

int main()
{
    insertionsort is;
    is.arrayinput();
    cout << "before sorting" << endl;
    is.printarray();
    cout << "after sorting" << endl;
    is.insertionlogic();
    is.printarray();
    return 0;
}
