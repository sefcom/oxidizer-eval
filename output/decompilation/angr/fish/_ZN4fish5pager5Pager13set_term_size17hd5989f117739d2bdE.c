long long fish::pager::Pager::set_term_size(unsigned long long a0[33], unsigned long long a1[2])
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    a0[31] = (a1[0] < 0 ? 1 : 0).unwrap_or_default(a1[0]);
    v3 = (a1[1] < 0 ? 1 : 0).unwrap_or_default(a1[1]);
    a0[32] = v3;
    return v3;
}
