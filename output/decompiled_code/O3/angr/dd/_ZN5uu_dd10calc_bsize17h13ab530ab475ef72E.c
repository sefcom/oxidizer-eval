long long uu_dd::calc_bsize::h13ab530ab475ef72(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = gcd::binary_usize::hd3a68b124c884425(a0, a1);
    if (v3)
        return a1 * (!(v3 | a0) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)a0) % (v3 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a0) / (v3 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT a0) % v3) CONCAT (unsigned long long)((0 CONCAT a0) / v3));
    core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
}
