long long uu_rm::remove_dir(unsigned long long a0, unsigned long long a1, char a2[8])
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    char *v2;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xc0]
    void* v4;  // [bp-0xb8]
    char *v5;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    char *v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    char *v11;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x70]
    char *v13;  // [bp-0x60], Other Possible Types: char
    char *v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    char v16;  // [bp-0x48]
    unsigned long long v17;  // [bp-0x38]
    char v18;  // [bp-0x30]
    unsigned long long v19;  // [bp-0x20]
    unsigned long long v21;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx

    if (!(char)uu_rm::prompt_dir(a0, a1, a2[6], a2[7]))
        return 0;
    if (!a2[4] && a2[3] != 1)
    {
        v11 = uucore::util_name();
        v12 = v21;
        v8 = &v11;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = &g_57d6d0;
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v8.to_string_lossy(a0, a1);
        v0.to_vec(<&T as core::fmt::Display>::fmt, v10);
        v13 = v2;
        memcpy(&v12, &v0, 16);
        v11 = 4;
        v5 = &v11;
        v6 = <uu_rm::RmError as core::fmt::Display>::fmt;
        v0 = &g_57d6f0;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        core::ptr::drop_in_place<uu_rm::RmError>(&v11);
        return (unsigned long long)core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v8) & 0xffffffffffffff00 | 1;
    }
    v23 = std::fs::remove_dir(a0, a1);
    if (v23)
    {
        v5 = v23.map_err_context(a0, a1);
        v11 = uucore::util_name();
        v12 = v24;
        v8 = &v11;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = &g_57d6d0;
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v11 = &v5;
        v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v0 = &g_57d6f0;
        v1 = 2;
        v4 = 0;
        v2 = &v11;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        return (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v5) & 0xffffffffffffff00 | 1;
    }
    else if (a2[5])
    {
        (char)v5.to_vec("filesizei128", 4);
        uu_rm::normalize(&(char)v8, a0, a1);
        v11 = 1;
        memcpy(&v12, &v9, 16);
        v13 = 1;
        (char)v0.spec_to_string(&v11);
        v17 = v7;
        memcpy(&v16, &v5, 16);
        memcpy(&v18, &(char)v0, 16);
        v19 = v2;
        (char)v0.from_iter(&v16);
        uucore::mods::locale::get_message_with_args(&(char)v5, "rm-verbose-removed-directory", 28, &(char)v0);
        v14 = &(char)v5;
        v15 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_57d6f0;
        v1 = 2;
        v4 = 0;
        v2 = &v14;
        v3 = 1;
        std::io::stdio::_print(&v0);
        ::0x49f4a0::core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v8);
    }
    return 0;
}
