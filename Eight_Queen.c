#include<stdio.h>
#include<math.h>
#define  SIZE  8
int solution[SIZE];
int used[SIZE];
int count=0 , x = 0;
int solutionset[1000][SIZE]={0};




int main(){

    int i , o;
    for(i=0;i<SIZE;i++)
        used[i]=0;
    backtrack(0); //回溯法
    printf("共%d個 \n \n",count);
}

void backtrack(int n)
{
    int i ;
    // 製作了其中一個答案

    if (n == SIZE && checkanswers(n))
    {
        count++;
        for(i=0;i<SIZE;i++)
            printf("%d",solution[i]);

        printf("\n");
        return;
    }

    // 寫成一個迴圈
    for (i=0; i<SIZE; i++)
        if (!used[i] && checkanswers(n))
        {
            used[i] = 1;
            solution[n] = i;
         //   printf("solution[%d] = %d  \n",n,solution[n]);
            backtrack(n+1);
            used[i] = 0;
        }
}

int checkanswers(int n)
{
    int i,j,sof = 0;

    for (i = 0 ; i < n ; i++)
    {
        for (j = (i + 1) ; j < n ; j++)
        {
            if (solution[i] == solution[j] || abs(solution[i] - solution[j]) - abs(i - j) == 0)
            {
                sof = sof + 1;
            }
        }
    }

    solutionset[count][i] = solution[i];

    if (sof >= 1)
    {
        //printf ("fail  ");
        return 0;
    }
    else
    {
        //printf ("succes  ");
        x++;
        return 1;
    }
}
int Rotation()
{
    int i , j , checksum ;
    int soltemp1[SIZE] = {0};
    int soltemp2[SIZE] = {0};
    int soltemp3[SIZE] = {0};

        for(i = 0;i < count;i++)
    {
        int checksum=0;

        for(j = 0;j < SIZE;j++)
        {
            if(soltemp1[j] == solutionset[i][j])
            {
                checksum++;
            }
        }
        if(checksum == SIZE)
        {
            for(i = 0;i < SIZE;i++)
            {
                printf("%d",soltemp1[i]);
            }
            printf("重複1 \n");
            return 0;
        }


        checksum=0;
        for(j = 0;j < SIZE;j++)
        {
            if(soltemp2[j] == solutionset[i][j])
            {
                checksum++;
            }
        }
        if(checksum == SIZE)
        {
            for(i = 0;i < SIZE;i++)
            {
                printf("%d",soltemp2[i]);
            }
            printf("重複1 \n");
            return 0;
        }

                checksum=0;
        for(j = 0;j < SIZE;j++)
        {
            if(soltemp3[j] == solutionset[i][j])
            {
                checksum++;
            }
        }
        if(checksum == SIZE)
        {
            for(i = 0;i < SIZE;i++)
            {
                printf("%d",soltemp3[i]);
            }
            printf("重複1 \n");
            return 0;
        }
    }

}

