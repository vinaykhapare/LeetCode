class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        vector<pair<pair<int, int>, int>> events;
        for(int i=0; i<n; i++)
        {
            events.push_back({{times[i][0], 1},i});
            events.push_back({{times[i][1], -1},i});
        }
        sort(events.begin(), events.end());

        vector<int> assignedChair(n, -1);
        priority_queue<int, vector<int>, greater<int>> availableChair;

        for(int i=0; i<n; i++)
        {
            availableChair.push(i);
        }
        for(auto& event : events)
        {
            int time = event.first.first;
            int type = event.first.second;
            int person = event.second;

            if(person == targetFriend && type == 1)
            {
                return availableChair.top();
            }

            if(type == 1)
            {
                assignedChair[person] = availableChair.top();
                availableChair.pop();
            }
            else
            {
                availableChair.push(assignedChair[person]);
                assignedChair[person] = -1;
            }
        }
        return -1;
    }
};