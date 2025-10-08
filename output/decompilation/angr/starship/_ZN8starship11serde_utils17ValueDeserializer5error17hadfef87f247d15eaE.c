long long starship::serde_utils::ValueDeserializer::error(unsigned long long a0[9], struct_0 *a1)
{
    int v0;  // [bp-0xb8], Other Possible Types: char *
    unsigned long long v1;  // [bp-0xb0]
    char *v2;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0xa0]
    struct_0 *v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    unsigned long v6;  // [bp-0x80]
    unsigned long v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    unsigned long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    char *v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x48]
    void* v14;  // [bp-0x40]
    char v15;  // [bp-0x30]
    unsigned long v17;  // r15
    unsigned long long v18;  // rax
    unsigned long long v19;  // r14
    unsigned long long v20;  // r14

    if (a0[7] && a0[3])
    {
        v17 = a0[6];
        v6 = a0[7];
        v7 = a0[8];
        v18 = "ConfigError in '' at ''?)".strip_suffix_of(6, a0[5], a0[6]);
        if (v18)
        {
            v19 = v18;
            if (v18)
                goto LABEL_bc9b3d;
LABEL_bc9b3c:
        }
        else
        {
            v19 = a0[5];
            if (!v18)
                goto LABEL_bc9b3c;
LABEL_bc9b3d:
        }
        v8 = v19;
        v9 = v17;
        v0 = &v8;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v6;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = a1;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v10 = &g_11f7220;
        v11 = 3;
        v14 = 0;
        v12 = &v0;
        v13 = 3;
        v15.map_or_else(0, v17, &v10);
        v20 = v15.custom();
        core::ptr::drop_in_place<alloc::string::String>(a1);
        return v20;
    }
    v2 = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    return (char)v0.custom();
}
