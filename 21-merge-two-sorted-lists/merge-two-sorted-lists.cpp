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

class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if (!list1)                   //if lists are empty
        return list2;
        
        if (!list2) 
        return list1;

        ListNode* head = nullptr;      // initialize head & last
        ListNode* last = nullptr;

        if (list1->val < list2->val)   //choose 1st node of merged list
        {
            head = list1;
            list1 = list1->next;      //smaller value= 1st node of merged_list(head).
        } 
        else 
        {
            head = list2;
            list2 = list2->next;
        }

        last = head;               //update last to point to that node

        while (list1 && list2)    //merge rem. nodes
        {
            if (list1->val < list2->val) 
            {
                last->next = list1;
                list1 = list1->next;
            } else {
                last->next = list2;
                list2 = list2->next;
            }
            last = last->next;
        }

        if (list1)              //Attach remaining nodes
        last->next = list1;
        
        else 
        last->next = list2;

        return head;         //return them result
    }
};
