long long uu_ptx::assert_str_integrity::h323fdd30696f5c71(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v1;  // rax

    if (a1 > a2)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 28, &g_6ede08); /* do not return */
    }
    else if (a2 > a0)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: end <= s.len()assertion failed: idx < CAPACITY", 32, &g_6ede20); /* do not return */
    }
    else
    {
        return v1;
    }
}
