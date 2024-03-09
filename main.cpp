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
      f=65;
      for (size_t i = 0; i < (j+1); i++)
      {
         a=f;
         f=f+1;
         cout<<a;
      }
      cout<<"\n";
   }
   cout<<endl;
   return 0;
}
