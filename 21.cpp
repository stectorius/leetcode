class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr)return list2;
        else if(list2==nullptr)return list1;
        ListNode *temp=nullptr;
        if(list1->val<list2->val){
            temp=list1;
            list1=list1->next;
        }
        else{
            temp=list2;
            list2=list2->next;
        }
        ListNode* head=temp;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<list2->val){
            ListNode* t=list1;
            list1=list1->next;
            temp->next=t;
            temp=temp->next;
        }
        else{
            ListNode* t=list2;
            list2=list2->next;
            temp->next=t;
            temp=temp->next;
        }
        }

        if(list1!=nullptr)temp->next=list1;
        else temp->next=list2;
        return head;
    }
};
