//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------- Function Prototypes --------------------

void ___function_1f6b(int32_t a1);
void __function_1edd(int32_t a1, int32_t a2);
void __function_1f3c(int32_t a1);
void _function_1d0d(int32_t a1, int32_t a2);
void _function_1d8e(int32_t a1, int32_t a2);
void _function_1e6c(int32_t a1);
void _function_1ebd(int32_t a1);
void function_17ed(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15);
void function_188e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
void function_19bd(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10);
void function_1a2e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
void function_1c5c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10);
void function_1cce(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
void function_1d7c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
void function_1dde(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // eax
int32_t g2 = 0; // ebp

// ------------------------ Functions -------------------------

// Address range: 0x17e0 - 0x17ec
int main(int argc, char ** argv) {
    int32_t v1;
    g2 = &v1;
    int32_t v2;
    function_17ed(v2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    return g1;
}

// Address range: 0x17ed - 0x187f
void function_17ed(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15) {
    int32_t v1 = g2; // 0x17ee
    *(int32_t *)(v1 - 12) = 0;
    *(int32_t *)(g2 - 16) = *(int32_t *)(v1 + 8);
    *(int32_t *)(g2 - 20) = *(int32_t *)(v1 + 12);
    int32_t v2;
    *(int32_t *)(v2 + 2083) = v1 - 24;
    int32_t v3 = g2; // 0x180c
    *(int32_t *)(v3 - 32) = v2;
    *(int32_t *)(g2 - 36) = 0;
    _function_1d0d(*(int32_t *)(v3 - 28), 0);
    g1 = *(int32_t *)(*(int32_t *)(g2 - 32) + 2079);
}

// Address range: 0x1880 - 0x188d
void _function_1d0d(int32_t a1, int32_t a2) {
    int32_t v1;
    g2 = &v1;
    int32_t v2;
    function_188e(v2, 0, 0, 0, 0, 0, 0);
}

// Address range: 0x188e - 0x19af
void function_188e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t v1 = g2; // 0x188f
    int32_t v2;
    *(int32_t *)(v1 - 72) = v2;
    int32_t v3 = g2; // 0x18a1
    *(int32_t *)(v3 - 76) = *(int32_t *)(v3 + 28);
    int32_t v4 = g2; // 0x18a7
    *(int32_t *)(v4 - 80) = *(int32_t *)(v4 + 24);
    int32_t v5 = g2; // 0x18ad
    *(int32_t *)(v5 - 84) = *(int32_t *)(v5 + 20);
    int32_t v6 = g2; // 0x18b3
    *(int32_t *)(v6 - 88) = *(int32_t *)(v6 + 16);
    int32_t v7 = g2; // 0x18b9
    *(int32_t *)(v7 - 92) = *(int32_t *)(v7 + 12);
    int32_t v8 = g2; // 0x18bf
    *(int32_t *)(v8 - 96) = *(int32_t *)(v8 + 8);
    *(int32_t *)(g2 - 100) = 0;
    int32_t v9 = g2; // 0x18ca
    *(int32_t *)(v9 - 16) = *(int32_t *)(v9 - 96);
    int32_t v10 = g2; // 0x18d0
    *(int32_t *)(v10 - 20) = *(int32_t *)(v10 - 92);
    int32_t v11 = g2; // 0x18d6
    *(int32_t *)(v11 - 24) = *(int32_t *)(v11 - 88);
    int32_t v12 = g2; // 0x18dc
    *(int32_t *)(v12 - 28) = *(int32_t *)(v12 - 84);
    int32_t v13 = g2; // 0x18e2
    *(int32_t *)(v13 - 32) = *(int32_t *)(v13 - 80);
    int32_t v14 = g2; // 0x18e8
    *(int32_t *)(v14 - 36) = *(int32_t *)(v14 - 76);
    *(int32_t *)(g2 - 40) = *(int32_t *)(v1 + 32);
    *(int32_t *)(g2 - 44) = *(int32_t *)(v1 + 36);
    *(int32_t *)(g2 - 48) = *(int32_t *)(v1 + 40);
    *(int32_t *)(g2 - 52) = *(int32_t *)(v1 + 44);
    *(int32_t *)(g2 - 56) = *(int32_t *)(v1 + 48);
    int32_t v15 = g2; // 0x18fd
    int32_t v16 = *(int32_t *)(v15 - 72); // 0x18fd
    *(int32_t *)(v15 - 60) = *(int32_t *)(v16 + 1922);
    *(int32_t *)(*(int32_t *)(g2 - 60) - 12) = 0;
    int32_t v17 = *(int32_t *)(*(int32_t *)(g2 - 60) + 8); // 0x1918
    *(int32_t *)(*(int32_t *)(v16 + 1922) - 16) = v17;
    int32_t v18 = *(int32_t *)(*(int32_t *)(g2 - 60) + 12); // 0x1929
    *(int32_t *)(*(int32_t *)(v16 + 1922) - 20) = v18;
    int32_t v19 = g2; // 0x1937
    int32_t v20 = *(int32_t *)(v19 - 64); // 0x193d
    *(int32_t *)(v20 + 771) = *(int32_t *)(v19 - 60) - 24;
    *(int32_t *)(g2 - 68) = *(int32_t *)(v16 + 1922);
    int32_t v21 = g2; // 0x194f
    *(int32_t *)(*(int32_t *)(v21 - 68) - 32) = *(int32_t *)(v21 - 64);
    *(int32_t *)(*(int32_t *)(v16 + 1922) - 36) = 0;
    __function_1edd(*(int32_t *)(*(int32_t *)(g2 - 68) - 28), 0);
    int32_t v22 = *(int32_t *)(g2 - 72); // 0x1981
    int32_t v23 = *(int32_t *)(*(int32_t *)(*(int32_t *)(v22 + 1922) - 32) + 767); // 0x198f
    *(int32_t *)(v22 + 1918) = v23;
    int32_t v24;
    g2 = v24;
}

// Address range: 0x19b0 - 0x19bc
void __function_1edd(int32_t a1, int32_t a2) {
    int32_t v1;
    g2 = &v1;
    int32_t v2;
    function_19bd(v2, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

// Address range: 0x19bd - 0x1a1f
void function_19bd(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    int32_t v1 = g2; // 0x19be
    *(int32_t *)(v1 - 12) = *(int32_t *)(v1 + 8);
    *(int32_t *)(g2 - 16) = *(int32_t *)(v1 + 12);
    int32_t v2;
    *(int32_t *)(v2 + 1619) = v1 - 20;
    int32_t v3 = g2; // 0x19d5
    *(int32_t *)(v3 - 28) = 0;
    _function_1d8e(*(int32_t *)(v3 - 24), 0);
    int32_t v4;
    g2 = v4;
}

// Address range: 0x1a20 - 0x1a2d
void _function_1d8e(int32_t a1, int32_t a2) {
    int32_t v1;
    g2 = &v1;
    int32_t v2;
    function_1a2e(v2, 0, 0, 0, 0, 0);
}

// Address range: 0x1a2e - 0x1c4f
void function_1a2e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = g2; // 0x1a2f
    int32_t v2;
    *(int32_t *)(v1 - 100) = v2;
    int32_t v3 = g2; // 0x1a41
    *(int32_t *)(v3 - 16) = *(int32_t *)(v3 + 8);
    *(int32_t *)(g2 - 20) = *(int32_t *)(v1 + 12);
    *(int32_t *)(g2 - 24) = *(int32_t *)(v1 + 16);
    *(int32_t *)(g2 - 28) = *(int32_t *)(v1 + 20);
    *(int32_t *)(g2 - 32) = *(int32_t *)(v1 + 24);
    *(int32_t *)(g2 - 36) = *(int32_t *)(v1 + 28);
    int32_t v4 = g2; // 0x1a56
    int32_t v5 = *(int32_t *)(v4 - 100); // 0x1a56
    *(int32_t *)(v4 - 40) = *(int32_t *)(v5 + 1506);
    int32_t v6 = g2; // 0x1a62
    *(int32_t *)(*(int32_t *)(v6 - 40) - 56) = *(int32_t *)(v6 - 44);
    *(int32_t *)(g2 - 48) = *(int32_t *)(v5 + 1506);
    int32_t * v7 = (int32_t *)(g2 - 48); // 0x1a76_0
    *(int32_t *)(*v7 - 60) = *(int32_t *)(*v7 + 12);
    *(int32_t *)(g2 - 52) = *(int32_t *)(v5 + 1506);
    int32_t * v8 = (int32_t *)(g2 - 52); // 0x1a8d_0
    *(int32_t *)(*v8 - 16) = *(int32_t *)(*v8 + 8);
    *(int32_t *)(g2 - 56) = *(int32_t *)(v5 + 1506);
    int32_t * v9 = (int32_t *)(g2 - 56); // 0x1aa4_0
    *(int32_t *)(*v9 - 20) = *(int32_t *)(*v9 - 60);
    int32_t v10 = *(int32_t *)(*(int32_t *)(g2 - 40) + 16); // 0x1ab7
    *(int32_t *)(*(int32_t *)(v5 + 1506) - 24) = v10;
    int32_t v11 = *(int32_t *)(*(int32_t *)(g2 - 40) + 20); // 0x1ac8
    *(int32_t *)(*(int32_t *)(v5 + 1506) - 28) = v11;
    int32_t v12 = *(int32_t *)(*(int32_t *)(g2 - 40) + 24); // 0x1ad9
    *(int32_t *)(*(int32_t *)(v5 + 1506) - 32) = v12;
    int32_t v13 = *(int32_t *)(*(int32_t *)(g2 - 40) + 28); // 0x1aea
    *(int32_t *)(*(int32_t *)(v5 + 1506) - 36) = v13;
    int32_t v14 = *(int32_t *)(*(int32_t *)(g2 - 40) + 32); // 0x1afb
    *(int32_t *)(*(int32_t *)(v5 + 1506) - 40) = v14;
    *(int32_t *)(g2 - 60) = *(int32_t *)(v5 + 1506);
    int32_t v15 = g2; // 0x1b12
    *(int32_t *)(v15 - 64) = *(int32_t *)(*(int32_t *)(v15 - 60) - 56);
    int32_t v16 = g2; // 0x1b1d
    int32_t v17 = *(int32_t *)(v16 - 60); // 0x1b26
    *(int32_t *)(v17 - 44) = *(int32_t *)(*(int32_t *)(v16 - 64) + 642);
    *(int32_t *)(*(int32_t *)(*(int32_t *)(v5 + 1506) - 44) - 12) = 0;
    int32_t v18 = *(int32_t *)(v5 + 1506); // 0x1b42
    *(int32_t *)(g2 - 68) = *(int32_t *)(*(int32_t *)(v18 - 44) + 8);
    int32_t v19 = g2; // 0x1b53
    int32_t v20 = *(int32_t *)(v19 - 64); // 0x1b56
    *(int32_t *)(*(int32_t *)(v20 + 642) - 16) = *(int32_t *)(v19 - 68);
    int32_t v21 = *(int32_t *)(v5 + 1506); // 0x1b64
    *(int32_t *)(g2 - 72) = *(int32_t *)(*(int32_t *)(v21 - 44) + 12);
    int32_t v22 = g2; // 0x1b75
    int32_t v23 = *(int32_t *)(v22 - 64); // 0x1b78
    *(int32_t *)(*(int32_t *)(v23 + 642) - 20) = *(int32_t *)(v22 - 72);
    *(int32_t *)(g2 - 76) = *(int32_t *)(v5 + 1506);
    int32_t v24 = g2; // 0x1b8f
    *(int32_t *)(v24 - 80) = *(int32_t *)(*(int32_t *)(v24 - 76) - 48);
    int32_t v25 = g2; // 0x1b9a
    int32_t v26 = *(int32_t *)(v25 - 76); // 0x1b9a
    int32_t v27 = *(int32_t *)(v25 - 80); // 0x1ba5
    *(int32_t *)(v27 + 307) = *(int32_t *)(v26 - 44) - 24;
    int32_t v28 = *(int32_t *)(v5 + 1506); // 0x1bb7
    *(int32_t *)(v28 - 52) = *(int32_t *)(*(int32_t *)(g2 - 64) + 642);
    *(int32_t *)(g2 - 84) = *(int32_t *)(v5 + 1506);
    int32_t * v29 = (int32_t *)(g2 - 84); // 0x1bcb_0
    int32_t v30 = *(int32_t *)(*v29 - 52); // 0x1bd9
    *(int32_t *)(v30 - 32) = *(int32_t *)(*v29 - 48);
    *(int32_t *)(*(int32_t *)(*(int32_t *)(g2 - 64) + 642) - 36) = 0;
    int32_t v31 = *(int32_t *)(v5 + 1506); // 0x1bf2
    ___function_1f6b(*(int32_t *)(*(int32_t *)(v31 - 52) - 28));
    int32_t v32 = *(int32_t *)(g2 - 100); // 0x1c0a
    *(int32_t *)(g2 - 88) = *(int32_t *)(*(int32_t *)(v32 + 1506) - 56);
    int32_t v33 = *(int32_t *)(*(int32_t *)(g2 - 88) + 642); // 0x1c1e
    *(int32_t *)(g2 - 92) = *(int32_t *)(*(int32_t *)(v33 - 32) + 303);
    *(int32_t *)(*(int32_t *)(g2 - 88) + 638) = *(int32_t *)(g2 - 92);
    *(int32_t *)(v32 + 1506) = *(int32_t *)(g2 - 96);
}

// Address range: 0x1c50 - 0x1c5b
void ___function_1f6b(int32_t a1) {
    int32_t v1;
    g2 = &v1;
    int32_t v2;
    function_1c5c(v2, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

// Address range: 0x1c5c - 0x1cbf
void function_1c5c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    int32_t v1 = g2; // 0x1c5d
    *(int32_t *)(v1 - 8) = *(int32_t *)(v1 + 8);
    int32_t v2;
    *(int32_t *)(v2 + 948) = v1 - 12;
    int32_t v3 = g2; // 0x1c6e
    *(int32_t *)(v3 - 20) = 0;
    _function_1e6c(*(int32_t *)(v3 - 16));
    int32_t v4;
    g2 = v4;
}

// Address range: 0x1cc0 - 0x1ccd
void _function_1e6c(int32_t a1) {
    int32_t v1;
    g2 = &v1;
    int32_t v2;
    function_1cce(v2, 0, 0, 0, 0, 0);
}

// Address range: 0x1cce - 0x1d6f
void function_1cce(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = g2; // 0x1ccf
    int32_t v2;
    *(int32_t *)(v1 - 60) = v2;
    int32_t v3 = g2; // 0x1ce1
    *(int32_t *)(v3 - 64) = *(int32_t *)(v3 + 12);
    int32_t v4 = g2; // 0x1ce7
    *(int32_t *)(v4 - 16) = *(int32_t *)(v4 + 8);
    int32_t v5 = g2; // 0x1ced
    *(int32_t *)(v5 - 20) = *(int32_t *)(v5 - 64);
    *(int32_t *)(g2 - 24) = *(int32_t *)(v1 + 16);
    *(int32_t *)(g2 - 28) = *(int32_t *)(v1 + 20);
    *(int32_t *)(g2 - 32) = *(int32_t *)(v1 + 24);
    *(int32_t *)(g2 - 36) = *(int32_t *)(v1 + 28);
    *(int32_t *)(g2 - 40) = *(int32_t *)(v1 + 32);
    int32_t v6 = g2; // 0x1d02
    int32_t v7 = *(int32_t *)(v6 - 60); // 0x1d02
    *(int32_t *)(v6 - 44) = *(int32_t *)(v7 + 834);
    int32_t v8 = *(int32_t *)(g2 - 44); // 0x1d0e
    *(int32_t *)(v8 - 8) = *(int32_t *)(v8 + 8);
    int32_t v9 = g2; // 0x1d1c
    int32_t v10 = *(int32_t *)(v9 - 48); // 0x1d22
    *(int32_t *)(v10 + 420) = *(int32_t *)(v9 - 44) - 12;
    *(int32_t *)(g2 - 52) = *(int32_t *)(v7 + 834);
    *(int32_t *)(*(int32_t *)(g2 - 52) - 20) = 0;
    __function_1f3c(*(int32_t *)(*(int32_t *)(g2 - 52) - 16));
    *(int32_t *)(*(int32_t *)(g2 - 60) + 834) = *(int32_t *)(g2 - 56);
}

// Address range: 0x1d70 - 0x1d7b
void __function_1f3c(int32_t a1) {
    int32_t v1;
    g2 = &v1;
    int32_t v2;
    function_1d7c(v2, 0, 0, 0, 0, 0, 0, 0);
}

// Address range: 0x1d7c - 0x1dcf
void function_1d7c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t v1 = g2; // 0x1d7d
    *(int32_t *)(v1 - 8) = *(int32_t *)(v1 + 8);
    int32_t v2;
    *(int32_t *)(v2 + 660) = v1 - 12;
    int32_t v3 = g2; // 0x1d8e
    *(int32_t *)(v3 - 20) = 0;
    _function_1ebd(*(int32_t *)(v3 - 16));
    int32_t v4;
    g2 = v4;
}

// Address range: 0x1dd0 - 0x1ddd
void _function_1ebd(int32_t a1) {
    int32_t v1;
    g2 = &v1;
    int32_t v2;
    function_1dde((char *)v2, 0, 0, 0, 0, 0);
}

// Address range: 0x1dde - 0x1f96
void function_1dde(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    *(int32_t *)(g2 - 16) = *(int32_t *)(g2 + 8);
    *(int32_t *)(g2 - 20) = *(int32_t *)(g2 + 12);
    *(int32_t *)(g2 - 24) = *(int32_t *)(g2 + 16);
    *(int32_t *)(g2 - 28) = *(int32_t *)(g2 + 20);
    *(int32_t *)(g2 - 32) = *(int32_t *)(g2 + 24);
    int32_t v1;
    int32_t * v2 = (int32_t *)(v1 + 562); // 0x1dfd_0
    *(int32_t *)(*v2 - 12) = *(int32_t *)(*v2 + 8);
    int32_t * v3 = (int32_t *)(v1 + 562); // 0x1e11_0
    *(int32_t *)(*v3 - 16) = *(int32_t *)(*v3 + 12);
    int32_t * v4 = (int32_t *)(v1 + 562); // 0x1e25_0
    *(int32_t *)(*v4 - 20) = *(int32_t *)(*v4 + 16);
    int32_t * v5 = (int32_t *)(v1 + 562); // 0x1e39_0
    *(int32_t *)(*v5 - 24) = *(int32_t *)(*v5 + 20);
    *(int32_t *)(g2 - 40) = *(int32_t *)(g2 - 36) + 339;
    int32_t * v6 = (int32_t *)(g2 - 40); // 0x1e59_0
    int32_t v7 = *(int32_t *)(*(int32_t *)*v6 + 8); // 0x1e5e
    *(int32_t *)(*(int32_t *)*v6 - 8) = v7;
    *(int32_t *)(g2 - 44) = *(int32_t *)(g2 - 36) + 339;
    int32_t * v8 = (int32_t *)(g2 - 44); // 0x1e77_0
    int32_t v9 = *(int32_t *)(*(int32_t *)*v8 + 12); // 0x1e7c
    *(int32_t *)(*(int32_t *)*v8 - 12) = v9;
    *(int32_t *)(g2 - 48) = *(int32_t *)(g2 - 36) + 339;
    int32_t * v10 = (int32_t *)(g2 - 48); // 0x1e95_0
    int32_t v11 = *(int32_t *)(*(int32_t *)*v10 + 16); // 0x1e9a
    *(int32_t *)(*(int32_t *)*v10 - 16) = v11;
    int32_t v12 = *(int32_t *)(v1 + 562); // 0x1ea7
    *(int32_t *)(*(int32_t *)(*(int32_t *)(v12 - 28) + 212) - 4) = 0;
    int32_t v13 = *(int32_t *)(v1 + 562); // 0x1ec1
    int32_t v14 = *(int32_t *)(*(int32_t *)(g2 - 36) + 339); // 0x1ecf
    *(int32_t *)(v14 - 24) = *(int32_t *)(v13 - 28);
    int32_t v15 = *(int32_t *)(*(int32_t *)(g2 - 36) + 339); // 0x1edd
    *(int32_t *)(g2 - 52) = *(int32_t *)(v15 - 20);
    *(int32_t *)(*(int32_t *)(v1 + 562) - 44) = *(int32_t *)(g2 - 36);
    *(int32_t *)(g2 - 64) = v1;
    int32_t chars_printed = printf((char *)(*(int32_t *)(g2 - 52) + 63));
    int32_t v16 = *(int32_t *)(g2 - 64); // 0x1f0a
    *(int32_t *)(*(int32_t *)(v16 + 562) - 32) = chars_printed;
    *(int32_t *)(g2 - 56) = *(int32_t *)(*(int32_t *)(v16 + 562) - 44);
    int32_t v17 = *(int32_t *)(*(int32_t *)(g2 - 56) + 339); // 0x1f29
    *(int32_t *)(*(int32_t *)(v16 + 562) - 36) = *(int32_t *)(v17 - 24);
    *(int32_t *)(g2 - 60) = *(int32_t *)(*(int32_t *)(v16 + 562) - 36);
    int32_t v18 = *(int32_t *)(*(int32_t *)(g2 - 60) + 212); // 0x1f5b
    *(int32_t *)(v18 - 8) = *(int32_t *)(*(int32_t *)(v16 + 562) - 32);
    *(int32_t *)(*(int32_t *)(*(int32_t *)(v16 + 562) - 36) + 208) = 0;
    int32_t v19 = *(int32_t *)(v16 + 562); // 0x1f7b
    *(int32_t *)(*(int32_t *)(g2 - 56) + 339) = *(int32_t *)(v19 - 40);
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: upx (3.91 [lzma])
// Detected functions: 16
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-09-02 21:16:58
