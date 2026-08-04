#include <iostream>
using namespace std;

class mergesort
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

    void merge(int low, int mid, int high)
    {
        int temp[100];
        int i = low;
        int j = mid + 1;
        int k = low;

        while (i <= mid && j <= high)
        {
            if (arr[i] <= arr[j])
            {
                temp[k] = arr[i];
                i++;
            }
            else
            {
                temp[k] = arr[j];
                j++;
            }
            k++;
        }

        while (i <= mid)
        {
            temp[k] = arr[i];
            i++;
            k++;
        }

        while (j <= high)
        {
            temp[k] = arr[j];
            j++;
            k++;
        }

        for (i = low; i <= high; i++)
        {
            arr[i] = temp[i];
        }
    }

    void mergelogic(int low, int high)
    {
        if (low < high)
        {
            int mid = (low + high) / 2;
            mergelogic(low, mid);
            mergelogic(mid + 1, high);
            merge(low, mid, high);
        }
    }
};

int main()
{
    mergesort ms;
    ms.arrayinput();
    cout << "before sorting" << endl;
    ms.printarray();
    cout << "after sorting" << endl;
    ms.mergelogic(0, ms.size - 1);
    ms.printarray();
    return 0;
}
