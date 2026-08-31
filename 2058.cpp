class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> criticalIndices;
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }

        ListNode* prev = head;
        ListNode* curr = head->next;
        int index = 1;

        while (curr->next != nullptr) {
            if ((curr->val < prev->val && curr->val < curr->next->val) ||
                (curr->val > prev->val && curr->val > curr->next->val)) {
                criticalIndices.push_back(index);
            }
            prev = curr;
            curr = curr->next;
            index++;
        }

        if (criticalIndices.size() < 2) {
            return {-1, -1};
        }

        int minDist = INT_MAX;
        int maxDist = criticalIndices.back() - criticalIndices.front();

        for (size_t i = 1; i < criticalIndices.size(); ++i) {
            minDist = min(minDist, criticalIndices[i] - criticalIndices[i - 1]);
        }

        return {minDist, maxDist};
    }
};
