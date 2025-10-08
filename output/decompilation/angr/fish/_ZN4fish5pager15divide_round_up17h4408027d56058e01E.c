long long fish::pager::divide_round_up(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    if (!a0)
    {
        return 0;
    }
    else if (a1)
    {
        if ((a0 | a1) >> 32)
        {
            v3 = (unsigned long long)((0 CONCAT a0) % a1) CONCAT (unsigned long long)((0 CONCAT a0) / a1);
            v4 = ((unsigned long long)((0 CONCAT a0) % a1) CONCAT (unsigned long long)((0 CONCAT a0) / a1)) >> 64;
        }
        else
        {
            v3 = ((unsigned int)((0 CONCAT (unsigned int)a0) % (a1 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a0) / (a1 & 4294967295))) & 4294967295;
            v4 = ((unsigned int)((0 CONCAT (unsigned int)a0) % (a1 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a0) / (a1 & 4294967295))) >> 32;
        }
        if ((char)__CFADD__(v4, v3))
            core::panicking::panic_const::panic_const_add_overflow(&g_14dc6f8); /* do not return */
        return (v4) + v3;
    }
    else
    {
        core::panicking::panic("assertion failed: denom != 0assertion failed: comp_info.comp.last().unwrap().len() >= comp_info.colors.len()FISH_FAST_FAIL Debug PID %d or press Enter to exit\nsrc/panic.rssrc/parse_constants.rs", 28, &g_14dc6e0); /* do not return */
    }
}
