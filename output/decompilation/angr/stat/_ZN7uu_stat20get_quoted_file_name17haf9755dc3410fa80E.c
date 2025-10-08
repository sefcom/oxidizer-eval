long long uu_stat::get_quoted_file_name(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, char a5)
{
    char v0;  // [bp-0xf0], Other Possible Types: unsigned long long
    int v1;  // [bp-0xe8], Other Possible Types: unsigned long long
    char *v2;  // [bp-0xe0], Other Possible Types: char, unsigned long long
    unsigned long long v3;  // [bp-0xd8]
    void* v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc0]
    int v6;  // [bp-0xb8], Other Possible Types: char *, unsigned long long
    unsigned long long v7;  // [bp-0xb0]
    char *v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    char *v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    char v12;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    char v15;  // [bp-0x60]
    int v16;  // [bp-0x48], Other Possible Types: char
    char v17;  // [bp-0x38]
    char v19;  // al
    char v20;  // bpl
    unsigned long long v21;  // rdx
    char v22;  // cl

    std::env::var(&v0);
    if (*((int *)&v0) == 1)
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    }
    else
    {
        *((int128_t *)&v6) = *((int128_t *)&v2);
        if (!((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63)))
        {
            *((int128_t *)&v1) = (int128_t)v6;
            v0 = v1;
            if ((char)uu_stat::get_quoted_file_name::{{closure}}(&v0) != 4)
                goto LABEL_473e46;
        }
    }
    v19 = 2;
LABEL_473e46:
    if (((unsigned short)a4 & 0xf000) != 0xa000)
    {
        v22 = (a5 ? v19 : 3);
        return uu_stat::quote_file_name(a0, a1, a2, (a5 ? v19 : 3));
    }
    v20 = v19;
    uu_stat::quote_file_name(&v15, a1, a2, v20);
    std::fs::read_link(&v12, a3);
    if ((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63))
    {
        v5 = v13;
        v6 = uucore::util_name();
        v7 = v21;
        v10 = &v6;
        v11 = <&T as core::fmt::Display>::fmt;
        v0 = &g_519c28;
        v1 = 2;
        v4 = 0;
        v2 = &v10;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v6 = &v5;
        v7 = <std::io::error::Error as core::fmt::Display>::fmt;
        v0 = &g_519c48;
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        *((unsigned int *)&a0[8]) = 1;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<std::io::error::Error>(&v5);
    }
    else
    {
        v0.from_utf8_lossy(v13, v14);
        uu_stat::quote_file_name(&(char)v10, v1, v2, v20);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
        v6 = &v15;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v8 = &(char)v10;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_519c08;
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 2;
        v16.map_or_else(&v0);
        *((long long *)&a0[16]) = *((long long *)&v17);
        *(a0) = v16;
        core::ptr::drop_in_place<alloc::string::String>(&(char)v10);
        core::ptr::drop_in_place<std::path::PathBuf>(v12, v13);
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v15);
}
