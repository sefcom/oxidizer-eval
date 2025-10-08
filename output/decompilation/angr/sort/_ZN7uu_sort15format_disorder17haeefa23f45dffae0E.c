long long uu_sort::format_disorder(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    char *v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    char *v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x30]
    unsigned long long v13;  // [bp-0x28]
    char *v14;  // [bp-0x20]
    unsigned long long v15;  // [bp-0x18]
    void* v16;  // [bp-0x10]
    unsigned long v18;  // rax

    v0 = a3;
    v1 = a4;
    if (!(a5 & 1))
    {
        v2 = 1;
        v3 = a1;
        v4 = a2;
        v5 = 0;
        v6 = &v2;
        v7 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = &v0;
        v9 = <&T as core::fmt::Display>::fmt;
        v10 = &v1;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &g_58cbd0;
        v13 = 3;
        v16 = 0;
        v14 = &v6;
        v15 = 3;
        return a0.map_or_else(&v12);
    }
    a0->field_0 = 0;
    a0->field_8 = 1;
    a0->field_10 = 0;
    return v18;
}
