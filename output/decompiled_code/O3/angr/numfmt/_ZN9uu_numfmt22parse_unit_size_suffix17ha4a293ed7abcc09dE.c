long long uu_numfmt::parse_unit_size_suffix::ha4a293ed7abcc09d(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned int v0;  // [sp-0x28]
    unsigned int v1;  // [sp-0x24]
    unsigned long v2;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x18]
    unsigned int v5;  // edx
    unsigned long long v6;  // cc_ndep
    unsigned long v7;  // rdx
    unsigned long long v8;  // rdx
    unsigned long long *v9;  // rax
    char v10;  // al
    unsigned long v11;  // cc_ndep
    unsigned long v12;  // rdx
    unsigned long long v13;  // rdi
    unsigned long long v15;  // xmm0lq

    if (!a1)
        return 1;
    v2 = a0;
    v3 = a0 + a1;
    if (!(int)::0x4bf9d0::core::str::validations::next_code_point::hc54861c7d9430ee6(&v2))
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v0 = v5;
    v2 = "K";
    v3 = &g_4225e8;
    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::hce33086452be4320(&v2, &v0) != 1)
        return 0;
    if (a1 == 1)
    {
        v6 = a1 < 1;
        v8 = v7 + 1;
        if (v8 >= 10)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v9 = &(&g_4225e8)[8 * v8];
    }
    else
    {
        if (a1 != 2)
            return 0;
        v1 = 0;
        v10 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h89d2f8fd1fcac1cc(a0, 2, ::0x4bfbb0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v1), 1);
        if (!v10)
            return 0;
        v6 = amd64g_calculate_rflags_c(17, (unsigned long long)v10, 0, v11);
        v13 = v12 + 1;
        if (v13 > 9)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v9 = &(&g_422638)[8 * v13];
    }
    v15 = *(v9);
    return 1;
}
