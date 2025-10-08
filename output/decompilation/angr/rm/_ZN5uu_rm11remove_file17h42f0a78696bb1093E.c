long long uu_rm::remove_file(unsigned long long a0, unsigned long long a1, char a2[8])
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    char *v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    void* v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    char v8;  // [bp-0x60]
    char *v9;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x50]
    char *v11;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x40]
    char *v13;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x30]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx

    if (!(char)uu_rm::prompt_file(a0, a1, a2[6], a2[7]))
        return 0;
    v16 = std::fs::remove_file(a0, a1);
    if (v16)
    {
        v13 = v16;
        if ((char)v16.kind() == 1)
        {
            v5 = uucore::util_name();
            v6 = v17;
            v9 = &v5;
            v10 = <&T as core::fmt::Display>::fmt;
            v0 = &g_4ea4a0;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v5 = 1;
            v6 = a0;
            v7 = a1;
            v8 = 1;
            v9 = &v5;
            v10 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_4ea500;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v18 = v16;
        }
        else
        {
            v5 = uucore::util_name();
            v6 = v19;
            v9 = &v5;
            v10 = <&T as core::fmt::Display>::fmt;
            v0 = &g_4ea4a0;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v5 = 1;
            v6 = a0;
            v7 = a1;
            v8 = 1;
            v9 = &v5;
            v10 = <os_display::Quoted as core::fmt::Display>::fmt;
            v11 = &v13;
            v12 = <std::io::error::Error as core::fmt::Display>::fmt;
            v0 = &g_4ea5e0;
            v1 = 3;
            v4 = 0;
            v2 = &v9;
            v3 = 2;
            std::io::stdio::_eprint(&v0);
            v18 = v13;
        }
        return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(v18) & 0xffffffffffffff00 | 1;
    }
    else if (a2[5] == 1)
    {
        uu_rm::normalize(&(char)v9, a0, a1);
        v5 = 1;
        v6 = v10;
        v7 = v11;
        v8 = 1;
        v13 = &v5;
        v14 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = &g_4ea5c0;
        v1 = 2;
        v4 = 0;
        v2 = &v13;
        v3 = 1;
        std::io::stdio::_print(&v0);
        core::ptr::drop_in_place<std::path::PathBuf>(v9, v10);
    }
    return 0;
}
