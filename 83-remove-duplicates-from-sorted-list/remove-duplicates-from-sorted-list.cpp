/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> arr;
        ListNode *first = head;
        while(first){
            arr.push_back(first->val);
            first=first->next;
        }

        set<int> st;
        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
        }

       ListNode *newHead = nullptr;
       ListNode *tail = nullptr;
        for(int x : st){
            ListNode *second = new ListNode(x);

            if(newHead == nullptr){
                newHead = second;
                tail=second;
            }
            else{
                tail->next = second;
                tail = second;
            }
        }

        return newHead;
    }

};