class MinStack {
public:
    stack<int> s1,s2;
    MinStack() {
        
    }
    
    void push(int x) {
        if(s2.empty() ||  x <= s2.top()) s2.push(x);
        
        s1.push(x);
    }
    
    void pop() {
        if(s2.top()==s1.top()) s2.pop();
        
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
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */