/**
 * Given a non-empty, singly linked list with head node, return
 * middle node of linked list. If there are two middle nodes,
 * return the second middle node.
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(nullptr) {}
};

ListNode*
getMiddleNode(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
