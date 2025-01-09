long long uu_cut::matcher::ExactMatcher::new::h393e805b97031375(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax

    if (!a1)
    {
        v0 = v2;
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: !needle.is_empty()src/uu/cut/src/matcher.rssrc/uu/cut/src/searcher.rs", 36, &g_529180); /* do not return */
    }
    return a0;
}
