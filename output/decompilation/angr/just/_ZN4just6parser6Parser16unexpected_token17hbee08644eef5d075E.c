long long just::parser::Parser::unexpected_token(struct_0 *a0, unsigned long long a1[10])
{
    unsigned int v0;  // [bp-0x98]
    unsigned int v1;  // [bp-0x95]
    unsigned long long v2;  // [bp-0x90]
    void* v3;  // [bp-0x88]
    unsigned long v4;  // [bp-0x80]
    unsigned long v5;  // [bp-0x78], Other Possible Types: unsigned long long
    char v6;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x68]
    unsigned long v8;  // [bp-0x60]
    unsigned long v9;  // [bp-0x58]
    unsigned long v10;  // [bp-0x50]
    unsigned int v11;  // [bp-0x4c]
    char v12;  // [bp-0x48]
    char v13;  // [bp-0x47]
    char v14;  // [bp-0x44]
    char v15;  // [bp-0x28]
    char v16;  // [bp-0x18]
    unsigned long v18;  // rax
    unsigned long v19;  // rax
    unsigned long v21;  // rdx
    int v22;  // xmm0
    char v23;  // sil
    int v24;  // xmm1
    int v25;  // xmm2
    unsigned int v26;  // edi

    v18 = a1[7];
    v19 = v18;
    if (v19)
        v19 = a1[9];
    v21 = v18;
    v2 = v18;
    v3 = 0;
    v4 = v18;
    v5 = a1[8];
    v6 = v2;
    v7 = 0;
    v8 = v18;
    v9 = a1[8];
    v10 = v19;
    v15.collect(&v2);
    v2.next(a1);
    if (v12 != 37)
    {
        v22 = *((int128_t *)&v3);
        v23 = v10;
        v0 = *((int *)((char *)&v10 + 1));
        v1 = v11;
        *((int *)&a0->field_50) = *((int *)&v14);
        *((int *)((char *)&a0->field_4c + 1)) = *((int *)&v13);
        v24 = *((int128_t *)&v5);
        v25 = *((int128_t *)&v7);
        v26 = v0;
        a0->field_49 = v1;
        *((unsigned int *)&(&a0->field_48)[1]) = v26;
        a0->field_8 = v2;
        *((void*)&a0->field_10) = v22;
        *((void*)&a0->field_20) = v24;
        *((void*)&a0->field_30) = v25;
        a0->field_40 = v9;
        a0->field_48 = v23;
        *((char *)&a0->field_4c) = v12;
        a0->field_0 = 1;
        return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v15);
    }
    memcpy(&v3, &v15, 16);
    v5 = *((long long *)&v16);
    v6 = v10;
    v2 = 9223372036854775864;
    return a0.error(a1, &v2);
}
