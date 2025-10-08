long long uu_cp::verify_target_type(unsigned long long *a0, unsigned long long a1, unsigned long long a2, char *a3)
{
    char *v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [sp-0x70]
    unsigned long long v4;  // [sp-0x68]
    char v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    char *v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    void* v10;  // [bp-0x38]
    unsigned long long v12;  // r13
    char v13;  // al
    unsigned long long v14;  // rax

    v12 = 9223372036854775811;
    v13 = a1.is_dir(a2);
    if (*(a3) == 1)
    {
        if (!v13)
            goto LABEL_4a55b4;
        v2 = 1;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v14 = &g_55eae8;
        goto LABEL_4a55ee;
    }
    else if (v13)
    {
LABEL_4a55b4:
        v12 = 9223372036854775820;
    }
    else
    {
        v2 = 1;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v14 = &g_55edb0;
LABEL_4a55ee:
        v6 = v14;
        v7 = 2;
        v10 = 0;
        v8 = &v0;
        v9 = 1;
        a0 + 1.map_or_else(&v6);
    }
    *(a0) = v12;
    return a0;
}
