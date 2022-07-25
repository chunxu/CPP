# Write a C++ program that displays a Letter Pyramid from a user-provided std::string.

# Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:

# It's much easier to understand the Letter Pyramid given examples.

# If the user enters the string "ABC", then your program should display:

#   A                                                                                                                    
#  ABA                                                                                                                   
# ABCBA 


# If the user enters the string, "12345", then your program should display:

 

#     1                                                                                                                  
#    121                                                                                                                 
#   12321                                                                                                                
#  1234321                                                                                                               
# 123454321
 

# If the user enters 'ABCDEFG', then your program should display:

 

#       A                                                                                                                
#      ABA                                                                                                               
#     ABCBA                                                                                                              
#    ABCDCBA                                                                                                             
#   ABCDEDCBA                                                                                                            
#  ABCDEFEDCBA                                                                                                           
# ABCDEFGFEDCBA
# If the user enters 'ABCDEFGHIJKLMNOPQRSTUVWXYZ', then your program should display:

#                          A
#                         ABA
#                        ABCBA
#                       ABCDCBA
#                      ABCDEDCBA
#                     ABCDEFEDCBA
#                    ABCDEFGFEDCBA
#                   ABCDEFGHGFEDCBA
#                  ABCDEFGHIHGFEDCBA
#                 ABCDEFGHIJIHGFEDCBA
#                ABCDEFGHIJKJIHGFEDCBA
#               ABCDEFGHIJKLKJIHGFEDCBA
#              ABCDEFGHIJKLMLKJIHGFEDCBA
#             ABCDEFGHIJKLMNMLKJIHGFEDCBA
#            ABCDEFGHIJKLMNONMLKJIHGFEDCBA
#           ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA
#          ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA
#         ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA
#        ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA
#       ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA
#      ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA
#     ABCDEFGHIJKLMNOPQRSTUVUTSRQPONMLKJIHGFEDCBA
#    ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA
#   ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQPONMLKJIHGFEDCBA
#  ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA
# ABCDEFGHIJKLMNOPQRSTUVWXYZYXWVUTSRQPONMLKJIHGFEDCBA
# If the user enters "C++isFun!", then your program should display:

 

#         C                                                                                                              
#        C+C                                                                                                             
#       C+++C                                                                                                            
#      C++i++C                                                                                                           
#     C++isi++C                                                                                                          
#    C++isFsi++C                                                                                                         
#   C++isFuFsi++C                                                                                                        
#  C++isFunuFsi++C                                                                                                       
# C++isFun!nuFsi++C


#thinking

# Get the input from the user and store it in a std::string variable
# Loop for each letter in the string entered by the user
#     Determine how many blank spaces must be displayed before the current row and display them
#     Determine how many letters must be displayed before the current character and display them
#     Display the current character
#     Display the remaining characters in reverse order
#     Complete the row with a new line

