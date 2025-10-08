long long ruff_python_formatter::comments::map::InOrderEntry::increment_trailing_range(unsigned int a0[4])
{
    unsigned long long v1;  // rax
    unsigned int v2;  // eax
    unsigned long long v3;  // rax

    if (a0[2])
    {
        if (a0[3])
            return a0[3].increment();
        v1 = a0[2].incremented();
        a0[3] = v1;
        return v1;
    }
    else
    {
        if (!a0[3])
        {
            v2 = a0[1];
            a0[2] = v2;
            v3 = v2.incremented();
            a0[3] = v3;
            return v3;
        }
        core::panicking::panic("internal error: entered unreachable codeCan't extend the leading range for an in order entry with dangling comments.Can't extend the dangling range for an in order entry with trailing comments.Trailing end shouldn't be set if trailing start is none", 40, &g_97d050); /* do not return */
    }
}
