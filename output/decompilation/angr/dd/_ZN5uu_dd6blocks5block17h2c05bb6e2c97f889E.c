long long uu_dd::blocks::block(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4, struct_0 *a5)
{
    void* v0;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x70]
    void* v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    unsigned long long *v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    char v9;  // [bp-0x30]
    unsigned long long v11;  // r15
    unsigned long long *v12;  // r12
    unsigned long long v13;  // rax

    v3 = a3;
    v7 = a1;
    v8 = a2;
    v9 = 0;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v4.fold(&v7, &v0, &v3, &a5[1].field_8);
    v11 = v6;
    if (v11 && (!a4 || !a5->field_8))
    {
        v12 = v5;
        v13 = v11 * 3;
        v0 = v12[2 + v13];
        v1 = v12[1 + v13] + v0;
        if (v0.all())
        {
            v6 = v11 - 1;
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<u8>>>(v12[3 * v6], v0);
        }
    }
    a0->field_10 = v6;
    a0->field_0 = *((int128_t *)&v4);
    return v6;
}
