## Je-vie 的代码保存文档
### 说明
1. 该文档为Je-vie的代码保存库，可以在提交成功后将代码拷贝到该文档上，供以后自己翻阅  
2. 该文档主要提供当天没法完成的时候，将已经写好的代码保存在此，在每周末最后一天彻底解决，实在解决不了也不关系
#### 周一
[略]()
```

```
#### 周二
[略]()
```

```
#### 周三
[两数相加](https://leetcode-cn.com/problems/add-two-numbers/)
```
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
```
#### 周四
[无重复字符的最长子串](https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/)
```
//这个方法很好
int lengthOfLongestSubstring2(string s) {
    string ss="";
    int ans=0;
    // 核心思想是ss在是上进行窗口滑动，永远保持没有重复
    for(int i=0;i<s.length();i++){
        int index=ss.find(s[i]); // 找到并返回下标，没找到返回npos标志。
        if(index!=ss.npos)// npos 代表不可能的最大值
            ss.assign(ss,index+1,ss.length()-index);// 重新赋值，从找到的那个的下一个位置起到最后
        ss+=s[i];// 把当前这个位置的值加到最后去
        ans=ss.length()>ans ? ss.length():ans;
    }
    return ans;  
}
```
#### 周五
[最长回文子串](https://leetcode-cn.com/problems/longest-palindromic-substring/)
```

```
#### 周六
[Z 字形变换](https://leetcode-cn.com/problems/zigzag-conversion/)
```

```
#### 周日
[字符串转换整数 (atoi)](https://leetcode-cn.com/problems/string-to-integer-atoi/)
```

```
