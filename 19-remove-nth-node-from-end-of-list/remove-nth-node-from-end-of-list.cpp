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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode *temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }

        if(cnt == n){
            head=head->next;
            return head;
        }

        int rexs = cnt-n;

        temp=head;
        while(temp){
            rexs--;
            if(rexs == 0){
                break;
            }
            temp=temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};