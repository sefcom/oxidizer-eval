long long uu_numfmt::parse_unit_size_suffix::h0d4904f7b87ea86b(unsigned long long a0, unsigned long a1)
{
    unsigned int v0;  // [sp-0x28]
    unsigned int v1;  // [sp-0x24]
    unsigned long v2;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x18]
    unsigned int v6;  // edx
    unsigned long long v7;  // cc_ndep
    unsigned long v8;  // rdx
    unsigned long long v9;  // rdx
    unsigned long long *v10;  // rax
    char v11;  // al
    unsigned long v12;  // cc_ndep
    unsigned long v13;  // rdx
    unsigned long long v14;  // rdi
    unsigned long long v15;  // xmm0lq

    if (!a1)
        return 1;
    v2 = a0;
    v3 = a0 + a1;
    if (!(int)::0x4bf580::core::str::validations::next_code_point::hea6d5bf7d5f3451a(&v2))
        core::option::unwrap_failed::h0e11329e76906eaa(&g_5358a8); /* do not return */
    v0 = v6;
    v2 = "K";
    v3 = &g_422468;
    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::ha514c49988fbe620(&v2, &v0) != 1)
        return 0;
    if (a1 == 1)
    {
        v7 = a1 < 1;
        v9 = v8 + 1;
        if (v9 >= 10)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v9, 10, &g_5358c0); /* do not return */
        v10 = &(&g_422468)[8 * v9];
    }
    else
    {
        if (a1 != 2)
            return 0;
        v1 = 0;
        v11 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::ha109e61deb96259b(a0, 2, ::0x4bf760::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v1), 1);
        if (!v11)
            return 0;
        v7 = amd64g_calculate_rflags_c(17, (unsigned long long)v11, 0, v12);
        v14 = v13 + 1;
        if (v14 > 9)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v14, 10, &g_5358d8); /* do not return */
        v10 = &(&g_4224b8)[8 * v14];
    }
    v15 = *(v10);
    return 1;
}
