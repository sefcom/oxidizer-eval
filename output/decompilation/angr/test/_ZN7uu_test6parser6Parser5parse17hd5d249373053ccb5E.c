long long uu_test::parser::Parser::parse(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    char v3;  // [bp-0x70]
    int v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    char v7;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x48]
    int v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    int v11;  // [bp-0x30], Other Possible Types: char
    char v12;  // [bp-0x20]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    int v16;  // xmm0

    v14 = v0.expr(a1);
    if (*((int *)&v0) != 7)
    {
        v16 = *((int128_t *)&v0);
        *((int128_t *)&a0->field_8[8]) = *((int128_t *)&v2);
        *((void*)&a0->field_0) = v16;
        return v14;
    }
    v15 = a1->field_18;
    a1->field_18 = 9223372036854775809;
    if (v15 == 9223372036854775809)
    {
        v7.next(a1 + 1);
        if (v7 == 0x8000000000000000)
        {
            *((unsigned long long *)&a0->field_0) = 7;
            return v7;
        }
    }
    else
    {
        *((uint128_t *)&v9) = a1->field_20;
        v8 = v15;
        if (v8 == 0x8000000000000000)
        {
            *((unsigned long long *)&a0->field_0) = 7;
            return v15;
        }
    }
    v6 = v10;
    *((int128_t *)&v4) = *((int128_t *)&v8);
    v0 = 1;
    v1 = v5;
    v2 = v6;
    v3 = 1;
    v11.spec_to_string(&v0);
    *((long long *)&a0->field_8[16]) = *((long long *)&v12);
    *((void*)&a0->field_8[0]) = v11;
    *((unsigned long long *)&a0->field_0) = 2;
    return (unsigned long long)::0x49abf0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v4);
}
