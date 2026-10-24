class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
      int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
       auto toDay = [&](string s) {
            int m = stoi(s.substr(0, 2));
            int d = stoi(s.substr(3, 2));
            int total = 0;
            for (int i = 0; i < m - 1; i++) {
            total += days[i];
            }
            return total + d;
            };
            int startA = toDay(arriveAlice);
            int endA = toDay(leaveAlice);
            int startB = toDay(arriveBob);
            int endB = toDay(leaveBob);
            int start = max(startA, startB);
            int finish = min(endA, endB);
            return max(0, finish - start + 1);
        }
    
};