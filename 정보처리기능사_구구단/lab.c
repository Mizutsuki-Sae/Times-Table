// #include <stdio.h>

// int i, j = 0;

// int main() {
//     for(i = 1; i <= 9; i++) {
//         for(j = 1; j <= 9; j++) {
//             printf("\n\n=======%d단=======\n\n%d X %d = %d\n", i, i, j, i * j);
//         }
//     }
// return 0;
// }



// #include <stdio.h>

// int i, j = 0;

// int main() {

//     for(i = 1; i <= 9; i++) {
//         printf("\n\n=======%d단=======\n\n");
//     }

//         for(i = 1; i <= 9; i++) {
//             for(j = 1; j <= 9; j++) {
//                 printf("%d X %d = %d\n", i, i, j, i * j);
//                         }
//         printf("\n");
//         }

// return 0;
// }



// #include <stdio.h>

// int i, j = 0;

// int main() {

//         for(i = 1; i <= 9; i++) {
//             printf("=======%d단=======\n\n", i);

//             for(j = 1; j <= 9; j++) {
//                 printf("%d X %d = %d\n", i, i, j, i * j);
//                         }
//         printf("\n");
//         }

// return 0;
// }


// 출력 예상

// =======i단=======

// i X j = i * j
// (i + 1) X (j + 1) = (i + 1) * (j + 1)
//  .
//  .
//  .


// 결과

// =======1단=======

// 1 X 1 = 1
// 1 X 1 = 2
// 1 X 1 = 3
// 1 X 1 = 4
// 1 X 1 = 5
// 1 X 1 = 6
// 1 X 1 = 7
// 1 X 1 = 8
// 1 X 1 = 9
//  .
//  .
//  .


// 현재 문제점

// =======i단=======     여긴 문제X

// 1 X 1 = 1    O
// 1 X 1 = 2    X, i까지는 좋았는데 j에 +1이 안됨... i * j 쪽에서는 어째서인지 출력이 정상적임.
// 1 X 1 = 3    X, 위와 동일
//  .
//  .
//  .

// for(j = 1; j <= 9; j++) {
//                 printf("%d X %d = %d\n", i, i, j, i * j);    이쪽에 문제가 있을 것이라 예상...
//                         }


// 문제 해결

//                 printf("%d X %d = %d\n", i, i, j, i * j);
//                 printf("%d X %d = %d\n", i, j, i * j); 로 수정
//                                          i가 하나 더 있었음, 그래서 출력이 저랬던 것.
