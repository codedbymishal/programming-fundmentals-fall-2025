
int main()
 {
    int num;
    printf("\t\t\t\t\t Check Bits\n\n");
    printf("Enter an 8 bit number (0-255): ");
    scanf("%d", &num);

    printf("Number before: %d\n", num);//prints decimal number

    if (num & 8)//Bitwise AND checks if 4th bit is ON
	{ 
        num = num & (~8);// If 4th bit is ON it turns it OFF and updates num. Rest of the bits remain same.
    }
    
    if (num & 64)//Bitwise AND checks if 7th bit is ON
	{ 
        num = num & (~64);// If 7th bit is ON it turns it OFF and updates num. Rest of the bits remain same.
    }

    printf("Number after turning OFF 4th and 7th bits if they were ON: %d\n", num);//prints decimal number
    
    return 0;
}

