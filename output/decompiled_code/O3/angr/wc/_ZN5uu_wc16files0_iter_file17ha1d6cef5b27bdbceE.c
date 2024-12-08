long long uu_wc::files0_iter_file::ha1d6cef5b27bdbce(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x64]
    char v2;  // [bp-0x60]
    int v3;  // [sp-0x58]
    unsigned long long v4;  // [sp-0x48]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x28]
    unsigned long long v9;  // rax

    std::fs::File::open::h48f470fc8e7158a2(&v0, a1, a2);
    if (!*((int *)&v0))
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v5, a1, a2);
        v4 = *((long long *)&v6);
        *((int128_t *)&v3) = *((int128_t *)&v5);
        v9 = uu_wc::files0_iter::h6921975c0f384594(a0, *((int *)&v1), &v3);
        return v9;
    }
    a0[0] = 9223372036854775809;
    a0[1] = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc1df86c97eaeef31(*((long long *)&v2), a1, a2);
    a0[2] = &g_532168;
    return &g_532168;
}
