long long uu_ls::extract_color(unsigned long long a0)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v2[3];  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned int v5;  // ebp

    if (!(char)uu_ls::is_color_compatible_term())
        return 0;
    v0.try_get_one(a0, _ZN5uu_ls7options5COLOR17hec93557feaaa5819E, g_6a0e70);
    v2 = _ZN5uu_ls7options5COLOR17hec93557feaaa5819E.unwrap(g_6a0e70, &v0);
    if (!v2)
        return a0.contains_id(_ZN5uu_ls7options5COLOR17hec93557feaaa5819E, g_6a0e70);
    v3 = v2[1];
    v4 = v2[2];
    v5 = vvar_44{reg 56} & 0xffffff00 | 1;
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
    else if ((char)v3.equal(v4, "autoday=", 4) || (char)v3.equal(v4, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3) || (char)v3.equal(v4, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6))
    {
        v0 = std::io::stdio::stdout();
        return std::sys::pal::unix::io::is_terminal();
    }
    return 0;
}
