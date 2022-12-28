//1
#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int main()
{
	int a[4][3];
	int k = 0;
	int min = 1;
	int max = 10;
	srand(time(NULL));
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 3; ++j) {
			a[i][j] = min + rand() % (max - min + 1);
		}
	}
	for (int i = 0; i < 4; ++i) {
		k = 0;
		for (int j = 0; j < 3; ++j) {
			if (a[i][j] % 2 == 0)
				k++;
		}
		cout << "for " << i << " k = " << k << endl;
	}
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}
//2
   #include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() 
{
    int m=6;
    int n=4;
    int parne[n];
    int arr[m][n];
    
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        parne[i] = 0;
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]= rand()%50;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (arr[i][j] == 0){}
            else if(arr[i][j]%2==0)
            {
                parne[j]++;
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        cout << j+1 << " Row has " << parne[j] << " even elements" << endl;
    }
}
//3
  #include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 5;
    int n = 7;
    int arr[m][n];
    
    srand(time(NULL));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            arr[i][j] = rand() % 50;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        cout << "sum of row number " << i+1 << " equals " << sum << endl;
    }
}
//4
#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() 
{
    int m=4;
    int n=6;
    int sum[n];
    int arr[m][n];
    
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        sum[i] = 0;
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]= rand()%50;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[j] += arr[i][j];
        }
    }
    for(int j=0;j<n;j++)
    {
        cout << "sum of column number " << j+1 << " equals " << sum[j] << endl;
    }
}
//5
   #include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 3;
    int n = 4;
    int arr[m][n];
    srand(time(NULL));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            arr[i][j] = rand() % 50;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int max = arr[0][0];
    int maxnum = 0;
    int num = 0;
    
    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            num++;
            if (arr[i][j] > max) 
            {
                max = arr[i][j]; maxnum = num; 
            }
        }
    }
    cout << "Closest number: " << max << endl;
    cout << "Number  of element: " << maxnum << endl;
}
//6 
#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 4;
    int n = 7;
    int arr[m][n];
    
    
    
    srand(time(NULL));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            arr[i][j] = rand() % 50;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int min = arr[0][0];
    int minnum = 0;
    int num = 0;
    
    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            num++;
            if (arr[i][j] < min) 
            {
                min = arr[i][j]; minnum = num; 
            }
        }
    }
    cout << "Smallest number: " << min << endl;
    cout << "Number of element: " << minnum << endl;
}   
//15
   #include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 3;
    int n = 3;
    int arr[m][n];
    
    srand(time(NULL));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            arr[i][j] = rand() % 50;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int livDiagnum = 2;
    int pravDiagnum = 0;
    int livDiagSum = 0;
    int pravDiagSum = 0; 
    
    for (int i = 0; i < 3; i++)
    {
        livDiagSum += arr[livDiagnum][i];
        pravDiagSum += arr[pravDiagnum][i];

        livDiagnum--;
        pravDiagnum++;
    }
    cout << "Sum of left diagonal" << livDiagSum << endl;
    cout << "Sum os right diagonal " << pravDiagSum << endl;
}
