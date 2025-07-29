long long uu_test::parser::Parser::expect(struct_0 *a0, void* a1)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    int v4;  // [bp-0x48], Other Possible Types: void*
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    char v7;  // [bp-0x30]
    int v8;  // [bp-0x28], Other Possible Types: char
    char v9;  // [bp-0x18]
    unsigned long long v11;  // rax

    v0.next_token(a1);
    if (*((int *)&v0) == 3 && (char)v2.eq(*((long long *)&v3), ")", 1))
    {
        v6 = *((long long *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        a0->field_0 = 7;
        v11 = (unsigned long long)::0x49abf0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v4);
        if (*((int *)&v0) == 3)
            return v11;
    }
    else
    {
        v4 = 0;
        v5 = ")";
        v6 = 1;
        v7 = 1;
        v8.spec_to_string(&v4);
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v9);
        *((void*)&(&a0->field_0)[1]) = v8;
        a0->field_0 = 1;
        if (*((int *)&v0) == 3)
            return (unsigned long long)::0x49abf0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v1);
    }
    return ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v0);
}
