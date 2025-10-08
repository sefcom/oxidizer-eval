long long uu_ls::extract_quoting_style(unsigned long long a0, unsigned int a1)
{
    char v0;  // [bp-0x100]
    char v1;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xf0]
    char *v3;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v4;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xd8]
    int v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xb8]
    char v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x98]
    char *v11;  // [bp-0x88], Other Possible Types: char, unsigned long long
    unsigned long long v12;  // [bp-0x80]
    char *v13;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x70]
    char v15;  // [bp-0x68], Other Possible Types: unsigned long
    char v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x50]
    char v18;  // [bp-0x48]
    unsigned long long v20[3];  // rax
    unsigned long long v21;  // rax
    char v22;  // al
    char v23;  // bpl
    unsigned long long v24;  // rax
    int v25;  // xmm0

    v1.try_get_one(a0, "quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f", 13);
    v20 = "quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f".unwrap(13, &v1);
    if (v20)
    {
        v21 = uu_ls::match_quoting_style_name(v20[1], v20[2], a1);
        if ((char)v21 == 4)
        {
            v1 = &g_6868a0;
            v2 = 1;
            v3 = &v0;
            *((uint128_t *)&v4) = 0;
            core::panicking::panic_fmt(&v1, &g_6868e0); /* do not return */
        }
        a1 = (v21 & 4294967295) >> 16;
    }
    else if ((char)a0.get_flag("literalquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timei", 7))
    {
LABEL_5921c8:
        v22 = 3;
    }
    else if ((char)a0.get_flag("escapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull", 6))
    {
        v22 = 2;
    }
    else if ((char)a0.get_flag("quote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignoreco", 10))
    {
        v23 = 2;
        v22 = 2;
    }
    else
    {
        if ((char)a0.get_flag("diredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 5))
            goto LABEL_5921c8;
        std::env::var(&v15, "QUOTING_STYLEslashCOLUMNS: ignoring invalid width in environment variable COLUMNS: : warning: Invalid pattern for ignore: Invalid pattern for hide: ", 13);
        if (v15)
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v15);
            goto LABEL_5923b1;
        }
        else
        {
            memcpy(&v8, &v16, 16);
            v10 = v17;
            v24 = uu_ls::match_quoting_style_name(v9, v17, a1);
            if ((char)v24 == 4)
            {
                std::env::args(&v18);
                v11.next(&v18);
                if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
                {
                    v1.to_vec("ls: Ignoring invalid value of environment variable QUOTING_STYLE: ''\nQUOTING_STYLEslashCOLUMNS: ignoring invalid width in environment variable COLUMNS: : warning: Invalid pattern for ignore: Invalid pattern for hide: ", 2);
                    v7 = v3;
                    v25 = *((int128_t *)&v1);
                }
                else
                {
                    v7 = v13;
                    v25 = *((int128_t *)&v11);
                }
                v6 = v25;
                v11 = &v6;
                v12 = <alloc::string::String as core::fmt::Display>::fmt;
                v13 = &v8;
                v14 = <alloc::string::String as core::fmt::Display>::fmt;
                v1 = &g_6868b0;
                v2 = 3;
                v5 = 0;
                v3 = &v11;
                v4 = 2;
                std::io::stdio::_eprint(&v1);
                core::ptr::drop_in_place<alloc::string::String>(&v6);
                core::ptr::drop_in_place<std::env::Args>(&v18);
                core::ptr::drop_in_place<alloc::string::String>(&v8);
LABEL_5923b1:
                std::io::stdio::stdout();
                v22 = (std::sys::io::is_terminal::isatty::is_terminal() ^ 1) * 2 + 1;
            }
            else
            {
                a1 = (v24 & 4294967295) >> 16;
                core::ptr::drop_in_place<alloc::string::String>(&v16);
            }
        }
    }
    return v22 | v23 * 0x100 | a1 * 0x10000;
}
