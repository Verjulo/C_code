#include <iostream>

int main()
{
    int i, j;
    int p = 0;

    int ECUA[11] = {0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0};
    int ECUB[11] = {0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1};
    int ECUC[11] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0};

    std::cout << "Start!!\n";

    // 0-8 找分岐點
    for (i = 0; i < 11; i++)
    {
        if (ECUA[i] == ECUB[i])
        {
            std::cout << ECUA[i];
        }
        else if (ECUA[i] == 0)
        {
            std::cout << ECUA[i];
            p = 0; // 後面用 A
            break;
        }
        else if (ECUB[i] == 0)
        {
            std::cout << ECUB[i];
            p = 1; // 後面用 B
            break;
        }
    }

    for (j = i + 1; j < 11; j++)
    {
        if (p == 0)
        {
            std::cout << ECUA[j];
        }
        else
        {
            std::cout << ECUB[j];
        }
    }

    std::cout << std::endl;

    return 0;
}