#include<iostream>
#include<stack>
using namespace std;
int maxArea(int *a , int n) {
    stack<int> s;
    int max_area = 0;
    int tp;
    int area_with_top;
    int i = 0;
    while (i < n) {
        if (s.empty() || a[s.top()] < a[i]) {
            s.push(i++);
        }
        else {
            tp = s.top(); 
            s.pop();
            area_with_top = a[tp] * (s.empty() ? i : i - s.top() - 1);
            if (max_area < area_with_top) {
                max_area = area_with_top;
            }
        }
    }
    while (s.empty() == false) {
        tp = s.top();
        s.pop();
        area_with_top = a[tp] * (s.empty() ? i : i - s.top() - 1);
        if (max_area < area_with_top) {
            max_area = area_with_top;
        }
    }
    return max_area;
}
int main() {
    short n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    
    cout << maxArea(a,n);
    return 0;
}
