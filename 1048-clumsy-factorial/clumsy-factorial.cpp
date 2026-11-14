class Solution {
public:
    int clumsy(int n) {
        int numb , i=0;
        stack<int>s;
        s.push(n--);

        while(n){
            if(i==0){
                numb = s.top();
                s.pop();
                s.push(numb*n); 
            }
            else if(i==1){
                numb = s.top();
                s.pop();
                s.push(numb/n);
            }
            else
            s.push(n);
            i = (i+1)%4;
            n--;
        }

        stack<int>ans;
        while(s.size()){
            ans.push(s.top());
            s.pop();
        }

        bool flag = 0;
        int sum = ans.top();
        ans.pop();
        while(ans.size()){
            if(flag == 0){
                sum+=ans.top();
            }
            else
            sum-=ans.top();
            ans.pop();
            flag = !flag;
        }
    return sum;

    }
};