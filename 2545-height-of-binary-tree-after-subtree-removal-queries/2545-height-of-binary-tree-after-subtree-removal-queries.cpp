/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    using pii = pair<int, int>;

    // Helper function to calculate height and update level data
    int findHeight(TreeNode* curr, int level, vector<int>& node_level, vector<int>& node_height, vector<pii>& top2_height) 
    {
        if (!curr) return 0;

        // Recursively find heights of left and right subtrees
        int height = 1 + max(findHeight(curr->left, level + 1, node_level, node_height, top2_height),
                             findHeight(curr->right, level + 1, node_level, node_height, top2_height));

        // Store the node's level and height
        node_level[curr->val] = level;
        node_height[curr->val] = height;

        // Maintain only the top 2 heights at each level
        if (height > top2_height[level].first) 
        {
            top2_height[level].second = top2_height[level].first;
            top2_height[level].first = height;
        } else if (height > top2_height[level].second) 
        {
            top2_height[level].second = height;
        }

        return height;
    }

public:
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        int n = 100001; // Assumes node values range from 1 to 100000
        vector<int> node_level(n, -1);  // Stores level of each node
        vector<int> node_height(n, 0);  // Stores height of each node
        vector<pii> top2_height(n, {0, 0});  // Top-2 heights at each level {maxHeight, secondMaxHeight}

        // Compute the height for each node starting from the root
        findHeight(root, 0, node_level, node_height, top2_height);

        vector<int> res;
        for (int query_node : queries) 
        {
            int level = node_level[query_node];
            int height = node_height[query_node];

            // Determine the result based on whether the query_node is the tallest at that level
            int max_height = (top2_height[level].first == height) 
                             ? top2_height[level].second 
                             : top2_height[level].first;

            res.push_back(max_height + level - 1);
        }

        return res;
    }
};