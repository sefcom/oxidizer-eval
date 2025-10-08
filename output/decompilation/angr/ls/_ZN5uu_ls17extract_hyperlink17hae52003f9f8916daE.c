long long uu_ls::extract_hyperlink(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x40]
    char *v3;  // [bp-0x38]
    uint128_t v4;  // [bp-0x30]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned int v9;  // ebp

    v1.try_get_one(a0, "hyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 9);
    v6 = "hyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs".unwrap(9, &v1);
    if (!v6)
        core::option::unwrap_failed(&g_686870); /* do not return */
    v7 = v6[1];
    v8 = v6[2];
    v9 = vvar_31{reg 56} & 0xffffff00 | 1;
    if ((char)v7.equal(v8, "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
    {
        return v9;
    }
    else if ((char)v7.equal(v8, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3))
    {
        return v9;
    }
    else if ((char)v7.equal(v8, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5))
    {
        return v9;
    }
    else
    {
        if (!(char)v7.equal(v8, "auto", 4) && !(char)v7.equal(v8, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) && !(char)v7.equal(v8, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
        {
            if ((char)v7.equal(v8, "nevernointernal error: entered unreachable code: should be handled by clap", 5) || (char)v7.equal(v8, "nointernal error: entered unreachable code: should be handled by clap", 2) || (char)v7.equal(v8, "noneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST", 4))
                return 0;
            v1 = &g_686860;
            v2 = 1;
            v3 = &v0;
            v4 = 0;
            core::panicking::panic_fmt(&v1, &g_686888); /* do not return */
            return 0;
        }
        std::io::stdio::stdout();
        return std::sys::io::is_terminal::isatty::is_terminal();
    }
}
