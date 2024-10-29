#include<stdio.h>
    int main()
    {
        int r,c;
        scanf("%d %d",&r,&c);
        long long int a[r+1][c+1];

          for(int i=0;i<=r;i++)
        {
            for(int j=0;j<=c;j++)
            {
                a[i][j]=0;
            }
        }

        for(int i=1;i<=r;i++)
        {    long long int d=0;
             long long int count=0;
             long long int mark;
            for(int j=1;j<=c;j++)
              { long long int flag=0;

                  scanf("%lld ",&flag);
                  count+=flag;

                  if(j==1)
                  {a[i][1]=mark+flag;
                   mark = a[i][1];
                  }

                  else
                  {
                       if(i!=1)


                         a[i][j]=a[i-1][j]+count;
                         else
                         a[i][j]=a[i][j-1]+flag;
                         d = j;

                  }

              }

        }
         int q=0;
         scanf("%d",&q);



          while(q--)
         {
             int x1,y1,x2,y2;
             scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            // printf("%d %d %d %d\n",a[x2][y2],a[x2][y2-1],a[x1-1][y2],a[x1-1][y1-1]);
             printf("%lld\n",a[x2][y2]-a[x2][y1-1]-a[x1-1][y2]+a[x1-1][y1-1]);
         }

    }