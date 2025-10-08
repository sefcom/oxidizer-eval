long long just::evaluator::Evaluator::evaluate_assignment(void* a0, unsigned long long a1[7], struct_0 *a2)
{
    int v0;  // [bp-0xc8], Other Possible Types: char
    char v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    int v3;  // [bp-0xb0], Other Possible Types: char
    char v4;  // [bp-0xa8]
    int v5;  // [bp-0xa0]
    char v6;  // [bp-0x98]
    int v7;  // [bp-0x90]
    char v8;  // [bp-0x88]
    int v9;  // [bp-0x80]
    char v10;  // [bp-0x78]
    unsigned long v11;  // [bp-0x70]
    unsigned int v12;  // [bp-0x68]
    char v13;  // [bp-0x64]
    char v14;  // [bp-0x63]
    char v15;  // [bp-0x62]
    int v16;  // [bp-0x58]
    int v17;  // [bp-0x51]
    char v18;  // [bp-0x49]
    unsigned long long v19;  // [bp-0x41]
    unsigned long v21;  // rbp
    unsigned long long v22;  // rax
    unsigned long v23;  // r14
    unsigned long long v24;  // rdx
    unsigned long v25;  // rax
    int v26;  // xmm0
    char v27;  // al
    int v28;  // xmm0
    int v29;  // xmm1
    int v30;  // xmm2
    int v31;  // xmm2
    int v32;  // xmm3
    unsigned long long v33;  // rax

    v21 = &a2->field_80;
    v22 = v21.lexeme();
    v23 = &a1[5];
    if (!a1[5].bound(a1[6], v22, v24))
    {
        v0.evaluate_expression(a1, a2);
        v25 = v0;
        if ((char)v25 != 56)
        {
            v31 = *((int128_t *)&v4);
            v32 = *((int128_t *)&v6);
            memcpy(&v18, &(char)v2, 16);
            *((int128_t *)&v16) = (int128_t)v0;
            *((long long *)&a0[96]) = *((long long *)&v12);
            *((int128_t *)&a0[80]) = *((int128_t *)&v10);
            *((int128_t *)&a0[64]) = *((int128_t *)&v8);
            a0[48] = v32;
            a0[32] = v31;
            *((int128_t *)&a0[16]) = *((int128_t *)&v18);
            *((int128_t *)&a0[1]) = (int128_t)v16;
            *((char *)a0) = v25;
            return v25;
        }
        v19 = *((long long *)&v3);
        v26 = *((int128_t *)&v1);
        v17 = v26;
        v2 = v19;
        v0 = v26;
        v27 = a2->field_cd;
        v11 = *((long long *)(v21 + 64));
        v28 = *((int128_t *)v21);
        v29 = *((int128_t *)(v21 + 16));
        v30 = *((int128_t *)(v21 + 32));
        *((int128_t *)&v9) = *((int128_t *)(v21 + 48));
        v7 = v30;
        v5 = v29;
        v3 = v28;
        v13 = 0;
        v14 = v27;
        v12 = 0;
        v15 = a2->field_ce;
        v23.bind(&v0);
    }
    v33 = v23.value(v22, v24);
    if (!v33)
        core::option::unwrap_failed(&g_82fb08); /* do not return */
    *((unsigned long long *)&a0[8]) = v33;
    *((unsigned long long *)&a0[16]) = v24;
    *((char *)a0) = 56;
    return v33;
}
