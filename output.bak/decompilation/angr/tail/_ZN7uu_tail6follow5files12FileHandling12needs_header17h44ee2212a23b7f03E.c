long long uu_tail::follow::files::FileHandling::needs_header::h44ee2212a23b7f03(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    if (!a3)
        return 0;
    v3 = v2 | -0x100 | 1;
    if (a0[0] != 0x8000000000000000)
    {
        v0 = v3;
        v4 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h18d1c3f7aa59eb02(a0[1], a0[2], a1, a2);
        v3 = v4 | -0x100 | (char)v4 ^ 1;
        return v3;
    }
    return v3;
}
