
#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main() {
  map <int, int> temp;
  temp.insert(pair <int, int> (1, 40));
  temp.insert(pair <int, int> (2, 30));
  temp.insert(pair <int, int> (3, 60));
  temp.insert(pair <int, int> (5, 50));
  temp.insert(pair <int, int> (10, 50));
  temp.erase(3);			// remove all elements with key = 3
  cout << "\nElements of Map\n";
  for (itr = temp.begin(); itr != temp.end(); ++itr) {
    cout  <<  '\t' << itr->first <<  '\t' << itr->second << '\n';
  }
  cout << endl;
  return 0;
}
