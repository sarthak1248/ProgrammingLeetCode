class MinStack {
  
public:
      long minele;
     stack<long> s;
    MinStack() {
       
        
    }
    
    void push(int val) {
        if(s.size()==0){
            minele=val;
            s.push(val);
        }
        else if(val>minele){
            s.push(val);
        }
        else {
            s.push((long)2*val-minele);
            minele=val;
        }
    }
    
    void pop() {
        if(s.size()==0){
            return;
        }
        else if(s.top()>=minele){
            s.pop();
        }
        else {
            minele= ((2*minele)-s.top());
            s.pop();
        }
    }
    
    int top() {
    if(s.size()==0){
        return -1;
    }
        else if(s.top()>=minele){
        return s.top();
    }
        else{
        
            return minele;
        }
    }
    
    int getMin() {
    if(s.size()==0){
       return -1;
    }
        
                return minele;
                
            
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