long long just::analyzer::Analyzer::define(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    unsigned long long v0;  // [bp-0x160]
    unsigned long long v1;  // [bp-0x158]
    unsigned long long v2;  // [bp-0x150]
    unsigned long long v3;  // [bp-0x150]
    struct_0 *v4;  // [bp-0x148]
    unsigned long long v5;  // [bp-0x140]
    unsigned long long v6;  // [bp-0x138]
    int v7;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x128]
    int v9;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x118]
    int v11;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long v12;  // [bp-0x108]
    int v13;  // [bp-0x100]
    unsigned long v14;  // [bp-0xf0]
    int v15;  // [bp-0xd8]
    int v16;  // [bp-0xc8]
    int v17;  // [bp-0xb8]
    int v18;  // [bp-0xa8]
    unsigned long v19;  // [bp-0x98]
    char v20;  // [bp-0x88]
    void* v22;  // rax
    void* v23;  // r14
    unsigned long v25;  // rbx
    unsigned long v27;  // r14
    unsigned long long v28;  // 4096
    unsigned long long v30;  // rbp
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rax
    int v33;  // xmm1
    int v34;  // xmm2
    int v35;  // xmm3
    unsigned long long v36;  // rdx

    v22 = a1.get_inner(a2.lexeme(), a2);
    if (v22)
    {
        v23 = v22;
        v2 = (long long)v22[16];
        v1 = (long long)v22[24];
        if (!a5 || !(char)(long long)v22[16].equal((long long)v22[24], a3, a4))
        {
            v25 = *((long long *)(a2 + 48));
            if (*((long long *)(a2 + 48)) < (long long)v23[80])
            {
                v0 = a4;
                v3 = v2;
                v27 = v23 + 32;
                v28 = a3;
            }
            else
            {
                v25 = (long long)v23[80];
                v0 = v1;
                v3 = a3;
                v27 = a2;
                v28 = v2;
                v1 = a4;
            }
            v30 = v3;
            v19 = *((long long *)(v27 + 64));
            *((int128_t *)&v18) = *((int128_t *)(v27 + 48));
            *((int128_t *)&v17) = *((int128_t *)(v27 + 32));
            *((int128_t *)&v16) = *((int128_t *)(v27 + 16));
            *((int128_t *)&v15) = *((int128_t *)v27);
            v12 = v25;
            v6 = v28;
            v7 = v0;
            v8 = a2.lexeme();
            v9 = v31;
            v10 = v30;
            v11 = v1;
            v5 = 9223372036854775856;
            return a0.error(&v15, &v5);
        }
    }
    v32 = a2.lexeme();
    v5 = a3;
    v6 = a4;
    v33 = *((int128_t *)(a2 + 16));
    v34 = *((int128_t *)(a2 + 32));
    v35 = *((int128_t *)(a2 + 48));
    *((int128_t *)&v7) = *((int128_t *)a2);
    v9 = v33;
    v11 = v34;
    v13 = v35;
    v14 = *((long long *)(a2 + 64));
    v20.insert(a1, v32, v36, &v5);
    v4->field_48 = 37;
    return a0;
}
