long long fish::exec::get_performer_for_block_node(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x60]
    char v1;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    int v4;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x38]
    void* v6;  // [bp-0x30]
    char v7;  // [bp-0x28]
    char v8;  // [bp-0x18]
    void* v10;  // rax
    unsigned long v11;  // cc_ndep
    void* v12;  // r14
    unsigned long long v13;  // rdx

    if (a0->field_0 != 3)
    {
        v1 = &g_14d7d00;
        v2 = 1;
        v3 = 8;
        *((uint128_t *)&v4) = 0;
        core::panicking::panic_fmt(&v1, &g_14d7d30); /* do not return */
    }
    v10 = a1->field_28;
    if (!v10)
    {
        v12 = 0;
    }
    else if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v10) + 1, 0, _ccall(20, v10, 0, v11))))
    {
        v12 = a1->field_28;
    }
    else
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 20608410()
    }
    v0 = v12;
    v7.clone(a2, a3);
    v3 = *((long long *)&v8);
    memcpy(&v1, &v7, 16);
    v4 = a0->field_8.clone(a0->field_10);
    v5 = v13;
    v6 = v12;
    return v1.new();
}
