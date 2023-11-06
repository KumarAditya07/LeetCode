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

//optimised
// /** initialize your data structure here. */
//     stack<long> s;
//     long mn;
//     MinStack() {
        
//     }
    
//     void push(int x) {
//         if(s.empty()){
//             s.push(x);
//             mn = x;
//         }
//         else if(x <= mn){
//             // put 2*x - mn into stack
//             s.push(2ll*x - mn);
//             mn = x;
//         }
//         else{
//             s.push(x);
//         }
//     }
    
//     void pop() {
//         if(s.empty()) return;
//         // stack top can never be smaller than mn, if it is then it indicates a flag which means before popping, you have to update mn
//         if(s.top() < mn){
//             // mn = 2*mn - s.top()
//             mn = 2ll*mn - s.top();
//         }
//         s.pop();
//     }
    
//     // critical part
//     int top() {
//         if(s.empty()) return -1;
//         if(s.top() < mn){
//             return mn;
//         }
//         return s.top();
//     }
    
//     int getMin() {
//         if(s.empty()) return -1;
//         return mn;
//     }