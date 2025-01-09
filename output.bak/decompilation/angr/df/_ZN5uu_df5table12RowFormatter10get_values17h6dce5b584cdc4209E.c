double uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(long long a0, long long a1)
{
    char v0;  // [sp-0x119]
    unsigned long long v1;  // [sp-0xd8]
    unsigned long long v2;  // [sp-0xd0]
    void* v3;  // [sp-0xa8]
    unsigned long long v4;  // [sp-0xa0]
    void* v5;  // [sp-0x98]
    unsigned long long v6;  // [sp-0x88]
    unsigned long long v7;  // [sp-0x80]
    unsigned long long v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x70]
    unsigned long long v10;  // [sp-0x68]
    unsigned long long v11;  // [sp-0x60]
    unsigned long long v12;  // [sp-0x58]
    unsigned long long v13;  // [sp-0x50]
    unsigned long long v14;  // [sp-0x48]
    unsigned long v15;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x38]
    unsigned long long v18[3];  // r14
    unsigned long long v19;  // rcx
    unsigned long long v21;  // rbp
    int v22;  // xmm0
    int v23;  // ymm0

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v18 = a1->field_8;
    v19 = v18[1];
    v13 = v18[2];
    v14 = v19;
    v15 = v19;
    v16 = v13 + v19;
    if (!::0x4ca490::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&v15))
    {
        a0->field_10 = v5;
        v22 = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v22;
        return (unsigned long long)(v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22);
    }
    v21 = a1->field_0;
    v1 = v21 + 152;
    v12 = v21 + 16;
    v11 = v21 + 24;
    v10 = v21 + 64;
    v9 = v21 + 32;
    v0 = a1->field_10;
    v2 = v21 + 128;
    v8 = v21 + 192;
    v7 = v21 + 184;
    v6 = v21 + 80;
    goto *((int *)(4283040 + *((char *)vvar_29{reg 16}) * 4)) + 4283040;
}
