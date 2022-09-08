class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> s;
        int i=0;
        while(i<asteroids.size()){
            if(s.empty() || s.back()*asteroids[i]>0 || (asteroids[i]>0 && s.back()<0) ){
                s.push_back(asteroids[i]);
                i++;
            }
            else{
                if(abs(s.back())>abs(asteroids[i]) ){
                    i++;
					continue;
                }
                else if(abs(s.back())==abs(asteroids[i])){
                    s.pop_back();
                    i++;
                }
                else{
                    s.pop_back();
                }
            }
        }
        return s;
    }
};