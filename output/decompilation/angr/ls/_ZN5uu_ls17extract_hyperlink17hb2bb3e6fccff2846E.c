long long uu_ls::extract_hyperlink(unsigned long long a0)
{
    struct struct_0 v0[8];  // [bp-0x58]
    char v1;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x48]
    char *v3;  // [bp-0x40]
    uint128_t v4;  // [bp-0x38]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned int v9;  // ebp

    v1.try_get_one(a0, _ZN5uu_ls7options9HYPERLINK17h0e5952ae99e92900E, g_6a0f20);
    v6 = _ZN5uu_ls7options9HYPERLINK17h0e5952ae99e92900E.unwrap(g_6a0f20, &v1);
    if (!v6)
        core::option::unwrap_failed(&g_69f120); /* do not return */
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
    else if (!(char)v7.equal(v8, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5))
    {
        if (!(char)v7.equal(v8, "autoday=", 4) && !(char)v7.equal(v8, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) && !(char)v7.equal(v8, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
        {
            if (!(!(char)v7.equal(v8, "nevernointernal error: entered unreachable code: should be handled by clap", 5) && !(char)v7.equal(v8, "nointernal error: entered unreachable code: should be handled by clap", 2) && !(char)v7.equal(v8, "nonehelpmsecNonecallshimSlimname", 4)))
                return 0;
            v1 = &g_69f110;
            v2 = 1;
            v3 = &v0[0].field_0;
            v4 = 0;
            core::panicking::panic_fmt(&v1, &g_69f138); /* do not return */
            return 0;
        }
        v1 = std::io::stdio::stdout();
        return std::sys::pal::unix::io::is_terminal();
    }
    else
    {
        return v9;
    }
}
