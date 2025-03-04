double uu_dircolors::escape::h9e775b2dd37a0760(long long a0, long long a1, long long a2)
{
    void* v0;  // [sp-0x58]
    unsigned long long v1;  // [sp-0x50]
    void* v2;  // [sp-0x48]
    unsigned long v3;  // [sp-0x40]
    unsigned long long v4;  // [sp-0x38]
    unsigned int v6;  // ecx
    unsigned long long v7;  // rdx
    unsigned int v8;  // ebp
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rsi
    int v11;  // xmm0
    int v12;  // ymm0

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = a1;
    v4 = a2 + a1;
    if (!(int)::0x4bb020::core::str::validations::next_code_point::h87d043ad57c0cd0e(&v3))
    {
        a0->field_10 = v2;
        v11 = *((int128_t *)&v0);
        *((void*)&a0->field_0) = v11;
        return (unsigned long long)(v12 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v11);
    }
    v6 = 32;
    v8 = v7;
    switch ((unsigned int)v7)
    {
    case 39:
        v9 = "'\\''";
        v10 = ".svg.flcleft";
LABEL_4bccf6:
        ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v0, ::0x4bb440::core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(v9, v10), a2);
        v6 = v8;
        if (!(int)::0x4bb020::core::str::validations::next_code_point::h87d043ad57c0cd0e(&v3))
        {
            a0->field_10 = v2;
            vvar_141{reg 224} = *((int128_t *)&v0);
            *((void*)&a0->field_0) = v11;
            return (unsigned long long)(v12 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | vvar_141{reg 224});
        }
        break;
    case 58:
        if (v6 != 92)
        {
            v9 = "\\:";
            v10 = "# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version of dircolors) are recognized but ignored.\n# Global config options can be specified before TERM or COLORTERM entries\n# Below are TERM or COLORTERM entries, which can be glob patterns, which\n# restrict following config to systems with matching environment variables.\n";
            goto LABEL_4bccf6;
        }
    default:
        ::0x4bb710::alloc::string::String::push::h859ae11851fd8b8e(&v0, v8);
    }
}
