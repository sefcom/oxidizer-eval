long long uu_ptx::assert_str_integrity::h323fdd30696f5c71(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v1;  // rax

    if (a1 > a2)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else if (a2 > a0)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else
    {
        return v1;
    }
}
