##  如果有需要请在此做笔记

## 周一


## 周二
```
@liujinfu
vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> res = {};
        if(nums.size() < 3) return res; // 小于3个没有值 返回空
        sort(nums.begin(), nums.end());
        int a,b,c;
        int ll,rr;
        int sum;
        if((nums[0] == nums[1]) && (nums[1]== nums[2]) &&(nums[0]==0)){
            res = {{0,0,0}};
            return res;
        }
        for(int i=0; i<nums.size()-2; i++){
            if(i>0 && (nums[i] == nums[i-1])) continue; // 排列之后重复的数挨着，相同要过掉，不然结果会重复
            a = nums[i];
            ll = i+1;
            rr = nums.size()-1;
            while (ll<rr){
                b = nums[ll];
                c = nums[rr];
                sum = a+b+c;
                if(sum == 0){
                    vector<int> ress = {a,b,c};
                    res.insert(res.end(),ress);
                    while(ll < rr && nums[ll] == nums[ll + 1]) ll ++;
                    while(ll < rr && nums[rr] == nums[rr - 1]) rr --;
                    ll ++;
                    rr --; // 刚好等于0的时候，说明两端要同时靠拢才行，靠拢的时候如果有重复的，则要跳过
                } else if(sum<0){
                    while(ll < rr && nums[ll] == nums[ll + 1]) ll ++;
                    ll++;
                } else{
                    while(ll < rr && nums[rr] == nums[rr - 1]) rr --;
                    rr--; // 后面这两种情况可以不考虑重复，因为本来就不符合，如果相同则情况依旧是会跳过，为了节省计算，也是可以直接跳过的
                }

            }
        }
        return res;
    }
```
## 周三
```
ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(head->next == NULL){
            head = NULL;
            return head;
        }
        ListNode *pre = head;
        ListNode *cur = head;
        while(n != 0){
            n--;
            pre = pre->next;
        }
        while( pre != NULL && pre->next!= NULL){
            pre = pre->next;
            cur = cur->next;
        }
        if(cur == head && pre==NULL){ 
            // 针对[1,2],2 的情况。
            head = head->next;
            return head;
        }
        cur->next = cur->next->next;
        return head;
    }
```

## 周四


## 周五


## 周六


## 周日
