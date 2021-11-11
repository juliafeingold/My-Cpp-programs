#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main ()
{
  int token;
  int token2;
  int sum = 0;
  int count = 0;
  double avg = 0;

  ifstream myfile;
  ofstream fout;
  myfile.open("input.txt");
  fout.open("output.txt");
  if (myfile.is_open())
  {
    while ( !myfile.eof() )
    {
      if(count == 5) break;
      myfile >> token >> token2;
      fout << setw(10) << token << setw(10) << token2 << setw(10) << abs(token - token2) << '\n';
      sum = sum + abs(token - token2);
      count++;
    }
  fout << "Sum diff count " << sum << endl;

  avg = sum / count;
  fout << "Average is " << setprecision(2) << avg << endl;

    myfile.close();
    fout.close();
  }
  else cout << "Unable to open file";

  return 0;
}
