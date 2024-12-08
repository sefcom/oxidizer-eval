double uu_dircolors::escape::h0c714f3271b9e618(long long a0, long long a1, long long a2)
{
    void* v0;  // [sp-0x58]
    unsigned long long v1;  // [sp-0x50]
    void* v2;  // [sp-0x48]
    unsigned long v3;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x38]
    unsigned long long v8;  // rdx
    unsigned int v9;  // ebp
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rdx
    int v13;  // xmm0
    int v14;  // ymm0

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = a1;
    v4 = a2 + a1;
    if (!(int)::0x4bb110::core::str::validations::next_code_point::hdb0fbfa75a7104f6(&v3))
    {
        a0->field_10 = v2;
        v13 = *((int128_t *)&v0);
        *((void*)&a0->field_0) = v13;
        return (unsigned long long)(v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13);
    }
    v9 = v8;
    switch ((unsigned int)v8)
    {
    case 39:
        v10 = "'\\''";
        v11 = ".svg.flcleft";
LABEL_4bcdd6:
        ::0x4bb720::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb7f8895134c20a45(&v0, ::0x4bb530::core::slice::iter::Iter$LT$T$GT$::make_slice::hb89bf646825d8d07(v10, v11), v12);
        if (!(int)::0x4bb110::core::str::validations::next_code_point::hdb0fbfa75a7104f6(&v3))
        {
            a0->field_10 = v2;
            vvar_146{reg 224} = *((int128_t *)&v0);
            *((void*)&a0->field_0) = v13;
            return (unsigned long long)(v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | vvar_146{reg 224});
        }
        break;
    case 58:
        if (32 != 92)
        {
            v10 = "\\:";
            v11 = "# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version of dircolors) are recognized but ignored.\n# Global config options can be specified before TERM or COLORTERM entries\n# Below are TERM or COLORTERM entries, which can be glob patterns, which\n# restrict following config to systems with matching environment variables.\n";
            goto LABEL_4bcdd6;
        }
    default:
        ::0x4bb800::alloc::string::String::push::h859ae11851fd8b8e(&v0, v9, v8);
    }
}
