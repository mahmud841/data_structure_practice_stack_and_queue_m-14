class MyQueue {
public:
    stack<int> stk;
    MyQueue() {
        
    }
    
    void push(int x) {
        stk.push(x);
        
    }
    
    int pop() {
        stack<int> newStack;
        int lastElement;
        while(!stk.empty())
        {
            int k=stk.top();
            stk.pop();
            if(stk.empty())
            {
                // last element
                lastElement=k;
                break;
            }
            newStack.push(k);
        }
        while(!newStack.empty())
        {
            stk.push(newStack.top());
            newStack.pop();
        }
        return lastElement;
    }
    
     int peek() {
        stack<int> newStack;
        int lastElement;
        while(!stk.empty())
        {
            int k=stk.top();
            stk.pop();
            if(stk.empty())
            {
                // last element
                lastElement=k;
            }
            newStack.push(k);
        }
        while(!newStack.empty())
        {
            stk.push(newStack.top());
            newStack.pop();
        }
        return lastElement;
    }
    
    bool empty() {
        return stk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */