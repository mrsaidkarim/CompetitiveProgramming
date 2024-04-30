class MinStack {
public:
    MinStack() {

    }
    
    void push(int val) {
        stk.push(val);
        if (min_stk.empty() || val <= min_stk.top())
            min_stk.push(val);
    }
    
    void pop() {
		if (!stk.empty())
		{
			if (min_stk.top() == stk.top())
				min_stk.pop();
			stk.pop();
		}
    }
    
    int top() {
        return (stk.top());
    }
    
    int getMin() {
        return (min_stk.top());
    }
private:
    stack<int> stk;
    stack<int> min_stk;
};