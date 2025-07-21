#include <iostream>
#include <set>
using namespace std;

void set_usage(){
    // init set
    set<int> s;
    set<int> ss = {2,5,6,8};
    // insert into set
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // set methods
    ss.size();
    s.erase(5);
    s.count(3); // 1
}

void iterators_usage(){
    set<int> s = {2,5,6,8};
    set<int>::iterator it = s.begin();
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << "\n";
    }
}

void find_nearest_to_x(set<int> s, int x){
    auto it = s.lower_bound(x);
    if (it == s.begin()) {
        cout << *it << "\n";
    } else if (it == s.end()) {
        it--;
        cout << *it << "\n";
    } else {
        int a = *it; it--;
        int b = *it;
        if (x-b < a-x) cout << b << "\n";
        else cout << a << "\n";
    }
}
void multiset_usage(){
    multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.erase(s.find(5));
    cout << s.count(5) << "\n"; // 3
}

int main(){
    
}