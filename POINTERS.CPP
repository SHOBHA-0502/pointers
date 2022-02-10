#include<iostream>
using namespace std;
int main(){
int b = 10;
int *a = &b;  
//////////////////////
int a = 100, b = 200;
int *p = &a, *q = &b;
p = q;
//////////////////////
int a = 7;
int b = 17;
int *c = &b;
*c = 7;
cout  << a << "  " << b << endl;
/////////////////////
 int a = 50;
 int *ptr = &a;
 int *q = ptr;
 (*q)++;
 cout << a  << endl;
 //////////////////////////
int a = 50;
 int *ptr = &a;
 cout << (*ptr)++ << " ";
 cout << a << endl;
 //////////////////
 int *ptr = 0;
int a = 10;
*ptr = a;
 cout << *ptr << endl;
 /////////////
 int a = 7;
int b = 17;
int *c = &b; 
a = *c;
*c = *c + 1;
cout  << a << "  " << b << endl;
/////////////////
float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << “ “ << f << “ “ << p;
////////////////////////
int a = 7;
int *c = &a;
c = c + 1;
cout  << a << "  " << *c << endl;
////////////////////
int a = 7;
int *c = &a;
c = c + 3;
cout  << c << endl;
/////////////////////
double a = 10.54;
double *d = &a;
d = d + 1;
cout  << d << endl;
/////////////////////
int a[5];
int *c;
cout << sizeof(a) << " " << sizeof(c);
////////////////
int a[] = {1, 2, 3, 4};
cout << *(a) << " " << *(a+1);
//////////////////
int a[6] = {1, 2, 3};
cout << a << “ “ << &a;
//////////////////
int a[6] = {1, 2, 3};
cout << (a + 2);
///////////
int a[6] = {1, 2, 3};
int *b = a;
cout << b[2];
/////////////////////
int a[] = {1, 2, 3, 4, 5};
cout << *(a) << " " << *(a + 4);
///////////////
int a[] = {1, 2, 3, 4};
int *p = a++;
cout << *p << endl;
/////////////////
char ch = 'a';
 char* ptr = &ch;
 ch++;
 cout << *ptr << endl;
 /////////////////
 char b[] = "xyz";
char *c = &b[0];
cout << c << endl;
///////////////
char b[] = "xyz";
char *c = &b[0];
c++;
cout << c << endl;
////////////////////
int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}
//////////////////////
#include<iostream>
using namespace std;
int main()
{
  int ***r, **q, *p, i=8;
  p = &i;
  (*p)++;
  q = &p;
  (**q)++;
  r = &q;
  cout<<*p << " " <<**q << " "<<***r;
  return 0;
}
//////////////////////////
#include <iostream>
using namespace std;
void Q(int z)
{
  z += z;
  cout<<z << " ";
}

void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";
}

int main()
{
  int x = 5;
  P(&x);
  cout<<x;
  return 0;
}

/////////////////////////
#include<iostream>
using namespace std;
int main() {
  char st[] = "ABCD";
  for(int i = 0; st[i] != ‘\0’; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  return 0;
}
//////////////////////////

#include <iostream>
using namespace std;
int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1;
  return 0;
}
//////////////////////
#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "geeksquiz";
   char *y = "geeksforgeeks";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   return 0;
}
////////////////////////
#include <iostream>
using namespace std;
int main()
{
  char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '\0';
  cout << arr;
  return 0;
}
//////////////////////////
#include <iostream>
using namespace std;
int main()
{ 
  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 5;
  cout << ptr;
  return 0;
}
////////////////////////////
#include <iostream>
using namespace std;
int main ()
{
  int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }
  return 0;
}
/////////////////////////////
#include <iostream>
using namespace std;
int main()
{
  int arr[] = {4, 5, 6, 7};
  int *p = (arr + 1);
  cout << *arr + 9;
  return 0;
}
//////////////////////////////
void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}
/////////////////////
  int a = 100;
  int *p = &a;
  int **q = &p;
  int b = (**q)++;
  int *r = *q;
  (*r)++;
  cout << a << " " << b << endl;
  ////////////////////
  int a = 100;
int *p = &a;
int **q = &p;
int b = (**q)++ + 4;
cout << a << " " << b << endl;
///////////////////////////////
 


}