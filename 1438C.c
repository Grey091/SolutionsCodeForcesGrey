#include <stdio.h>
int main()
{
    int numTestCase;
    scanf("%d", &numTestCase);
    for(int i = 0; i < numTestCase; i++)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n][m];        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);                 
            }            
        }  
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int u = ((i % 2) ^ (j % 2));              
                a[i][j] += ((a[i][j] % 2) != (u % 2));
                printf("%d", a[i][j]);
            }
            printf("\n");
        }        
    }
    return 0;
}