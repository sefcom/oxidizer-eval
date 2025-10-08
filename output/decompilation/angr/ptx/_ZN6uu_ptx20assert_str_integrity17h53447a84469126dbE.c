long long uu_ptx::assert_str_integrity(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v1;  // rax

    if (a1 > a2)
    {
        core::panicking::panic("assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 28, &g_6518f8); /* do not return */
    }
    else if (a2 <= a0)
    {
        return v1;
    }
    else
    {
        core::panicking::panic("assertion failed: end <= s.len()", 32, &g_651910); /* do not return */
    }
}
