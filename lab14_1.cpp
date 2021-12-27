#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
 void stat(const double A[] , int x , double B[])
 {
     B[2] = 1 ;
     B[4] = A[1];
     B[5] = A[1];
     for(int i = 0; i < x; i++)
     {
         B[0] += A[i];
         B[1] += pow(A[i],2);
         B[2] *= A[i];
         B[3] += 1/A[i];
         if(B[4] < A[i])
         B[4] = A[i];
         if(B[5] > A[i])
         B[5] = A[i];
     }
    
     B[0] = B[0]/x;
     B[1] = sqrt((B[1]/x)-(pow(B[0],2.0)));
     B[2] = pow(B[2],(1.0/x));
     B[3] = x/B[3];
     
 }