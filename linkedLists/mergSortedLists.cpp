/**
 * Merge two sorted linked lists and return it as a new list.
 * The new list should be made by splicing together the nodes
 * of the first two lists.
 *  Example:
 *    Input: 1->2->4, 1->3->4
 *    Output: 1->1->2->3->4->4
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr){}
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode dummy(0);
        ListNode *mList = &dummy;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                mList = mList->next = l1, l1 = l1->next;
            } else {
                mList = mList->next = l2, l2 = l2->next;
            }
        }
        mList->next = l1? l1: l2;
        return dummy.next; 
    }
};
