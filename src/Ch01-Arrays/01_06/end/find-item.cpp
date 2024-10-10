#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    int mid = size / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    string test[] = {"momo", "mim", "maria"};
    string tem = "masha";
    size_t testsize = sizeof(test)/sizeof(test[0]);
    size_t result = findItem(test, testsize, tem);

    if (result == -1){
        cout << "item not found";
    }
    else{
        cout << "found at " << result << "\n";
    }
    return 0;
}
