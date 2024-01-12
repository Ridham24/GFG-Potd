void reve(queue<int>& q,int x)
    {
        if(q.size()==x)
        return;
        int a=q.front();
        q.pop();
        reve(q,x);
        q.push(a);
        return;
    }
    void rev(queue<int>& q)
    {
        if(q.size()==0)
        return;
        int a=q.front();
        q.pop();
        rev(q);
        q.push(a);
        return;
    }
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        int x=k;
        rev(q);
        reve(q,x);
        return q;
    }