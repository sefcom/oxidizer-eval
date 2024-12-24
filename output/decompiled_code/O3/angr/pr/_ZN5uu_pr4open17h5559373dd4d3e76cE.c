long long uu_pr::open::h5559373dd4d3e76c(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xe8]
    char v1;  // [bp-0xd8]
    char v2;  // [bp-0xc8]
    char v3;  // [bp-0xc0]
    char v4;  // [bp-0x90]
    int v6;  // xmm0

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3ae21e2bf6ec3d68(a1, a2, "-%b %d %H:%M %Y\\s*\\+(\\d+:*\\d*)\\s*invalid --pages argument ':'", 1))
    {
        a0[1] = alloc::boxed::Box$LT$T$GT$::new::h17af007797a5700f(std::io::stdio::stdin::h7215cc131abb55d8());
        a0[2] = &g_708a70;
        a0[0] = 9223372036854775813;
        return a0;
    }
    std::fs::metadata::h6095ccabeafc16d6(&v2, a1, a2);
    if (*((int *)&v2) == 2)
    {
        uu_pr::open::_$u7b$$u7b$closure$u7d$$u7d$::h4fa09195ddd40443(a0, a1, a2, *((long long *)&v3));
        return a0;
    }
    uu_pr::open::_$u7b$$u7b$closure$u7d$$u7d$::h73f74dc2c3ff08f4(&v0, a1, a2, *((int *)&v4));
    v6 = *((int128_t *)&v0);
    *((int128_t *)&a0[2]) = *((int128_t *)&v1);
    *((void*)&a0[0]) = v6;
    return a0;
}
