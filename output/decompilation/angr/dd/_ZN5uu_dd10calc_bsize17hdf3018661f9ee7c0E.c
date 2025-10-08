long long uu_dd::calc_bsize(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx

    v0 = v2;
    v3 = gcd::binary_u64(a0, a1);
    if (!v3)
        core::panicking::panic_const::panic_const_div_by_zero(&g_53dee8); /* do not return */
    v4 = v3;
    return a1 * (!(v3 | a0) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)a0) % (v4 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a0) / (v4 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT a0) % v4) CONCAT (unsigned long long)((0 CONCAT a0) / v4));
}
