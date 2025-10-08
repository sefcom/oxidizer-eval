long long uu_tty::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x360]
    char *v1;  // [bp-0x358]
    unsigned long long v2;  // [bp-0x350]
    unsigned long long v3;  // [bp-0x348]
    unsigned long long v4;  // [bp-0x340]
    char v5;  // [bp-0x338], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x330]
    unsigned long long v7;  // [bp-0x328]
    char v8;  // [bp-0x320]
    char v9;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x2e0]
    char *v11;  // [bp-0x2d8], Other Possible Types: unsigned long long
    int v12;  // [bp-0x2d0], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x2c8]
    void* v15;  // rbx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax

    uu_tty::uu_app(&v9);
    v8.get_matches_from(&v9, a0, a1);
    if ((char)v8.get_flag("silent/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 6))
    {
        std::io::stdio::stdin();
        if (std::sys::io::is_terminal::isatty::is_terminal())
            goto LABEL_44bafb;
        v15 = 1.from();
    }
    else
    {
        v0 = std::io::stdio::stdout();
        std::io::stdio::stdin();
        nix::unistd::ttyname(&v5);
        if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        {
            uucore::mods::error::set_exit_code(1);
            v9 = &g_4d1f50;
            v10 = 1;
            v11 = 8;
            *((uint128_t *)&v12) = 0;
            v16 = v0.write_fmt(&v9);
        }
        else
        {
            v3 = v6;
            v4 = v7;
            v1 = &v3;
            v2 = <std::path::Display as core::fmt::Display>::fmt;
            v9 = &g_4d1ef8;
            v10 = 2;
            v13 = 0;
            v11 = &v1;
            v12 = 1;
            v16 = v0.write_fmt(&v9);
            core::mem::drop(v5, v6);
        }
        if (v16)
            std::process::exit(3); /* do not return */
        v17 = v0.flush();
        if (v17)
        {
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v17);
            std::process::exit(3); /* do not return */
        }
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
LABEL_44bafb:
        v15 = 0;
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
    return v15;
}
