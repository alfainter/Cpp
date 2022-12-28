//3
#include <iostream> 
#include <ctime> 
#include <cstdlib> 
using namespace std;
int main() 
{   
srand( time(NULL));
const int size = 5; 
int array[size]; 
int i, min, max, min_index, max_index, temp; 
for ( i = 0; i < size; i++) 
array[i] = rand() % 100; 
cout << "Input array: " <<endl;
for ( i = 0; i < size; i++) 
cout << array[i] << " "; 
cout << endl; 
min = array[0];
max = array[0];
min_index = 0; 
max_index = 0;
for ( i = 1; i < size; i++)  
{
if(max < array[i]) 
{ 
max = array[i]; 
max_index = i; 
} 
if(min > array[i]) 
{ 
 min = array[i]; 
min_index = i; 
}  
}
temp = array[min_index]; 
array[min_index] = array[max_index]; 
array[max_index] = temp; 
cout << "Output array:"<<endl;
for ( i = 0; i < size; ++i) 
cout << array[i] << " "; 
cout <<endl;
}
//4
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(void) {
    
    const int size = 12;
    int m[size] = {3,-6,-9,69,3,75,9,10,11,-10,18,-4};
    
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
    
    int input;
    cout << "enter a number: ";
    cin >> input;

    for (int i = 0; i < size; i++)
    {
        if (m[i] > input)
        {
            cout << m[i] << " ";
        }
    } 
}
//5
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(void) {
    
    const int size = 12;
    int m[size] = {7,9,-8,28,3,17,-8,102,14,-12,92,9};
    int max = m[0];
    int k= 0;
    
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 12; i++)
    {
        if (m[i] > max) 
        {
            k = max; max = m[i]; 
        }
        
        else if (m[i] > k) 
        {
            k = m[i]; 
        }
    }
    
    cout <<  k;  
}
//6
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(void) {
    
    const int size = 12;
    int m[size] = {7,-2,-6,29,3,7,0,1,14,-1,9,4};
    bool nul = false;

    for (int i = 0; i < 12; i++)
    {
        if (m[i] == 0) 
        {
            cout << "zero is at number: " << i+1; nul = true;
        }
    }

    if (!nul) 
    {
        cout << "has no zeros" << endl;
    }
}
