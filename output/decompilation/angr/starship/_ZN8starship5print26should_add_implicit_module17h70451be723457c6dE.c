long long starship::print::should_add_implicit_module(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    char *v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    char *v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    char v12;  // [bp-0x70], Other Possible Types: unsigned long long
    char *v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x60]
    void* v15;  // [bp-0x58]
    unsigned int v16;  // r14d
    struct_0 *v17;  // r15
    struct_0 *v18;  // rax
    struct_0 *v20;  // rcx
    struct_0 *v21;  // rax

    v3 = a0;
    v4 = a1;
    v5 = a2;
    v6 = a3;
    v7 = &v3;
    v8 = <&T as core::fmt::Display>::fmt;
    v9 = &v5;
    v10 = <&T as core::fmt::Display>::fmt;
    v11 = &g_11f6f70;
    v12 = 2;
    v15 = 0;
    v13 = &v7;
    v14 = 2;
    v16 = 0;
    v17 = &v11;
    v0.map_or_else(0, a2, &v11);
    if (!a5.get(a6, v1, v2))
    {
        v12 = 0;
        v11 = 9223372036854775811;
        v18 = a4.get("disabled", 8);
        if (!v18)
            v20 = &v11;
        else
            v20 = v18;
        v16 = 1;
        if (v20->field_0 == 9223372036854775811)
        {
            if (v18)
                v21 = v18;
            else
                v21 = v17;
            v16 = v21->field_8 ^ 1;
        }
        core::ptr::drop_in_place<toml::value::Value>(&v11);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return v16;
}
