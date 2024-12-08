long long uu_numfmt::format::remove_suffix::h01ffc90e94d98f7e(unsigned long long a0[2], unsigned long a1, char a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x68]
    unsigned long long v3;  // [sp-0x60]
    unsigned long long v4;  // [sp-0x58]
    void* v5;  // [sp-0x50]
    unsigned long v6;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x28]
    int v9;  // ymm0
    char v10;  // al
    unsigned int v11;  // r8d

    v0 = (unsigned long long)v9;
    v10 = a3 - 2 & 4294967295;
    if (a2 != 2)
    {
        v11 = (v10 < 4 ? v10 : 2);
        goto *((int *)(4337636 + vvar_5{reg 80} * 4)) + 4337636;
    }
    else
    {
        if (!(((char)a3 & 1) && !(v10 < 4 & v10 != 2)))
        {
            a0[1] = (unsigned long long)v9;
            a0[0] = 0x8000000000000000;
            return 0x8000000000000000;
        }
        v6 = &v0;
        v7 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        v1 = &g_5365b8;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        return ::0x4c2ec0::core::option::Option$LT$T$GT$::map_or_else::hca653ed3c714ac3f(a0, &v1);
    }
}
