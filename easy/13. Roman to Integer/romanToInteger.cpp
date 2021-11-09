class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        if(s.size() > 0)
        {
            if(s[0] == 'I') num += 1;
            else if(s[0] == 'X') num += 10;
            else if(s[0] == 'C') num += 100;
            else if(s[0] == 'M') num += 1000;
            else if(s[0] == 'V') num += 5;
            else if(s[0] == 'L') num += 50;
            else if(s[0] == 'D') num += 500;
        }
        if(s.size() > 1)
        {
            if(s[1] == 'I') num += 1;
            else if(s[1] == 'X')
            {
                if(s[0] == 'I') num += 8;
                else num += 10;
            }
            else if(s[1] == 'C')
            {
                if(s[0] == 'X') num += 80;
                else num += 100;
            }
            else if(s[1] == 'M')
            {
                if(s[0] == 'C') num += 800;
                else num += 1000;
            }
            else if(s[1] == 'V')
            {
                if(s[0] == 'I') num += 3;
                else num += 5;
            }
            else if(s[1] == 'L')
            {
                if(s[0] == 'X') num += 30;
                else num += 50;
            }
            else if(s[1] == 'D')
            {
                if(s[0] == 'C') num += 300;
                else num += 500;
            }
        }
        for(int i = 2; i < s.size(); i++)
        {
            if(s[i] == 'I') num += 1;
            else if(s[i] == 'X')
            {
                if(s[i - 1] == 'I') num += 8;
                else num += 10;
            }
            else if(s[i] == 'C')
            {
                if(s[i - 1] == 'X') num += 80;
                else num += 100;
            }
            else if(s[i] == 'M')
            {
                if(s[i - 1] == 'C') num += 800;
                else num += 1000;
            }
            else if(s[i] == 'V')
            {
                if(s[i - 2] == 'I' && s[i - 1] == 'I') num += 1;
                if(s[i - 1] == 'I') num += 3;
                else num += 5;
            }
            else if(s[i] == 'L')
            {
                if(s[i - 2] == 'X' && s[i - 1] == 'X') num += 10;
                if(s[i - 1] == 'X') num += 30;
                else num += 50;
            }
            else if(s[i] == 'D')
            {
                if(s[i - 2] == 'C' && s[i - 1] == 'C') num += 100;
                if(s[i - 1] == 'C') num += 300;
                else num += 500;
            }
        }
        return num;
    }
};