#include <stdio.h>

int main() {

    int nd = 0, ni = 0;
    int both, none, convex = -1, concave = -1;
    int x, y, z;

    scanf_s("%d", &x);

    while (1)
    {
        scanf_s("%d", &y);

        if (x == -1 || y == -1)
        {
            if (concave == 1 && convex == 1) printf("None");
            else if (convex == 1) printf("Convex");
            else if (concave == 1) printf("Concave");
            else printf("Both");

            break;
        }

        if (y - x > 0)
        {
            if (nd == 1) concave = 1;

            ni = 1;
        }
        else if (x - y > 0)
        {
            if (ni == 1) convex = 1;

            nd = 1;
        }

        x = y;

    }


    return 0;
}