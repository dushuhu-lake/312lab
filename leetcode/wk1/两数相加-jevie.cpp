
leetcode上的提交记录：  https://leetcode-cn.com/submissions/detail/16664693/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int temp;
        int flag = 0;
        ListNode* head = new ListNode(0);
        ListNode* pre = head;
        while(l1&&l2){
            if(flag==0){
                temp = l1->val+l2->val;
            }
            else {
                temp = l1->val + l2->val + 1;
            }
            flag = temp>=10?1:0;
            temp = temp>=10?temp-10:temp;
            ListNode* p = new ListNode(temp);
            pre->next = p;
            pre = p;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            if(flag==0){
                temp = l1->val;
            }
            else{
                temp = l1->val + 1;
            }
            flag = temp>=10?1:0;
            temp = temp>=10?temp-10:temp;
            ListNode* p = new ListNode(temp);
            pre->next = p;
            pre = p;
            l1 = l1->next;
        }
        while(l2){
            if(flag==0){
                temp = l2->val;
            }
            else{
                temp = l2->val + 1;
            }
            flag = temp>=10?1:0;
            temp = temp>=10?temp-10:temp;
            ListNode* p = new ListNode(temp);
            pre->next = p;
            pre = p;
            l2 = l2->next;
        }
        while(!l1&&!l2&&flag){
            ListNode* p = new ListNode(1);
            pre->next = p;
            return head->next;
        }
        return head->next;
    }
};