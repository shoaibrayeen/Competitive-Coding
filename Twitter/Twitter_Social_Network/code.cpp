#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'countGroups' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING_ARRAY related as parameter.
 */
void DFS(vector<string> &related, int source, vector<bool> &visited, vector<int> &remaingingPeople) {
    remaingingPeople[source] = -1;
    visited[source] = true;
    for ( int i = 0; i < related.size(); i++ ) {
        if ( !visited[i] && related[source][i] == '1' ){
            DFS(related, i, visited, remaingingPeople);
        }
    }
}
int countGroups(vector<string> related) {
    int totalPeople = int(related.size());
    vector<bool> visited (totalPeople, 0);
    vector<int> remaingingPeople(totalPeople);
    for( int i = 0; i < totalPeople; i++ ) {
        remaingingPeople[i] = i;
    }
    int count = 0;
    for( int i = 0; i < totalPeople; i++ ) {
        if( remaingingPeople[i] == i) {
            count++;
            DFS( related, remaingingPeople[i], visited, remaingingPeople );
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string related_count_temp;
    getline(cin, related_count_temp);

    int related_count = stoi(ltrim(rtrim(related_count_temp)));

    vector<string> related(related_count);

    for (int i = 0; i < related_count; i++) {
        string related_item;
        getline(cin, related_item);

        related[i] = related_item;
    }

    int result = countGroups(related);

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
