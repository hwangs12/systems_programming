/**
 * The following if statement is
 * unnecessarily complicated.
 * Simplify it as much as possible
 * (Hint: The entire statement can be
 * replaced by a single assignment)
 */
#include <stdbool.h>


int main(void)
{
    int age = 10;
    bool teenager;
    if (age >= 13) {
        if (age <= 19) {
            teenager = true;
        } else {
            teenager = false;
        }
    } else if (age < 13) {
        teenager = false;
    }

    // can be simplified
    if (age >= 13 && age <= 19) {
        teenager = true;
    } else if (age > 19) {
        teenager = false;
    } else {
        teenager = false;
    }

    // can be simplified?
    if (age > 19) {
        teenager = false;
    } else if (age >= 13) {
        teenager = true;
    } else {
        teenager = false;
    }

    // can be simplified?
    teenager = age <= 19 && age >= 13;
}