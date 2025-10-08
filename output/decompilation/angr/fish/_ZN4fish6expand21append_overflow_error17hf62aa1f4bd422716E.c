long long fish::expand::append_overflow_error(unsigned long long a0)
{
    unsigned long long v0[3];  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    void* v3;  // [bp-0x78]
    int v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    void* v6;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x60]
    void* v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    int v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x38]
    int v12;  // [bp-0x28], Other Possible Types: char
    char v13;  // [bp-0x18]
    unsigned long long v16;  // rdx

    if (!a0)
        return 121.make_error();
    v3 = 0;
    v5 = 4;
    v6 = 0;
    v7 = 18446744073709551615;
    v8 = 0;
    v9 = 3;
    v1 = "E";
    v2 = 35;
    *(v0) = 0x8000000000000000;
    v12.to_vec(v0.localize(), v16);
    v11 = *((long long *)&v13);
    v10 = v12;
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    v6 = v11;
    v4 = v10;
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
    a0.push(&v3, &g_14d8078);
    return 121.make_error();
}
