long long uu_numfmt::parse_unit_size_suffix(unsigned long long a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x24]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v4;  // cc_ndep
    unsigned long v5;  // rdx
    unsigned long v6;  // xmm0lq
    char v7;  // al
    unsigned long v8;  // cc_ndep
    unsigned long v9;  // rdx

    if (!a1)
        return 1;
    v1 = a0;
    v2 = a0 + a1;
    if (!((char)core::str::validations::next_code_point(&v1) & 1))
        core::option::unwrap_failed(&g_502828); /* do not return */
    v1 = "K";
    v2 = "grouping cannot be combined with --toupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
    if (!((char)v1.position(&vvar_65{reg 32}) & 1))
        return 0;
    if (a1 == 2)
    {
        v0 = 0;
        v7 = core::slice::<impl [T]>::ends_with(a0, 2, ::0x466cd0::core::char::methods::encode_utf8_raw(105, &v0), 1);
        if (!v7)
            return 0;
        v4 = _ccall(17, (unsigned long long)v7, 0, v8);
        if (v9 + 1 > 9)
            core::panicking::panic_bounds_check(v9 + 1, 10, &g_502858); /* do not return */
        v6 = *((long long *)&(&g_41ab08)[8 + 8 * v9]);
    }
    else if (a1 == 1)
    {
        v4 = a1 < 1;
        if (v5 + 1 >= 10)
            core::panicking::panic_bounds_check(v5 + 1, 10, &g_502840); /* do not return */
        v6 = *((long long *)&(&g_41aab8)[8 + 8 * v5]);
    }
    else
    {
        return 0;
    }
    if (((CmpF(v6, 4895412794951729151) & 69 | (char)((CmpF(v6, 4895412794951729151) & 69) >> 6)) & 1) != 1)
        return 1;
    return 1;
}
