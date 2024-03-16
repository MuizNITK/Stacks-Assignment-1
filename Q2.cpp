#include<iostream>
#include <stack>
using namespace std;
void removeKthElement(stack<int>& st, int k){
    stack<int> temp;
    while(st.size()>k){
        temp.push(st.top())  ;     
        st.pop();
    }
    temp.pop();
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void display(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }

    cout<<endl;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    display(st);
    removeKthElement(st,3);
    display(st);

}