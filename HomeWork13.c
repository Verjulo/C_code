#include <stdio.h>
#include <string.h>

int main()
{
    char plateFull[20] = "";
    char plateEng[] = "ABC";
    char plateNum[] = "1234";
    char search[20];

    printf("請輸入查詢車牌：");

    // 讀入查詢的車牌存至 search
    scanf("%s", search);

    // 將plateEng合併至plateFull
    strcat(plateFull, plateEng);

    // 將"-"合併至plateFull
    strcat(plateFull, "-");

    // 將plateNum合併至plateFull
    strcat(plateFull, plateNum);

    // 列印出plateFull
    printf("完整車牌：%s\n", plateFull);

    // 列印出search
    printf("查詢車牌：%s\n", search);

    // 比對plateFull, search
    if (strcmp(plateFull, search) == 0)
    {
        printf("車牌相符！\n");
    }
    else
    {
        printf("車牌不符！\n");
    }

    return 0;
}