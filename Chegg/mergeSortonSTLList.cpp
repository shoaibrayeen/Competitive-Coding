#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void showlist(list <int> list1) {
    //printing list
    list <int> :: iterator it;                        // Declaring Iterator of the list
    for(it = list1.begin(); it != list1.end(); ++it) {
        cout << *it << "\t";
    }
}

template<typename It>
list<typename It::value_type> merge(const It begin, const It mid, const It end) {
    // merging given list
    list<typename It::value_type> v;
    It it_l{ begin }, it_r{ mid };
    const It it_mid { mid }, it_end { end };
    
    while (it_l != it_mid && it_r != it_end) {
        v.push_back((*it_l <= *it_r) ? *it_l++ : *it_r++);
    }
    
    v.insert(v.end(), it_l, it_mid);
    v.insert(v.end(), it_r, it_end);
    
    return move(v);
}

template<typename It>
void mergeSort(It begin, It end) {
    //calling function from begin to mid and mid to end
    auto size = distance(begin, end);
    if (size < 2) {
        return;
    }
    auto mid = std::next(begin, size / 2);
    mergeSort(begin, mid);
    mergeSort(mid, end);
    
    auto &&v = merge(begin, mid, end);
    move(v.cbegin(), v.cend(), begin);
}

int main() {
    // you can change data type of list.
    list <int> list1;                                 // Declaring List
    for (int i = 10; i > 1; --i) {
        //You can take input from user
        list1.push_back(i);                           // Insert at back
        list1.push_front(i*5);                        // Insert at front
    }
    cout << "\nUnsorted List\n";
    showlist(list1);
    mergeSort(list1.begin() , list1.end());
    cout << endl;
    cout << "\nSorted List\n";
    showlist(list1);
    cout << endl;
    return 0;
}
