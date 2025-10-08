void fish::env_dispatch::handle_change_ambiguous_width(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x30], Other Possible Types: unsigned long long
    int v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x18]
    int v4;  // [bp-0x10]
    unsigned int v6;  // edx
    unsigned long long v7;  // rdi

    v0.getf(a0, "f", 20, 0);
    if (*((long long *)&v0))
    {
        fish::env_dispatch::init_locale::{{closure}}(&v1, &v0);
        v4 = v2;
        v3 = v1;
        if (((char)fish::env_dispatch::handle_change_ambiguous_width::{{closure}}(&v3) & 1))
            v7 = v6;
        else
            v7 = 1;
    }
    else
    {
        v7 = 1;
    }
    core::sync::atomic::atomic_store(&_ZN4fish8fallback20FISH_AMBIGUOUS_WIDTH17h9a8452b42637236aE, (unsigned int)v7.max(0));
    return;
}
