#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isprime(int n)
{
    if (n > 1)
    {
        if (n == 2)
        {
            return true;
        }
        if (n % 2 != 0)
        {
            for (int i = 3; i <= sqrt(n); i++)
            {
                if (n % i != 0)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

void findPrimes(const int arr[], size_t size, std::vector<int> &primes)
{
    for (int i = 0; i < size; i++)
    {
        if (isprime(arr[i]))
        {
            primes.push_back(arr[i]);
        }
    }
}

int main()
{
    int numbers[] {4, 7, 12, 3, 9, 17, 29};
    
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    vector<int> primes;

    findPrimes(numbers, size, primes);

    if (primes.empty())
    {
        cout << "No prime numbers found in the array.";
    }
    else
    {
        cout << "The prime numbers in the array are:";
        for (int prime : primes)
        {
            cout << " " << prime;
        }
        cout << endl;
    }
    return 0;
}
