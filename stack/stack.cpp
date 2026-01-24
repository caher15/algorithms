// time Complexity O(n) 
// First stack lesson
#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    return 0;
}