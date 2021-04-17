#include <stdio.h>
#include <stdlib.h>

int row, column;
int matrix[10][10];
int trans[10][10];


//行列を生成する。
void generate_matrix();

int main(void)
{
 
    printf("行数 = ");
    scanf("%d", &row);
    printf("列数 = ");
    scanf("%d", &column);

    /* 行列の入力 */
    printf("\n行列を入力してください\n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            printf("行列の要素 A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    generate_matrix();

    return 0;
}

void generate_matrix()
{

    /* 入力した行列の表示 */
    printf("\nA = \n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            printf("%d  ", matrix[i][j]);
            if (j == column - 1)
                printf("\n");
        }
    }
}
