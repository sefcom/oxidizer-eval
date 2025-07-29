long long uu_rm::remove_file(unsigned long long a0, unsigned long long a1, char a2[8])
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    char *v2;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xd8]
    void* v4;  // [bp-0xd0]
    char *v5;  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    char *v7;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    int v10;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x90]
    char *v12;  // [bp-0x88], Other Possible Types: char
    char *v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x70]
    char *v16;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x60]
    char v18;  // [bp-0x58]
    unsigned long long v19;  // [bp-0x48]
    char v20;  // [bp-0x40]
    unsigned long long v21;  // [bp-0x30]
    unsigned long long v23;  // rax
    unsigned long long v24;  // rbx
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rdx

    if (!(char)uu_rm::prompt_file(a0, a1, a2[6], a2[7]))
        return 0;
    v23 = std::fs::remove_file(a0, a1);
    if (v23)
    {
        v24 = v23;
        v16 = v23;
        if ((char)v23.kind() == 1)
        {
            v9 = uucore::util_name();
            v10 = v25;
            v5 = &v9;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = &g_57d6d0;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v5.to_string_lossy(a0, a1);
            v0.to_vec(<&T as core::fmt::Display>::fmt, v7);
            v12 = v2;
            *((int128_t *)&v10) = *((int128_t *)&v0);
            v9 = 3;
            v13 = &v9;
            v14 = <uu_rm::RmError as core::fmt::Display>::fmt;
            v0 = &g_57d6f0;
            v1 = 2;
            v4 = 0;
            v2 = &v13;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            core::ptr::drop_in_place<uu_rm::RmError>(&v9);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v5);
        }
        else
        {
            v9 = uucore::util_name();
            v10 = v26;
            v5 = &v9;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = &g_57d6d0;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v9 = 1;
            v10 = a0;
            v11 = a1;
            v12 = 1;
            v5 = &v9;
            v6 = <os_display::Quoted as core::fmt::Display>::fmt;
            v7 = &v16;
            v8 = <std::io::error::Error as core::fmt::Display>::fmt;
            v0 = &g_57d730;
            v1 = 3;
            v4 = 0;
            v2 = &v5;
            v3 = 2;
            std::io::stdio::_eprint(&v0);
            v24 = v16;
        }
        return (unsigned long long)::0x49f4b0::core::ptr::drop_in_place<std::io::error::Error>(v24) & 0xffffffffffffff00 | 1;
    }
    else if (a2[5])
    {
        (char)v13.to_vec("filesizei128", 4);
        uu_rm::normalize(&(char)v5, a0, a1);
        v9 = 1;
        *((int128_t *)&v10) = *((int128_t *)&v6);
        v12 = 1;
        (char)v0.spec_to_string(&v9);
        v19 = v15;
        memcpy(&v18, &v13, 16);
        memcpy(&v20, &(char)v0, 16);
        v21 = v2;
        (char)v0.from_iter(&v18);
        uucore::mods::locale::get_message_with_args(&(char)v13, "rm-verbose-removedremove symbolic link ? remove regular empty file remove file remove write-protected regular empty file remove write-protected regular file attempt removal of inaccessible directory remove write-protected directory remove directory src/uu/rm/src/rm.rsdescend into directory ", 18, &(char)v0);
        v16 = &(char)v13;
        v17 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_57d6f0;
        v1 = 2;
        v4 = 0;
        v2 = &v16;
        v3 = 1;
        std::io::stdio::_print(&v0);
        ::0x49f4a0::core::ptr::drop_in_place<alloc::string::String>(&(char)v13);
        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v5);
    }
    return 0;
}
