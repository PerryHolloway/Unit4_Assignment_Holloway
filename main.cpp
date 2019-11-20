//Perry Holloway
//Dr.T at TCC Trinty River
//Fundamental Comp II
//November 6,2019
#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

void gradesVector(vector<double> &vec,int size)
{
  double input=0.0;
 for(int i=0;i<size;i++)
 {
   cout<<"Please enter " << (i +1) <<" "<< size<<": ";
   cin >> input;
  vec.push_back(input);
 }
}


int main() {
  vector<double> grades;
  //information before averaging
  //input from user
  gradesVector(grades,10);
 
  double average = accumulate( grades.begin(), grades.end(), 0.0/
  grades.size());
  cout << "The average is" <<" " << average << endl;


  sort(grades.begin(), grades.end());
  reverse(grades.begin(), grades.end());
  for (double d : grades) {
    cout << d << endl;
}

return 0;
}
 // I learned  how use  a vector to average out and sort a set numbefr of grades.
 // 