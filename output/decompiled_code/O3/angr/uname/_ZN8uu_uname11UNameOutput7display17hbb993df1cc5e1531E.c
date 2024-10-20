double uu_uname::UNameOutput::display::hbb993df1cc5e1531(long long a0, long long a1)
{
    void* v0;  // [sp-0xc0]
    char *v1;  // [sp-0xb8]
    void* v2;  // [sp-0xb0], Other Possible Types: char *
    unsigned long long v3[22];  // [sp-0xa0]
    unsigned long long v4;  // [sp-0x98]
    unsigned long long v5;  // [sp-0x90]
    unsigned long long v6;  // [sp-0x88]
    unsigned long long v7;  // [sp-0x80]
    unsigned long long v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x70]
    unsigned long long v10;  // [sp-0x68]
    void* v12;  // rax
    unsigned long long v14[22];  // rcx
    unsigned long long v15[22];  // rcx
    void* v16;  // rdi
    void* v17;  // r8
    void* v18;  // r9
    void* v19;  // r10
    void* v20;  // r11
    void* v21;  // r14
    void* v22;  // r15
    struct struct_0 **v23;  // rbp
    unsigned long long v24[3];  // rcx
    unsigned long v26;  // r15
    unsigned long long v27;  // rax
    int v28;  // xmm0
    int v29;  // ymm0

    v12 = 0;
    if (a1[0] == 0x8000000000000000)
        v14 = 0;
    else
        v14 = a1;
    v15 = v14;
    v16 = &a1[3];
    if (a1[3] == 0x8000000000000000)
        v16 = 0;
    v0 = 0;
    v17 = &a1[6];
    if (a1[6] == 0x8000000000000000)
        v17 = 0;
    v18 = &a1[9];
    if (a1[9] == 0x8000000000000000)
        v18 = 0;
    v19 = &a1[12];
    if (a1[12] == 0x8000000000000000)
        v19 = 0;
    v1 = 1;
    v20 = &a1[15];
    if (a1[15] == 0x8000000000000000)
        v20 = 0;
    v21 = &a1[18];
    if (a1[18] == 0x8000000000000000)
        v21 = 0;
    v22 = &a1[21];
    if (a1[21] == 0x8000000000000000)
        v22 = 0;
    v2 = 0;
    v3[0] = v15;
    v4 = v16;
    v5 = v17;
    v6 = v18;
    v7 = v19;
    v8 = v20;
    v9 = v21;
    v10 = v22;
    v23 = 0;
    while (true)
    {
        do
        {
            v2 = v2;
            if (v23 == 8)
            {
                a0->field_10 = v2;
                v28 = *((int128_t *)&v0);
                *((void*)&a0->field_0) = v28;
                return (unsigned long long)(v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28);
            }
        } while ((v24 = *((long long *)((char *)v3 + 0x8 * (unsigned long long)v23)), v23 += 1, !v24));
        v26 = v24[2];
        v27 = v12;
        if (v0 - v12 < v26)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hfe35c27bb621e723(&v0, v12, v26);
            v27 = v2;
        }
        memcpy(&v1[v27], v24[1], v26);
        v2 = v26 + (char *)v2;
        if (v2 == v0)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h80e2e58e8bed1bc6(&v0);
        *((char *)(v1 + v2)) = 32;
        v12 = v2 + 1;
        v2 = v12;
    }
}
