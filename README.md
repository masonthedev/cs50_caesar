# cs50_caesar
My implementation of a caesar cipher using C

CS50 Problem set 2: Caesar Cipher

Caesar cypher c = (p + k) % 26

1. First, I checked if the user input the correct number of command-line arguments. Printed an error message and return from with a non-zero value if not.

2. Next, converted the key from a string to an integer. Key stored in argv[1]

3. Then, prompted the user for a string of plaintext.

4. Iterated over each character in the plaintext. If the character is a letter, shift it by the key (making sure to preserve case). If the character is not a letter, leave it unchanged.

5. Finally, print out the ciphertext and return from main with a value of 0.
