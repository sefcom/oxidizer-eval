long long starship::modules::git_metrics::GitDiff::get_variable(unsigned long long a0[3], unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    if (a1)
    {
        v3 = a2.equal(a3, "0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs", 1);
        if ((char)v3)
        {
            a0[0] = 9223372036854775810;
            return v3;
        }
    }
    a0[0] = 9223372036854775809;
    a0[1] = a2;
    a0[2] = a3;
    return v3;
}
