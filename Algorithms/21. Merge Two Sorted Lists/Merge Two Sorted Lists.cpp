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
    void push(ListNode *&head, int newElement)
    {

        ListNode *newNode = new ListNode();
        newNode->val = newElement;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            ListNode *temp = head;
            while (temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
        }
    }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        vector<int> Sort;

        while (list1 != NULL)
        {
            Sort.push_back(list1->val);
            list1 = list1->next;
        }

        while (list2 != NULL)
        {
            Sort.push_back(list2->val);
            list2 = list2->next;
        }

        sort(Sort.begin(), Sort.end());
        ListNode *ret = NULL;

        for (size_t i = 0; i < Sort.size(); i++)
        {
            push(ret, Sort.at(i));
        }

        return ret;
    }
};