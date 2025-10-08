long long uu_join::get_field_number(struct_0 *a0, char a1, void* a2, char a3, void* a4)
{
    unsigned long v0;  // [bp-0x90]
    unsigned long v1;  // [bp-0x88]
    char *v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    char *v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    void* v10;  // [bp-0x40]
    char v11;  // [bp-0x30]
    unsigned int v12;  // [bp-0x18]
    unsigned long long v13;  // [bp-0x10]
    unsigned long long v14;  // [bp-0x8]
    unsigned long long v16;  // r14
    unsigned long long v17;  // rbx
    unsigned long v18;  // rax

    if (!(a1 & 1))
    {
        if (!(a3 & 1))
            a4 = 0;
        a0->field_8 = a4;
        a0->field_0 = 0;
        return a4;
    }
    else if ((a2 != a4 & a3))
    {
        v14 = v16;
        v13 = v17;
        v0 = a2 + 1;
        v1 = a4 + 1;
        v2 = &v0;
        v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v4 = &v1;
        v5 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v6 = &g_4fe578;
        v7 = 2;
        v10 = 0;
        v8 = &v2;
        v9 = 2;
        v11.map_or_else(&v6);
        v12 = 1;
        *((double *)&a0->field_0) = v11.new();
        a0->field_8 = &g_4fe360;
        return &g_4fe360;
    }
    else
    {
        a0->field_8 = a2;
        a0->field_0 = 0;
        return v18 & 0xffffffffffffff00 | a2 != a4;
    }
}
