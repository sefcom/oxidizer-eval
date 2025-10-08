long long bat::assets::lazy_theme_set::LazyThemeSet::get(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v3 = a0[0].get(a0[1], a1, a2);
    if (!v3)
        return 0;
    v0.get_or_try_init(v3 + 24, v3);
    v4 = 0;
    if (v0 == 13)
    {
        v4 = *((long long *)&v1);
        if (v0 == 13)
            return *((long long *)&v1);
    }
    else if (v0 == 13)
    {
        return 0;
    }
    core::ptr::drop_in_place<core::result::Result<&syntect::highlighting::theme::Theme,bat::error::Error>>(&v0);
    return v4;
}
