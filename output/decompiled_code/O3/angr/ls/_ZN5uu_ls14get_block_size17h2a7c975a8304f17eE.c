long long uu_ls::get_block_size::h2a7c975a8304f17e(unsigned int a0, unsigned long a1, unsigned long a2, char a3)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long long v2;  // rax

    if ((a0 & 0xb000 | 0x4000) != 0x6000)
    {
        v2 = a1 * 0x200;
        if (a3)
            return v2;
    }
    else
    {
        v2 = 0;
        if (a3)
            return 0;
    }
    if (!a2)
    {
        v0 = v2;
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
    }
    else if (!(v0 | a2) >> 32)
    {
        return ((unsigned int)((0 CONCAT (unsigned int)v0) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v0) / (a2 & 4294967295))) & 4294967295;
    }
    else
    {
        return (unsigned long long)((0 CONCAT v0) % a2) CONCAT (unsigned long long)((0 CONCAT v0) / a2);
    }
}
