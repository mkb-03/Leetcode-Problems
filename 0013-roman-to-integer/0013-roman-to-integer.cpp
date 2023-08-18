class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int i = s.length() - 1;
        while(i >= 0)
        {
            if(s[i] == 'I')
            {
                result = result + 1;
            }

            else if(s[i] == 'V')
            {
                if( i > 0 && s[i-1] == 'I')
                {
                    result = result + 4;
                    i--;
                }

                else
                {
                    result = result + 5;
                }

            }

            else if(s[i] == 'X')
            {
                if( i > 0 && s[i-1] == 'I')
                {
                    result = result + 9;
                    i--;
                }

                else
                {
                    result = result + 10;
                }

            }

            else if(s[i] == 'L')
            {
                if(  i > 0 && s[i-1] == 'X')
                {
                    result = result + 40;
                    i--;
                }

                else
                {
                    result = result + 50;
                }

            }

            else if(s[i] == 'C')
            {
                if(  i > 0 && s[i-1] == 'X')
                {
                    result = result + 90;
                    i--;
                }

                else
                {
                    result = result + 100;
                }

            }

            else if(s[i] == 'D')
            {
                if(  i > 0 && s[i-1] == 'C')
                {
                    result = result + 400;
                    i--;
                }

                else
                {
                    result = result + 500;
                }

            }

            else if(s[i] == 'M')
            {
                if(  i > 0 && s[i-1] == 'C')
                {
                    result = result + 900;
                    i--;
                }

                else
                {
                    result = result + 1000;
                }

            }

            i--;
        }

        return result;
    }

};