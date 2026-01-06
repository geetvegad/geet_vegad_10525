#include <stdio.h>

// Function to calculate total bill
float calculateBill(float prices[], int quantity[], int size)
{
    float total = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        total += prices[i] * quantity[i];
    }

    return total;
}

int main()
{
    int i;
    int n = 5;   // Number of food items

    // Food items
    char foodItems[5][20] = {
        "Burger",
        "Pizza",
        "Pasta",
        "Sandwich",
        "Cold Drink"
    };

    // Prices of food items (1D array)
    float prices[5] = {120.0, 250.0, 180.0, 100.0, 60.0};

    // Quantity array
    int quantity[5];

    float totalBill;

    printf("=================================\n");
    printf("   ONLINE FOOD ORDER SYSTEM\n");
    printf("=================================\n");

    // Display menu
    printf("\nMenu:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d. %-10s : Rs %.2f\n", i + 1, foodItems[i], prices[i]);
    }

    // Take quantity input
    printf("\nEnter quantity for each item:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s: ", foodItems[i]);
        scanf("%d", &quantity[i]);
    }

    // Calculate total bill using function
    totalBill = calculateBill(prices, quantity, n);

    // Display bill
    printf("\n=================================\n");
    printf("          TOTAL BILL\n");
    printf("=================================\n");

    for (i = 0; i < n; i++)
    {
        if (quantity[i] > 0)
        {
            printf("%s x %d = Rs %.2f\n",
                   foodItems[i],
                   quantity[i],
                   prices[i] * quantity[i]);
        }
    }

    printf("---------------------------------\n");
    printf("Total Amount Payable: Rs %.2f\n", totalBill);
    printf("=================================\n");

    return 0;
}
