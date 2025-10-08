long long uu_test::parser::Parser::expect(struct_0 *a0, void* a1)
{
    unsigned long long v0[5];  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    char v3;  // [bp-0x60]
    void* v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    char v7;  // [bp-0x38]
    int v8;  // [bp-0x30], Other Possible Types: char
    char v9;  // [bp-0x20]

    (char)v0.next_token(a1);
    if (v0 == 3 && (char)v2.eq(*((long long *)&v3), ")(uutils coreutils) 0.0.30Check file types and compare values.test EXPRESSION\n[\n[ EXPRESSION ]\n[ ]\n[ OPTION\n]Exit with the status determined by EXPRESSION.\n\nAn omitted EXPRESSION defaults to false.\nOtherwise, EXPRESSION is true or false and sets exit statu", 1))
    {
        a0->field_0 = 7;
        return (unsigned long long)core::ptr::drop_in_place<std::ffi::os_str::OsString>(v1, v2);
    }
    v4 = 0;
    v5 = ")(uutils coreutils) 0.0.30Check file types and compare values.test EXPRESSION\n[\n[ EXPRESSION ]\n[ ]\n[ OPTION\n]Exit with the status determined by EXPRESSION.\n\nAn omitted EXPRESSION defaults to false.\nOtherwise, EXPRESSION is true or false and sets exit statu";
    v6 = 1;
    v7 = 1;
    v8.spec_to_string(&v4);
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v9);
    *((void*)&(&a0->field_0)[1]) = v8;
    a0->field_0 = 1;
    return ((unsigned int)v0 == 3 ? (unsigned long long)core::ptr::drop_in_place<std::ffi::os_str::OsString>(v1, v2) : core::ptr::drop_in_place<uu_test::parser::Symbol>(&(char)v0));
}
