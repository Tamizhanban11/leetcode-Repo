class Solution {
public:
bool static compare (vector<int>&a, vector<int>&b){
    return a[1]<b[1];
}
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(),compare);
        int initial = points[0][1];
        int ans=1;
        for(int i = 0;i<points.size();i++){
            if(initial < points[i][0]){
                ans++;
                initial = points[i][1];

            }
        }
        return ans;
        
    }
};