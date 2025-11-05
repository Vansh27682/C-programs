//11.	Implement Relational, Logical, Bitwise, Assignment, Increment, and Decrement operators using a nested switch case structure

#include <stdio.h>

int main() {
    int mainChoice, subChoice;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n===== MAIN MENU =====\n");
    printf("1. Relational Operators\n");
    printf("2. Logical Operators\n");
    printf("3. Bitwise Operators\n");
    printf("4. Assignment Operators\n");
    printf("5. Increment/Decrement Operators\n");
    printf("=====================\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &mainChoice);

    switch(mainChoice) {

        // ------------------------------
        case 1: 
            printf("\n--- RELATIONAL OPERATORS ---\n");
            printf("1. a > b\n");
            printf("2. a < b\n");
            printf("3. a == b\n");
            printf("4. a != b\n");
            printf("5. a >= b\n");
            printf("6. a <= b\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            
            switch(subChoice) {
                case 1: printf("Result: %d > %d → %d\n", a, b, a > b); break;
                case 2: printf("Result: %d < %d → %d\n", a, b, a < b); break;
                case 3: printf("Result: %d == %d → %d\n", a, b, a == b); break;
                case 4: printf("Result: %d != %d → %d\n", a, b, a != b); break;
                case 5: printf("Result: %d >= %d → %d\n", a, b, a >= b); break;
                case 6: printf("Result: %d <= %d → %d\n", a, b, a <= b); break;
                default: printf("Invalid relational choice!\n");
            }
            break;

        // ------------------------------
        case 2: 
            printf("\n--- LOGICAL OPERATORS ---\n");
            printf("1. a && b (Logical AND)\n");
            printf("2. a || b (Logical OR)\n");
            printf("3. !(a && b) (Logical NOT)\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            switch(subChoice) {
                case 1: printf("Result: %d && %d → %d\n", a, b, (a && b)); break;
                case 2: printf("Result: %d || %d → %d\n", a, b, (a || b)); break;
                case 3: printf("Result: !(%d && %d) → %d\n", a, b, !(a && b)); break;
                default: printf("Invalid logical choice!\n");
            }
            break;

        // ------------------------------
        case 3:
            printf("\n--- BITWISE OPERATORS ---\n");
            printf("1. a & b  (Bitwise AND)\n");
            printf("2. a | b  (Bitwise OR)\n");
            printf("3. a ^ b  (Bitwise XOR)\n");
            printf("4. ~a     (Bitwise NOT)\n");
            printf("5. a << 1 (Left Shift)\n");
            printf("6. a >> 1 (Right Shift)\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            switch(subChoice) {
                case 1: printf("Result: %d & %d = %d\n", a, b, a & b); break;
                case 2: printf("Result: %d | %d = %d\n", a, b, a | b); break;
                case 3: printf("Result: %d ^ %d = %d\n", a, b, a ^ b); break;
                case 4: printf("Result: ~%d = %d\n", a, ~a); break;
                case 5: printf("Result: %d << 1 = %d\n", a, a << 1); break;
                case 6: printf("Result: %d >> 1 = %d\n", a, a >> 1); break;
                default: printf("Invalid bitwise choice!\n");
            }
            break;

        // ------------------------------
        case 4: 
            printf("\n--- ASSIGNMENT OPERATORS ---\n");
            printf("1. a += b\n");
            printf("2. a -= b\n");
            printf("3. a *= b\n");
            printf("4. a /= b\n");
            printf("5. a %%= b\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            switch(subChoice) {
                case 1: a += b; printf("Result (a += b): %d\n", a); break;
                case 2: a -= b; printf("Result (a -= b): %d\n", a); break;
                case 3: a *= b; printf("Result (a *= b): %d\n", a); break;
                case 4:
                    if (b != 0) { a /= b; printf("Result (a /= b): %d\n", a); }
                    else { printf("Error: Division by zero!\n"); }
                    break;
                case 5:
                    if (b != 0) { a %= b; printf("Result (a %%= b): %d\n", a); }
                    else { printf("Error: Modulo by zero!\n"); }
                    break;
                default: printf("Invalid assignment choice!\n");
            }
            break;

        // ------------------------------
        case 5:
            printf("\n--- INCREMENT / DECREMENT ---\n");
            printf("1. Pre-Increment (++a)\n");
            printf("2. Post-Increment (a++)\n");
            printf("3. Pre-Decrement (--a)\n");
            printf("4. Post-Decrement (a--)\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            switch(subChoice) {
                case 1: printf("Result: ++a = %d\n", ++a); break;
                case 2: printf("Result: a++ = %d\n", a++); printf("Now a = %d\n", a); break;
                case 3: printf("Result: --a = %d\n", --a); break;
                case 4: printf("Result: a-- = %d\n", a--); printf("Now a = %d\n", a); break;
                default: printf("Invalid increment/decrement choice!\n");
            }
            break;

        // ------------------------------
        default:
            printf("Invalid main menu choice!\n");
    }

    return 0;
}