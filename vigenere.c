#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

#define WRONGMESS "Usage: ./vigenere keyword\n"

int shift(char c);

int main(int argc, string argv[]){
    int key;
    
     // if two arguments is not given
    if (argc != 2){
        printf(WRONGMESS);
        return 1;
    } else {
        // ensure every character of the keyword is alphabetic
        for (int i = 1; i < argc; i++){
            for (int j = 0, n = strlen(argv[i]); j < n; j++){
                if (isalpha(argv[i][j]) == 0) {                 // if at least one non alpha, break
                    printf(WRONGMESS);
//                     break;
                    return 1;
                }
            }// All are alpha's! Proceede!
//                    printf("I: %i\n",(int)strlen(argv[1]));
//                    printf("argv[1]: %s\n",argv[1]);
//                    printf("argv[1][0]: %c\n",argv[1][0]);
                    
                     
                    string s = get_string("plaintext:  ");
                    printf("ciphertext: ");
                    
                    char arr[100]; //array of chars in string s
                    int arr_keys[strlen(s)]; //array of chars string argv[]
            
//    /*  Block ARR1 for fulfil an arr_keys[] of pattern s chars. 
//                      arr3 = arr2arr2arr2arr2     (len arr3 == len arr1)
//                  Ex: argv[i]=bacon -> arr_keys[strlen(s)] = "baconbaconbacon"
//                  
                    
                    int arr1[strlen(s)];// = {1,2,3,4,5,6,7,8,9,10};    // make char s[]        
                    int sLen = 0;
//             /*
                    for(int IndexChS = 0, t = strlen(s); IndexChS < t; IndexChS++){    
                        arr1[IndexChS] = s[IndexChS];
                        ++sLen;
//                         printf("s[%i]=%i, len=%i\n",IndexChS,s[IndexChS],sLen);            
                    }
//                      printf("sLen48: %i\n",sLen);
//             */
        //!!! CHECK print ARR1[plaintext: 'asdf']: (ARR1: s[0]=97=a, len=4, ARR1: s[1]=115=s, len=4, ARR1: s[2]=100=d, len=4, ARR1: s[3]=102=f, len=4)
//                     printf("\n");
//                     for(int IndexChS = 0, t = strlen(s); IndexChS < t; IndexChS++){    
//                         printf("ARR1: s[%i]=%i=%c, len=%i\n",IndexChS,s[IndexChS],s[IndexChS],t);
//                     }        
            
            
         
//        /*  Block ARR2 of making arr_keys[] from argv[1] 
                    char arr2[(int)strlen(argv[1])];// = {'a','b','c','d'}; // // B
                    int argvLen = 0;
                    for (int Z = 0, n = (int)strlen(argv[1]); Z < n; Z++){             
                        arr2[Z] = argv[1][Z];
                        argvLen++;                                                     
                    }
                   

//                     char arr_keys[10];      // if arr3[100] adds some code          
//                     
        //!!! CHECK print ARR2
//                     printf("\n");
//                     for(int IndexChS = 0, t = argvLen; IndexChS < t; IndexChS++){    
//                         printf("ARR2: s[%i]=%i=%c, len=%i\n",IndexChS,arr2[IndexChS],arr2[IndexChS],t);
//                     } 
//                     printf("\n");
            
//        /*  Block ARR3 create 
                    char arr3[strlen(s)];
//                      /*           
     // BLOCK 3: times = Z*length2 + frac : [10=2*4+2]                              
                    int length2 = argvLen;     // 4
//             printf("length2: %i\n",length2);
                    int Z = sLen / argvLen;    // 2 
//             printf("Z: %i\n",Z);
                    int frac = sLen % argvLen; // 2
//             printf("frac: %i\n",frac);
                    int times = Z*length2 + frac;
//             printf("times: %i\n",times);

                    int z = 0;
                    for (int s_key_var = 0; s_key_var < length2; ){
                        for (int j = 0; j < times; j++){
                            if (isalpha(s[j]) == 0){
                                arr3[j] = s[j];
                                continue;
                            }
                            arr3[j] = arr2[z%length2];
//                             printf("ARR3: [%i-%i] -> [%c]\n",s_key_var,z,arr2[z%length2]);
                            ++z;
                        }
                        break;
                    }
//                     printf("\n");
            /* CHECK ARR3
                    for(int IndexChS = 0, t = strlen(s); IndexChS < t; IndexChS++){    
                        printf("ARR3: s[%i]=%i=%c, len=%i\n",IndexChS,arr3[IndexChS],arr3[IndexChS],t);
                    }
                    printf("\n");
//          */
//                      printf("\n");        
//    */   END of Block for fulfil an array of pattern.
            
        // Block arr_key[] is coppying from ARR3
//                     char arr2[(int)strlen(argv[1])];// = {'a','b','c','d'}; // // B
//                     int argvLen = 0;
                    for (int var1 = 0, n = strlen(s); var1 < n; var1++){             
                        arr_keys[var1] = arr3[var1];
//                         argvLen++;                                                     
                    }
            
            
            
//                     printf("ARGV %c\n",argv[i][1]);
      /* make an array of of chars string argv[] of strlen(s) length
                       char arr_keys[] = {1,0,2,13,1,0,2,13,1,0,2,13,1,0,2,13,1,0,2};
                    char arr_keys[] = "bacon";
     
                    for(int k = 0, t = strlen(s); k < t; k++){
                        for (int Z = 0, n = (int)strlen(argv[1]); Z < n; Z++){
//                             printf("Z: %i\n",Z);
//                             printf("N: %i\n",argv[1][Z]);
                            arr_keys[k] = shift(argv[1][Z]);
//                             printf("Key: %i\n", arr_keys[k]);
                        }
                    }
            
                    for (int Z = 0, n = (int)strlen(argv[1]); Z < n; Z++){
                            printf("Key[%i]: %i\n",Z, arr_keys[Z]);
                        }
//                     printf("ARR: %i\n", arr_keys);
        END */  
            
        /* NEW BLOCK of converting s-"plaintext:" to arr-array of converted
        /                     Meet -> Negh
        */
                    for(int k = 0, t = strlen(s); k < t; k++){        // for each char in s - "plaintext:"
//                         ch = s[k];
//                         printf("BEFORE FOR: %c --> ", s[k]);
//                         for (int y = 0; y < t; y++){
                        if (isalpha(s[k])){                 // if alpha
                            if (islower(s[k])){
//                                 printf("arr_key %i\n",arr_keys[k]);
                                arr[k] = ((s[k] - 97 + shift(arr_keys[k]))%26)+97; //shift(arr_keys[k])
//                                 printf("IS LOW: %c [%i]\n", arr[k],arr[k]);
//                             }
                            } else if (isupper(s[k])){
                                arr[k] = ((s[k] - 65 + shift(arr_keys[k]))%26)+65; //shift(arr_keys[k])
//                                 printf("IS UPP: %c [%i]\n", arr[k],arr[k]);
                            }
                        } else {                             // if not alpha
//                             if(s[k] == ' '){
//                                 s[k] = ' ';
//                             } 
                            arr[k] = s[k];
//                             printf("IS NOT ALPHA: %c\n", arr[k]);
                        }
//                         }
                        printf("%c", arr[k]);    // [ciphertext:] + arr[k]
                    }  
                    printf("\n");   
//                     shift('z');
                }
            }
        }


int shift(char c){
    c = toupper(c); // to choose from only one list - upper case
    // convert to int
    if (c >= 'A' && c <= 'Z'){
        c = (int)c - 65;                // ASCII: 'A'==65, .. , 'Z'==90. Respectively 0..25
//         printf("single char: %i\n", (int)c);
        
        return (int)c;
    } else {
        return c;
    }

}

