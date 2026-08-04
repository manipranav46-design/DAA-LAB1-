#include <iostream>
using namespace std;

class quicksort
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

    int partition(int low, int high)
    {
        int pivot = arr[high];
        int i = low - 1;
        int temp;

        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        return i + 1;
    }

    void quicklogic(int low, int high)
    {
        if (low < high)
        {
            int pi = partition(low, high);
            quicklogic(low, pi - 1);
            quicklogic(pi + 1, high);
        }
    }
};

int main()
{
    quicksort qs;
    qs.arrayinput();
    cout << "before sorting" << endl;
    qs.printarray();
    cout << "after sorting" << endl;
    qs.quicklogic(0, qs.size - 1);
    qs.printarray();
    return 0;
}
