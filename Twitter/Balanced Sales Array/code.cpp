#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'balancedSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY sales as parameter.
 */

int balancedSum(vector<int> sales) {
    int rightSubArraySum = 0;
    int leftSubArraySum = 0;
    int sizeOfArray = int(sales.size());
    for ( int i = 1; i < sizeOfArray; i++ ) {
        rightSubArraySum += sales[i];
    }
    for( int i = 0, j = 1; j < sizeOfArray; i++, j++ ) {
        rightSubArraySum -= sales[j];
        leftSubArraySum += sales[i];
        if ( leftSubArraySum == rightSubArraySum ) {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string sales_count_temp;
    getline(cin, sales_count_temp);

    int sales_count = stoi(ltrim(rtrim(sales_count_temp)));

    vector<int> sales(sales_count);

    for (int i = 0; i < sales_count; i++) {
        string sales_item_temp;
        getline(cin, sales_item_temp);

        int sales_item = stoi(ltrim(rtrim(sales_item_temp)));

        sales[i] = sales_item;
    }

    int result = balancedSum(sales);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

