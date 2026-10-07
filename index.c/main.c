#include <stdio.h>

int main()
{
    // 📝 1. CREATE AN ARRAY
    // Allocates a row of 8 memory boxes named 'suraj' and fills them with numbers 1 to 8.
    int suraj[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    // 📝 2. OVERWRITE THE FIRST BOX
    // Changes the very first box (index 0) from 1 to 200.
    suraj[0] = 200;

    // 📝 3. PRINT THE NEW VALUE
    // Output: 200
    printf("%d\n", suraj[0]);

    // 📝 4. CREATE A NEW VARIABLE
    // Computer grabs a recycled box, names it 'why'. It contains random trash data right now.
    int why;
    
    // 📝 5. BACKUP THE VALUE
    // Copies the '200' from suraj[0] and safely stores it inside the 'why' box.
    // 'why' is no longer trash; it is now exactly 200.
    why = suraj[0];
  
    // 📝 6. WIPE THE ARRAY BOX
    // Changes suraj[0] to 0. (But 'why' still safely holds 200!)
    suraj[0] = 0;
    
    // 📝 7. RESTORE THE VALUE
    // Copies the 200 from 'why' back into suraj[0].
    suraj[0] = why;
    
    // 📝 8. PRINT BOTH VALUES
    // Output: 
    // 200-
    // 200-
    printf("%d-\n%d-\n", suraj[0], why);
    
    // 📝 9. FINAL PRINT
    // Output: this is why 200
    printf("this is why %d\n", why);
  
    return 0;
}
