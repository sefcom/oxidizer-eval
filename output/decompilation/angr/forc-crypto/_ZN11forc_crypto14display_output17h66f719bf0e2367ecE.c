long long forc_crypto::display_output(unsigned long long a0)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x70]
    char *v2;  // [bp-0x68], Other Possible Types: unsigned long long
    int v3;  // [bp-0x60], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x58]
    int v5;  // [bp-0x48], Other Possible Types: char *, char, unsigned long long
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    char *v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v11;  // rdx
    void* v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    char *v15;  // rdi

    std::io::stdio::stdout();
    if (!std::sys::io::is_terminal::isatty::is_terminal())
    {
        serde_json::ser::to_vec(&v0, a0);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v6 = v1;
            v5 = 0x8000000000000000;
        }
        else
        {
            v7 = v2;
            *((int128_t *)&v5) = *((int128_t *)&v0);
        }
        (char)v8.expect(&v5);
        v5 = &(char)v8;
        v6 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_47ab60;
        v1 = 1;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_print(&v0);
        v15 = &(char)v8;
        goto LABEL_7ce2db;
    }
    serde_yaml::ser::to_string(&v0, a0);
    v5.expect(&v0);
    if (!(char)forc_crypto::has_sensible_info(a0))
    {
        v8 = &v5;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_a2cb98;
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        std::io::stdio::_print(&v0);
        goto LABEL_7ce2d6;
    }
    if ((std::io::stdio::stdout().into_alternate_screen() & 1))
    {
        v12 = v11.from();
        goto LABEL_7ce372;
    }
    v8 = &v5;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_a2cb98;
    v1 = 2;
    v4 = 0;
    v2 = &v8;
    v3 = 1;
    v13 = vvar_105{reg 32}.write_fmt(&v0);
    if (v13)
    {
        v12 = v13.from();
        goto LABEL_7ce365;
    }
    else
    {
        v14 = vvar_105{reg 32}.flush();
        if (v14)
        {
            v12 = v14.from();
LABEL_7ce365:
            core::ptr::drop_in_place<termion::screen::AlternateScreen<std::io::stdio::Stdout>>(&vvar_105{reg 32});
LABEL_7ce372:
            core::ptr::drop_in_place<alloc::string::String>(&v5);
        }
        else
        {
            v0 = &g_a2cbb8;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            std::io::stdio::_print(&v0);
            forc_crypto::wait_for_keypress();
            core::ptr::drop_in_place<termion::screen::AlternateScreen<std::io::stdio::Stdout>>(&vvar_105{reg 32});
LABEL_7ce2d6:
            v15 = &v5;
LABEL_7ce2db:
            core::ptr::drop_in_place<alloc::string::String>(v15);
            v12 = 0;
        }
    }
    core::ptr::drop_in_place<serde_json::value::Value>(a0);
    return v12;
}
