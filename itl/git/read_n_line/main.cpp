#include <iostream>
#include <fstream>
using namespace std;
static const int num_line_def = 3; // default line number is 3
int main ( int argc, char *argv[] ) {
  // num of lines
  int num_line = num_line_def;
  // Open file stream from the filename (the first argument)
  ifstream ifs(argv[1], ios::in);
  // read first [num_line] lines of the file
  for ( int i=0; i<num_line; ++i ){
    if ( !ifs ) { break; }
    string line_buf;
    getline( ifs, line_buf );
    cout << line_buf << endl;
  }
  return 0;
}
