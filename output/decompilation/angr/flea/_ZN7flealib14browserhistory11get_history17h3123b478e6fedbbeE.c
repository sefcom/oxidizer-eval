long long flealib::browserhistory::get_history(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0x190], Other Possible Types: char, unsigned long long
    char v1;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x188]
    void* v3;  // [bp-0x180]
    unsigned long long v4;  // [bp-0x180]
    int v5;  // [bp-0x178]
    int v6;  // [bp-0x168]
    int v7;  // [bp-0x158]
    int v8;  // [bp-0x148]
    int v9;  // [bp-0x138]
    int v10;  // [bp-0x128], Other Possible Types: char
    int v11;  // [bp-0x118], Other Possible Types: char
    int v12;  // [bp-0x108]
    int v13;  // [bp-0xf8], Other Possible Types: char
    int v14;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v15;  // [bp-0xe0]
    int v16;  // [bp-0xd8]
    int v17;  // [bp-0xd0]
    int v18;  // [bp-0xc8]
    int v19;  // [bp-0xc0]
    int v20;  // [bp-0xb8]
    int v21;  // [bp-0xb0]
    int v22;  // [bp-0xa8]
    int v23;  // [bp-0x98]
    int v24;  // [bp-0x88]
    int v25;  // [bp-0x78]
    int v26;  // [bp-0x68]
    int v27;  // [bp-0x58]
    int v28;  // [bp-0x48]
    int v29;  // [bp-0x38]
    unsigned long long v31;  // rax
    int v32;  // xmm0
    int v33;  // xmm2

    v31 = v0.open_with_flags(a1, a2);
    if ((v0 & 1))
    {
        v32 = *((int128_t *)&v1);
        v20 = v7;
        v18 = v6;
        v16 = v5;
        v14 = v32;
        *((void*)&a0->field_20[0]) = v7;
        *((void*)&a0->field_18[8]) = v6;
        *((void*)&a0->field_10) = v5;
        *((void*)&a0->field_0) = v32;
        return v31;
    }
    v23 = v9;
    v22 = v8;
    v33 = *((int128_t *)&v1);
    v20 = v7;
    v24 = v33;
    v25 = v5;
    v26 = v6;
    v27 = v7;
    v28 = v22;
    v29 = v23;
    v0.prepare_with_flags(&v24, a3, a4);
    memcpy(&v10, &v1, 16);
    memcpy(&v11, &v5, 16);
    v12 = v6;
    memcpy(&v13, &v7, 16);
    if (v0)
    {
        v21 = v13;
        v19 = v12;
        v17 = v11;
        v15 = v10;
        v14 = v0;
        v0.query_map(&v14);
        if (v0 == 9223372036854775826)
        {
            v0 = 0;
            v1 = 8;
            v3 = 0;
            v2.fold(v4, &v0);
            *((unsigned long long *)&a0->field_18[0]) = 0;
            *((int128_t *)&a0->field_8) = *((int128_t *)&v0);
            *((unsigned long long *)&a0->field_0) = 9223372036854775826;
            core::ptr::drop_in_place<rusqlite::statement::Statement>(&v14);
        }
        else
        {
            *((long long *)&a0->field_20[8]) = (long long)v7;
            *((void*)&a0->field_18[16]) = v6;
            *((void*)&a0->field_18[0]) = v5;
            *((unsigned long long *)&a0->field_0) = v0;
            *((unsigned long long *)&a0->field_8) = v2;
            *((unsigned long long *)&a0->field_10) = v4;
            core::ptr::drop_in_place<rusqlite::statement::Statement>(&v14);
        }
    }
    else
    {
        *((void*)&a0->field_20[0]) = v13;
        *((void*)&a0->field_18[8]) = v12;
        *((void*)&a0->field_10) = v11;
        *((void*)&a0->field_0) = v10;
    }
    return core::ptr::drop_in_place<rusqlite::Connection>(&v24);
}
