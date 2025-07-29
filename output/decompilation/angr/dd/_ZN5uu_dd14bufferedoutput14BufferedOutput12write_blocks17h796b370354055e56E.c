long long uu_dd::bufferedoutput::BufferedOutput::write_blocks(struct_2 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    unsigned long v5;  // [bp-0x50]
    int v6;  // [bp-0x48]
    char v7;  // [bp-0x38]
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rax
    unsigned long v11;  // rdx
    void* v12;  // rsi
    unsigned long long v13;  // rax

    v9 = a1->field_28->field_78;
    if (!v9)
        core::panicking::panic_const::panic_const_rem_by_zero(&g_5dfd58); /* do not return */
    v10 = a1->field_10 + a3;
    v11 = (!(v10 | v9) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v10) % (v9 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v10) / (v9 & 4294967295))) >> 32 : ((unsigned long long)((0 CONCAT v10) % v9) CONCAT (unsigned long long)((0 CONCAT v10) / v9)) >> 64);
    v12 = a3 - v11;
    if (v11 > a3)
        v12 = 0;
    ::0x4e2e70::core::slice::<impl [T]>::split_at_unchecked(&v0, a2, a3, v12);
    a1.append_elements(v0, v1, &g_5dfd70);
    v4.write_blocks(&a1->padding_18, a1->field_8, a1->field_10);
    if ((v4 & 1))
    {
        a0->field_8 = v5;
        v13 = 1;
    }
    else
    {
        a0->field_20 = *((int128_t *)&v7);
        *((void*)&a0->field_10) = v6;
        a1->field_10 = 0;
        a1.append_elements(v2, v3, &g_5dfd88);
        v13 = 0;
    }
    a0->field_0 = v13;
    return a0;
}
