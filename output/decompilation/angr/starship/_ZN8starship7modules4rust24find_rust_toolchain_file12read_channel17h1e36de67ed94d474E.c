long long starship::modules::rust::find_rust_toolchain_file::read_channel(void* a0, unsigned long long a1, unsigned long long a2, char a3)
{
    unsigned long long v0;  // [bp-0x100]
    int v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    char v3;  // [bp-0xe8]
    void* v4;  // [bp-0xd0], Other Possible Types: char, unsigned long long
    char v5;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v6;  // [bp-0xc0]
    int v7;  // [bp-0xb0]
    char v8;  // [bp-0xa0]
    unsigned short v9;  // [bp-0x90]
    int v10;  // [bp-0x78], Other Possible Types: char
    int v11;  // [bp-0x68]
    char v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x40]
    int v14;  // [bp-0x38]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rax

    std::fs::read_to_string(&v4, a1, a2);
    if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
    {
        v16 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v4);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v16;
    }
    *((int128_t *)&v1) = *((int128_t *)&v5);
    v0 = v4;
    v10.into_searcher(10, (long long)v1, v2);
    memcpy(&v8, &v12, 16);
    v7 = v11;
    v6 = v10;
    v4 = 0;
    v5 = v2;
    v9 = 0;
    v17 = v4.fold();
    v18 = 0x8000000000000000;
    if (v17)
    {
        if (v17 == 1 && !a3)
        {
            v16 = v3.filter(&v0);
            if (*((long long *)&v3) != 0x8000000000000000)
            {
                starship::bug_report::get_shell_info::{{closure}}(&v4, &v3);
                v19 = (long long)v6;
                *((unsigned long long *)&a0[16]) = v19;
                *((int128_t *)a0) = *((int128_t *)&v4);
                return v19;
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            return v16;
        }
        toml::de::from_str(&v4, (long long)v1, v2);
        if ((int)v4 == 2)
        {
            v18 = v5;
            v10 = v6;
            if (v5 != 9223372036854775809)
            {
                v14 = v10;
                goto LABEL_bb9fd8;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<starship::modules::rust::find_rust_toolchain_file::OverrideFile,toml::de::error::Error>>(&v4);
        }
LABEL_bba025:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
LABEL_bb9fd8:
        v13 = v18;
        v3.filter(&v13);
        if (*((long long *)&v3) == 0x8000000000000000)
            goto LABEL_bba025;
        starship::bug_report::get_shell_info::{{closure}}(&v4, &v3);
        *((long long *)&a0[16]) = (long long)v6;
        *((int128_t *)a0) = *((int128_t *)&v4);
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
}
