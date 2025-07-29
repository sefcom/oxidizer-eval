long long uu_numfmt::parse_unit_size_suffix(unsigned long long a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x24]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v4;  // rdx
    char v5;  // al
    unsigned long v6;  // cc_ndep
    unsigned long long v7;  // cc_ndep
    unsigned long v8;  // rdi
    unsigned long long *v9;  // rax
    unsigned long v10;  // rdx
    unsigned long v11;  // rdx

    if (!a1)
        return 1;
    v1 = a0;
    v2 = a0 + a1;
    if (!(int)::0x4a8270::core::str::validations::next_code_point(&v1))
        core::option::unwrap_failed(&g_58e080); /* do not return */
    v1 = "K";
    v2 = &g_416e34;
    if (v1.position(&vvar_62{reg 32}) != 1)
        return 0;
    if (a1 == 1)
    {
        v7 = a1 < 1;
        v11 = v10 + 1;
        if (v11 >= 10)
            core::panicking::panic_bounds_check(v11, 10, &g_58e098); /* do not return */
        v9 = &(&g_416e38)[8 * v11];
    }
    else if (a1 == 2)
    {
        v0 = 0;
        v5 = core::slice::<impl [T]>::ends_with(a0, 2, ::0x4a8470::core::char::methods::encode_utf8_raw(105, &v0), v4);
        if (!v5)
            return 0;
        v7 = amd64g_calculate_rflags_c(17, (unsigned long long)v5, 0, v6);
        v8 = v4 + 1;
        if (v8 > 9)
            core::panicking::panic_bounds_check(v8, 10, &g_58e0b0); /* do not return */
        v9 = &(&g_416e88)[8 * v8];
    }
    else
    {
        return 0;
    }
    if ((((char)(CmpF(*(v9), 4895412794951729151) & 69) | (char)((CmpF(*(v9), 4895412794951729151) & 69) >> 6)) & 1) != 1)
        return 1;
    return 1;
}
