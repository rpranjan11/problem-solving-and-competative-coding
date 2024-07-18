#include <stdio.h>
        #include <string.h>

        long long int countSubstr(char *S,char *qstr)
        {
           int lenqstr = strlen(qstr),len = strlen(S);
           int max = 0,prevmin = -1,min;
           long long int count = 0;
           int k = 0, l = 0,f = 0;
           for(k = 0;k < lenqstr;k++)
           {
              l = 0;
              f = 0;
              while(l < len)
              {
                 if(S[l] == qstr[k])
                 {
                    f = 1;
                    if(l > max)
                       max = l;
                    break;
                 }
                 l++;
              }
              if(f == 0)
                 return count;
           }
           min = max;
           for(k = 0;k < lenqstr;k++)
           {
              l = max;
              f = 0;
              while(l >= 0)
              {
                 if(S[l] == qstr[k])
                 {
                    f = 1;
                    if(l < min)
                       min = l;
                    break;
                 }
                 l--;
              }
              if(f == 0)
                 return count;
           }
           do{
              count += (min - prevmin) * (len - max);
              prevmin = min;
              max++;
              while((max < len) && (S[max] != S[min]))
                 max++;
              if(max == len)
                 return count;
              min = max;
              for(k = 0;k < lenqstr;k++)
              {
                 l = max;
                 f = 0;
                 while(l > prevmin)
                 {
                    if(S[l] == qstr[k])
                    {
                       f = 1;
                       if(l < min)
                          min = l;
                       break;
                    }
                    l--;
                 }
                 if(f == 0)
                    return count;
              }
           }while(max < len);
           return count;
        }

        int main()
        {
           int N;
           scanf("%d",&N);
           while(N--)
           {
              char S[100000];
              scanf("%s",S);
              int nq;
              scanf("%d",&nq);
              char qstr[62];
              while(nq--)
              {
                 scanf("%s",qstr);
                 printf("%lli\n",countSubstr(S,qstr));
              }
           }
           return 0;
        }