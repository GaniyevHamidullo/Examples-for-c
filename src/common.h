#ifndef COMMON_H
#define COMMON_H
//
#define MAX 78
typedef enum{
 TOKEN_INT
}TokenType;
typedef struct{
   TokenType type;
   typedef union{
    }value;
}Token;
#endif
