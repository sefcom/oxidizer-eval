long long uu_test::parser::Parser::parse(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    char v4;  // [bp-0x50], Other Possible Types: unsigned long long
    int v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    int v7;  // [bp-0x38], Other Possible Types: char
    char v8;  // [bp-0x28]
    unsigned long long v10;  // rax
    unsigned long long v11;  // r14
    int v12;  // xmm0

    v10 = v0.expr(a1);
    if (*((int *)&v0) != 7)
    {
        v12 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *(a0) = v12;
        return v10;
    }
    v11 = a1->field_18;
    a1->field_18 = 9223372036854775809;
    if (v11 == 9223372036854775809)
    {
        v10 = v4.next(a1 + 1);
        v11 = v4;
        if (v4 == 0x8000000000000000)
        {
            *((unsigned long long *)a0) = 7;
            return v10;
        }
    }
    else
    {
        *((uint128_t *)&v5) = a1->field_20;
        if (v11 == 0x8000000000000000)
        {
            *((unsigned long long *)a0) = 7;
            return v10;
        }
    }
    v0 = 1;
    v1 = (long long)v5;
    v2 = v6;
    v3 = 1;
    v7.spec_to_string(&v0);
    *((long long *)&a0[24]) = *((long long *)&v8);
    a0[8] = v7;
    *((unsigned long long *)a0) = 2;
    return (unsigned long long)core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v1);
}
