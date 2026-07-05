class MinStack {
private:
    stack<int>s1;
    stack<int>s2;
public:
    void push(int value) {
        s1.push(value);
        if(s2.empty() || value <= getMin()){
            s2.push(value);
        }

    }
    void pop() {
        if(s1.top() == getMin()){
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */