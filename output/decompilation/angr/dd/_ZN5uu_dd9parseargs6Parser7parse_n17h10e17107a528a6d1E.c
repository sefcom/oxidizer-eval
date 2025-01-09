long long uu_dd::parseargs::Parser::parse_n::h10e17107a528a6d1(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r12
    unsigned long long v6;  // r13

    v4 = uu_dd::parseargs::parse_bytes_with_opt_multiplier::h61a7f82d67afab9c(&v0, a1, a2);
    v5 = *((long long *)&v0);
    v6 = *((long long *)&v1);
    if (v5 != 14)
    {
        *((int128_t *)&a0[2]) = *((int128_t *)&v2);
    }
    else
    {
        v4 = ::0x4d2660::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(a1, a2);
        a0[2] = v6;
        v6 = v4 & 4294967295;
    }
    a0[1] = v6;
    a0[0] = v5;
    return v4;
}
