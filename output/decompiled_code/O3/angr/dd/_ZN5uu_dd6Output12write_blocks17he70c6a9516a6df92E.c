long long uu_dd::Output::write_blocks::he70c6a9516a6df92(unsigned long long a0[6], struct_1 *a1, unsigned long a2, unsigned long a3)
{
    void* v0;  // [sp-0xc0]
    unsigned long long v1;  // [sp-0xb8]
    unsigned long long v2[6];  // [sp-0xb0]
    unsigned long long v3;  // [sp-0xa0]
    void* v4;  // [sp-0x98]
    void* v5;  // [sp-0x90]
    void* v6;  // [sp-0x88]
    unsigned long long v7;  // [sp-0x80]
    unsigned long long v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x70]
    unsigned long long v10;  // [sp-0x68]
    unsigned long v11;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x58]
    unsigned long long v13;  // [sp-0x50]
    int v14;  // [sp-0x48]
    unsigned long long v16;  // rbx
    unsigned long long v17;  // 4096

    v16 = a1->field_10->field_78;
    if (!v16)
    {
        v11 = &g_515c88;
        v12 = 1;
        v13 = 8;
        *((int128_t *)&v14) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v11); /* do not return */
    }
    if (!a3)
    {
        a0[2] = 0;
        a0[3] = 0;
        a0[4] = 0;
        a0[5] = 0;
        a0[0] = 0;
        return a0;
    }
    v9 = &a1->padding_0[8];
    v2[0] = a0;
    v3 = v16;
    v10 = &a1->padding_0[4];
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = a2 + v17;
    v8 = a3 - v17;
    v0 = 0;
    v1 = v0 + a2;
    goto *((int *)(4322316 + a1->padding_0[0] * 4)) + 4322316;
}
