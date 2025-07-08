# relation_mappers1
This C program allows users to define relationships between two characters using directional inputs. The goal is to eventually form a map of how multiple characters are spatially or logically related.

📜 Description
The program:

Takes two capital characters from the user.

Accepts a number input (1 to 4) representing their relationship direction:

1 → Right

2 → Up

3 → Left

4 → Down

Outputs a simple sentence describing the relation.

Repeats the process 4 times (can be expanded).

🧠 The structure person stores:

x = First character

z = Second character

y[4] = Relation codes (1 to 4)

📌 Sample Input / Output
css
Copy code
please enter two capital letters 
A 1 B
the A to B by right

please enter two capital letters 
B 3 C
the B to C by left
💾 Compilation
Make sure you have a C compiler (like gcc) and cs50.h installed.

To compile:

bash
Copy code
gcc -o relation relation.c -lcs50
To run:

bash
Copy code
./relation
🚧 Future Ideas
Visualize the full relation map using arrays or graphics

Allow dynamic number of inputs

Add labels like “friend”, “enemy”, etc.

Export relationships to a file

📁 File Structure
cpp
Copy code
relation.c     // Main C code
README.md      // This file
🙌 Credits
Created by Shaurya Sambyal as part of a C programming learning journey 💻✨

Let me know if you'd like me to generate a GitHub-friendly version with emoji titles and badges!
