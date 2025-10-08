long long uu_ls::extract_color(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    unsigned long long v2[3];  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned int v5;  // ebp

    if (!(char)uu_ls::is_color_compatible_term())
        return 0;
    v0.try_get_one(a0, "colorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/sr", 5);
    v2 = "colorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/sr".unwrap(5, &v0);
    if (!v2)
        return a0.contains_id("colorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/sr", 5);
    v3 = v2[1];
    v4 = v2[2];
    v5 = vvar_40{reg 56} & 0xffffff00 | 1;
    if ((char)v3.equal(v4, 1, 0))
    {
        return v5;
    }
    else if ((char)v3.equal(v4, "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
    {
        return v5;
    }
    else if ((char)v3.equal(v4, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3))
    {
        return v5;
    }
    else if ((char)v3.equal(v4, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5))
    {
        return v5;
    }
    else if ((char)v3.equal(v4, "auto", 4) || (char)v3.equal(v4, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) || (char)v3.equal(v4, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
    {
        std::io::stdio::stdout();
        return std::sys::io::is_terminal::isatty::is_terminal();
    }
    return 0;
}
