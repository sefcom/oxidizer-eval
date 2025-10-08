long long uu_numfmt::format::parse_suffix(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned int v2;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    char *v6;  // [bp-0x80], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0x78]
    void* v8;  // [bp-0x70]
    void* v9;  // [bp-0x60], Other Possible Types: char
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    char v12;  // [bp-0x48]
    char *v13;  // [bp-0x40]
    unsigned long long v14;  // [bp-0x38]
    unsigned long v16;  // rbp
    unsigned int v17;  // edx
    char v18;  // r13b
    unsigned long long v19;  // r12
    char v20;  // bpl
    unsigned long long v21;  // r12
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax

    if (!a2)
        return a0.to_vec("invalid number: ''invalid suffix in input: src/uu/numfmt/src/format.rs", 18);
    v2 = 0;
    v16 = (unsigned int)core::slice::<impl [T]>::ends_with(a1, a2, ::0x466cd0::core::char::methods::encode_utf8_raw(105, &v2), 1);
    v0 = a1;
    v1 = a1 + a2;
    if ((char)v16)
        core::str::validations::next_code_point_reverse(&v0);
    if (!((char)core::str::validations::next_code_point_reverse(&v0) & 1))
    {
        v9 = 0;
        v10 = a1;
        v11 = a2;
        v12 = 1;
        v13 = &v9;
        v14 = <os_display::Quoted as core::fmt::Display>::fmt;
        v2 = &g_5023a0;
        v5 = 1;
        v8 = 0;
        v6 = &v13;
        v7 = 1;
        return a0.map_or_else(&v2);
    }
    switch (v17)
    {
    case 69:
        v18 = 5;
        break;
    case 71:
        v18 = 2;
        break;
    case 75:
        break;
    case 77:
        v18 = 1;
        break;
    case 80:
        v18 = 4;
        break;
    case 84:
        v18 = 3;
        break;
    case 89:
        v18 = 7;
        break;
    case 90:
        v18 = 6;
        break;
    default:
        if ((char)v16 || v17 - 58 < -10)
        {
            v9 = 0;
            v10 = a1;
            v11 = a2;
            v12 = 1;
            v13 = &v9;
            v14 = <os_display::Quoted as core::fmt::Display>::fmt;
            v2 = &g_5023a0;
            v5 = 1;
            v8 = 0;
            v6 = &v13;
            v7 = 1;
            return a0.map_or_else(&v2);
        }
        v20 = 2;
        v19 = 0;
        goto LABEL_469990;
        goto LABEL_469990;
    }
    v19 = ~(v16 & 4294967295);
LABEL_469990:
    v21 = v19 + a2;
    v22 = v21.get(a1, a2);
    if (!v22)
        core::str::slice_error_fail(a1, a2, 0, v21, &g_5023b0); /* do not return */
    v23 = v9.from_str(v22, a2);
    if (v9)
    {
        uu_numfmt::format::parse_suffix::{{closure}}(&v2, a1, a2);
        v4 = v3;
        if (v4 != 0x8000000000000000)
        {
            *((unsigned long long *)a0) = v3;
            *((unsigned long long *)&a0[8]) = v5;
            *((unsigned long *)&a0[16]) = v6;
            return v3;
        }
    }
    else
    {
        v4 = v23;
    }
    *((unsigned long long *)&a0[8]) = v5;
    *((char *)&a0[16]) = v18;
    *((char *)&a0[17]) = v20;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return v4;
}
