long long just::justfile::Justfile::check_unstable(void* a0, struct_0 *a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0xd0]
    void* v1;  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc0]
    unsigned long v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    void* v5;  // [bp-0xa8]
    unsigned long v6;  // [bp-0xa0]
    unsigned long v7;  // [bp-0x98]
    unsigned long v8;  // [bp-0x90]
    int v9;  // [bp-0x80]
    unsigned long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    void* v12;  // [bp-0x60]
    unsigned long v13;  // [bp-0x58]
    unsigned long v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x48]
    void* v16;  // [bp-0x40]
    unsigned long v17;  // [bp-0x38]
    unsigned long v18;  // [bp-0x30]
    unsigned long v19;  // [bp-0x28]
    unsigned long v21;  // rbp
    unsigned long v22;  // rax
    unsigned long v23;  // rax
    char *v25;  // rax
    unsigned long v26;  // rax
    unsigned long v27;  // rax
    unsigned long v28;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    int v32;  // xmm0
    int v33;  // xmm1
    int v34;  // xmm2

    v21 = a2;
    v22 = a1->field_2d0;
    v23 = v22;
    if (v23)
        v23 = a1->field_2e0;
    v0 = v22;
    v1 = 0;
    v2 = v22;
    v3 = a1->field_2d8;
    v4 = v0;
    v5 = 0;
    v6 = v22;
    v7 = a1->field_2d8;
    v8 = v23;
    v25 = v0.next();
    if (v25 && !((char)v21 & 1) && !a1->field_1eb)
    {
        v26 = *(v25);
        *((char *)a0) = 54;
        *((char *)&a0[1]) = v26;
        return v26;
    }
    v27 = a1->field_2a0;
    v28 = v27;
    if (v28)
        v28 = a1->field_2b0;
    v11 = v27;
    v12 = 0;
    v13 = v27;
    v14 = a1->field_2a8;
    v15 = v11;
    v16 = 0;
    v17 = v27;
    v18 = a1->field_2a8;
    v19 = v28;
    v30 = v11.next();
    if (v30)
    {
        do
        {
            v0.check_unstable(v31, v21 & 4294967295);
            if ((char)v0 != 56)
            {
                *((unsigned long *)&a0[96]) = v10;
                a0[80] = v9;
                *((int128_t *)&a0[64]) = *((int128_t *)&v8);
                v32 = *((int128_t *)&v0);
                v33 = *((int128_t *)&v2);
                v34 = *((int128_t *)&v4);
                *((int128_t *)&a0[48]) = *((int128_t *)&v6);
                a0[32] = v34;
                a0[16] = v33;
                *(a0) = v32;
                return v10;
            }
            v30 = v11.next();
        } while (v30);
    }
    *((char *)a0) = 56;
    return v30;
}
