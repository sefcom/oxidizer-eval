long long uu_sort::chunks::parse_lines::h3cf32a0aa5cf801b(unsigned long long a0, unsigned long a1, struct_0 *a2, unsigned long long a3[9], unsigned int a4, unsigned long a5)
{
    void* v0;  // [bp-0xb8], Other Possible Types: unsigned int, char
    char v1;  // [sp-0xb7]
    unsigned long long v2;  // [sp-0xb0]
    void* v3;  // [sp-0xa8]
    unsigned long long v4[9];  // [sp-0x98]
    unsigned long long v5;  // [sp-0x90]
    unsigned long long v6;  // [sp-0x88]
    int v7;  // [sp-0x80]
    unsigned long long v8;  // [sp-0x70]
    unsigned long long v9;  // [sp-0x68]
    unsigned long long v10;  // [sp-0x60]
    void* v11;  // [sp-0x58]
    unsigned long long v12;  // [sp-0x50]
    unsigned int v13;  // [sp-0x48]
    unsigned int v14;  // [sp-0x44]
    char v15;  // [sp-0x40]
    unsigned short v16;  // [sp-0x38]
    unsigned long long v18;  // rbp
    unsigned long long v19;  // r14
    char v20;  // al
    unsigned int v21;  // eax
    unsigned long long v22;  // r12
    unsigned int v23;  // eax
    unsigned long long v25;  // rax

    v18 = a4;
    v0 = 0;
    v19 = 1;
    v20 = v18 & 4294967295;
    if ((char)v18 < 0)
    {
        v20 = v18 & 4294967295 | -0x100 | (char)((v18 & 4294967295 & 255) >> 6) | 192;
        v1 = (char)(v18 & 4294967295) & 191;
        v19 = 2;
    }
    v0 = v20;
    if (a1 < v19)
    {
        v19 = 0;
    }
    else if (bcmp(&v0, a1 - v19 + a0, v19))
    {
        v19 = 0;
    }
    if (a2->field_10)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else if (a3[2])
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else if (a3[5])
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else if (a3[8])
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else
    {
        v21 = v18;
        v22 = a1 - v19;
        v0 = 0;
        v2 = 8;
        v3 = 0;
        if (!((char)((v18 & 255) >> 7 & 1 ^ 1)))
            v23 = (v21 >> 6) + (v21 & 63) * 0x100 + 32960;
        else
            v23 = v21;
        *((int128_t *)&v7) = 0;
        v8 = v22;
        v9 = a0;
        v10 = v22;
        v11 = 0;
        v12 = v22;
        v13 = v23;
        v14 = v21;
        v15 = 2 - (char)((v18 & 255) >> 7 & 1 ^ 1);
        v16 = 1;
        v4[0] = a3;
        v5 = &v0;
        v6 = a5;
        v25 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h5775118095f33fe1(a2, v4);
        if (!v0)
            return v25;
        v25 = __rust_dealloc(v2);
    }
}
