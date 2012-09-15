#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void open_file(const string &file)
{
  vector<string> conent;
  cout<<"input conent:"<<endl;
  string sval;
  while(cin>>sval)
    conent.push_back(sval);
  vector<string>::iterator itr=conent.begin();
  ofstream out(file.c_str(),ofstream::out|ofstream::app);
  for(;itr!=conent.end();itr++)
    out<<*itr<<" "<<flush;
  out.close();
  out.clear();
}
int main()
{
  open_file("hello");
  return 0;
}
