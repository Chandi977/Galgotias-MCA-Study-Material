# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
TTo delete a node from a singly-linked list where we only have access to that node, we can't do so simply by altering the previous node's next pointer. Instead, we duplicate the value from the next node to the current node and then remove it.
# Approach
<!-- Describe your approach to solving the problem. -->
1 Check if the given node is valid and not the last node in the list.
2 Copy the value of the next node to the current node.
3 Update the next pointer of the current node to skip the next node.
4 Delete the next node to complete the deletion.

# Complexity
- Time complexity: O(1) - We are performing a constant number of operations.
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- Space complexity: O(1) - We are not using any extra space that scales with the size of the input.
<!-- Add your space complexity here, e.g. $$O(n)$$ -->


# Code
```
class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == nullptr || node->next == nullptr) return;
        ListNode* nextNode = node->next;
        node->val = nextNode->val;
        node->next = nextNode->next;
        delete nextNode;
    }
};
```