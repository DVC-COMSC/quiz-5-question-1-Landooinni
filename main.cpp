#include    <iostream>
using namespace std;

int main()
{
   int N;
   cin>>N;
   int f;
   char a;
   for (int j = 0; j < N; j++)
   {
      f=41;
      for (size_t i = 0; i < j; i++)
      {
         a=f;
         cout<<a;
      }
   }
   cout<<endl;
   return 0;
}
