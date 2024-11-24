#include <stdio.h>

int main() {
    // Declarar variables
    float potato_kilos, potato_price_no_vat;
    float apple_kilos, apple_price_no_vat;
    float book_price;
    float potato_amount, apple_amount, book_amount;
    float potato_vat, apple_vat, book_vat;
    float total_potato, total_apple, total_book, total_purchase;

    // IVA
    const float VAT_POTATO_APPLE = 0.21;
    const float VAT_BOOK = 0.10;

    // Solicitar datos al usuario
    printf("Kg of potatoes purchased: ");
    scanf("%f", &potato_kilos);
    printf("Price per kilo of potatoes without VAT (in euros): ");
    scanf("%f", &potato_price_no_vat);

    printf("Kg of apples purchased: ");
    scanf("%f", &apple_kilos);
    printf("Price per kilo of apples without VAT (in euros): ");
    scanf("%f", &apple_price_no_vat);

    printf("Price of the book without VAT (in euros): ");
    scanf("%f", &book_price);

    // Calcular importes y IVA
    potato_amount = potato_kilos * potato_price_no_vat;
    potato_vat = potato_amount * VAT_POTATO_APPLE;
    total_potato = potato_amount + potato_vat;

    apple_amount = apple_kilos * apple_price_no_vat;
    apple_vat = apple_amount * VAT_POTATO_APPLE;
    total_apple = apple_amount + apple_vat;

    book_amount = book_price;
    book_vat = book_amount * VAT_BOOK;
    total_book = book_amount + book_vat;

    // Calcular total de la compra
    total_purchase = total_potato + total_apple + total_book;

    // Mostrar ticket
    printf("\n--------------------------------------------------------------------------------------\n");
    printf("Receipt 1/1\n");
    printf(" Potatoes %.0f kg %.2f€ %.2f€ %.2f€ (VAT 21%%)\n", potato_kilos, potato_price_no_vat, potato_amount, total_potato);
    printf(" Apples %.0f kg %.2f€ %.2f€ %.2f€ (VAT 21%%)\n", apple_kilos, apple_price_no_vat, apple_amount, total_apple);
    printf(" Book 1 %.2f€ %.2f€ %.2f€ (VAT 10%%)\n", book_price, book_amount, total_book);
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("TOTAL %.2f€\n", total_purchase);
    printf("--------------------------------------------------------------------------------------\n");

    return 0;
}
