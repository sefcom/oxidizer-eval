void uu_stat::print_float(char a0[5], unsigned int a1, unsigned int a2, unsigned long long a3, char a4)
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    char *v2;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xa0]
    void* v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    char *v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    char *v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    char v11;  // [bp-0x50]
    char v12;  // [bp-0x38]
    char v13;  // [bp-0x28]
    unsigned long v15;  // rax
    unsigned long long v16;  // r8

    v15 = a0[3];
    if (!a0[4])
    {
        v16 = (!((char)v15 & 1) ? 1 : " +");
        if (!a0[4])
            goto LABEL_4749de;
LABEL_4749dd:
        v15 = 1;
    }
    else
    {
        v16 = "+";
        if (a0[4])
            goto LABEL_4749dd;
LABEL_4749de:
    }
    v5 = v16;
    v6 = v15;
    uu_stat::precision_trunc(&v11, a2, a3);
    v7 = &v5;
    v8 = <&T as core::fmt::Display>::fmt;
    v9 = &v11;
    v10 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_41cfd0;
    v1 = 2;
    v4 = 0;
    v2 = &v7;
    v3 = 2;
    v12.map_or_else(&v0);
    memcpy(&v0, &v12, 16);
    v2 = *((long long *)&v13);
    uu_stat::pad_and_print(2, *((long long *)&v13), a0[2], a1, a4);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    core::ptr::drop_in_place<alloc::string::String>(&v11);
    return;
}
