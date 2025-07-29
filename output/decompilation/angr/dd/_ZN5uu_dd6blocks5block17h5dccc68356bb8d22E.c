long long uu_dd::blocks::block(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4, struct_1 *a5)
{
    void* v0;  // [bp-0x78]
    int v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    void* v3;  // [bp-0x68], Other Possible Types: unsigned long
    char v4;  // [bp-0x58]
    uint128_t *v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x30]
    char v10;  // [bp-0x28]
    unsigned long long v12;  // r15
    uint128_t *v13;  // r14
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax

    v7 = a3;
    v8 = a1;
    v9 = a2;
    v10 = 0;
    v0 = 0;
    v2 = 8;
    v3 = 0;
    v4.fold(&v8, &v0, &v7, &a5[1].field_8);
    v12 = v6;
    if (v12 && (!a4 || !a5->field_8))
    {
        v13 = v5;
        v14 = v12 * 3;
        *((long long *)&v1) = *((long long *)(-16 + (char *)v13 + 8 * v14));
        v2 = *((long long *)(-8 + (char *)v13 + 8 * v14)) + *((long long *)(-16 + (char *)v13 + 8 * v14));
        if ((unsigned long long)v1.all())
        {
            v6 = v12 - 1;
            v15 = v6 * 3;
            v3 = *((long long *)(16 + (char *)v13 + 8 * v15));
            *((int128_t *)&v1) = *((int128_t *)((char *)v13 + 8 * v15));
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<u8>>>(&(unsigned long long)v1);
        }
    }
    a0->field_10 = v6;
    a0->field_0 = *((int128_t *)&v4);
    return v6;
}
