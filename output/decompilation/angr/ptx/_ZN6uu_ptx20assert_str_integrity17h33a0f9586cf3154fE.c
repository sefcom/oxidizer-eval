long long uu_ptx::assert_str_integrity(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v1;  // rax

    if (a1 > a2)
    {
        core::panicking::panic("assertion failed: beg <= end", 28, &g_73b6c0); /* do not return */
    }
    else if (a2 <= a0)
    {
        return v1;
    }
    else
    {
        core::panicking::panic("assertion failed: end <= s.len()assertion failed: idx < CAPACITY", 32, &g_73b6d8); /* do not return */
    }
}
