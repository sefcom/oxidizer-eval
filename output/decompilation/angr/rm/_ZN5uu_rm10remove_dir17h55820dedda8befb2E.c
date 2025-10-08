long long uu_rm::remove_dir(unsigned long long a0, unsigned long long a1, char a2[8])
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    char *v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    void* v4;  // [bp-0x80]
    char *v5;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    char *v8;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    char *v12;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x30]
    unsigned long long v15;  // rdx
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx

    if (!(char)uu_rm::prompt_dir(a0, a1, a2[6], a2[7]))
        return 0;
    if (!a2[4] && a2[3] != 1)
    {
        v8 = uucore::util_name();
        v9 = v15;
        v5 = &v8;
        v6 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4ea4a0;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v8 = 1;
        v9 = a0;
        v10 = a1;
        v11 = 1;
        v5 = &v8;
        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = &g_4ea5a0;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        return std::io::stdio::_eprint(&v0) & 0xffffffffffffff00 | 1;
    }
    v17 = std::fs::remove_dir(a0, a1);
    if (v17)
    {
        v12 = v17.map_err_context(a0, a1);
        v8 = uucore::util_name();
        v9 = v18;
        v5 = &v8;
        v6 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4ea4a0;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v8 = &v12;
        v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v0 = &g_4ea4e0;
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        return (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v12) & 0xffffffffffffff00 | 1;
    }
    else if (a2[5] == 1)
    {
        uu_rm::normalize(&(char)v5, a0, a1);
        v8 = 1;
        v9 = v6;
        v10 = v7;
        v11 = 1;
        v12 = &v8;
        v13 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = &g_4ea520;
        v1 = 2;
        v4 = 0;
        v2 = &v12;
        v3 = 1;
        std::io::stdio::_print(&v0);
        core::ptr::drop_in_place<std::path::PathBuf>(v5, v6);
    }
    return 0;
}
