long long uu_ls::get_block_size(unsigned int a0, unsigned long a1, unsigned long a2, char a3)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if ((a0 & 0xb000 | 0x4000) == 0x6000)
    {
        v2 = 0;
        if (a3)
            return 0;
    }
    else
    {
        v2 = a1 * 0x200;
        if (a3)
            return a1 * 0x200;
    }
    if (!a2)
    {
        v0 = v2;
        core::panicking::panic_const::panic_const_div_by_zero(&g_69f510); /* do not return */
    }
    else if ((v2 | a2) >> 32)
    {
        return (unsigned long long)((0 CONCAT v2) % a2) CONCAT (unsigned long long)((0 CONCAT v2) / a2);
    }
    else
    {
        return ((unsigned int)((0 CONCAT (unsigned int)v2) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v2) / (a2 & 4294967295))) & 4294967295;
    }
}
