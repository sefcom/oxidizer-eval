long long fish::highlight::file_tester::FileTester::test_path(unsigned long long a0[4], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    int v0;  // [bp-0x70], Other Possible Types: char
    unsigned long long v1;  // [bp-0x60]
    int v2;  // [bp-0x58]
    unsigned int *v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    char v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x28]
    unsigned int v8;  // eax

    if (a2 > 0x1000)
        return 0;
    fish::common::unescape_string(&v0, a1, a2, 0, 1);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v0);
        return 0;
    }
    v4 = v1;
    v2 = v0;
    if ((int)v3.char_at(v4, 0) == 64976)
    {
        if (v4)
            *(v3) = 126;
        else
            core::panicking::panic_bounds_check(0, 0, &g_14d9108); /* do not return */
    }
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, a0[1], a0[2]);
    v6 = v1;
    memcpy(&v5, &v0, 16);
    v8 = fish::highlight::file_tester::is_potential_path(v3, v4, a3, &v5, 1, a0[3], 0x100);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v2);
    core::mem::drop(&v5);
    return v8;
}
