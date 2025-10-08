long long bat::config::get_pager_executable(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned long long
    char v1;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x70]
    int v3;  // [bp-0x68]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x48]
    int v6;  // [bp-0x38]
    char v7;  // [bp-0x28]

    bat::pager::get_pager(&v0, a1, a2);
    if (v0 == 9223372036854775809)
    {
        v0.drop_in_place<core::result::Result<core::option::Option<bat::pager::Pager>,shell_words::ParseError>>();
    }
    else
    {
        memcpy(&v7, &v4, 16);
        v6 = v3;
        memcpy(&v5, &v1, 16);
        if (v0 != 0x8000000000000000)
        {
            memcpy(&v1, &v5, 16);
            memcpy(&v4, &v7, 16);
            v3 = v6;
            a0[2] = v2;
            a0[0] = v0;
            a0[1] = v1;
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
            return a0;
        }
    }
    a0[0] = 0x8000000000000000;
    return a0;
}
