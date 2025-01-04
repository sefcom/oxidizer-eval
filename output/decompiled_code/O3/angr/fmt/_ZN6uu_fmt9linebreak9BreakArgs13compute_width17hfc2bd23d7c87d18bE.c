long long uu_fmt::linebreak::BreakArgs::compute_width::hfc2bd23d7c87d18b(struct_0 *a0, unsigned long long a1[7], unsigned long a2, unsigned int a3)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdi
    unsigned long long v4;  // rax

    if (a3)
        return 0;
    v2 = a1[6];
    if (!a1[0])
        return v2;
    v3 = a0->field_40;
    if (v3)
    {
        v4 = a1[1] + a2;
        v2 = v2 - a2 + v3 * ((!(v4 | v3) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v4) % (v3 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v4) / (v3 & 4294967295))) & 4294967295 & 4294967295 : (unsigned long long)((0 CONCAT v4) % v3) CONCAT (unsigned long long)((0 CONCAT v4) / v3)) + 1);
        return v2;
    }
    v0 = v2;
    core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
}
