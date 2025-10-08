long long fd::filter::owner::OwnerFilter::matches(unsigned int a0[4], unsigned int a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if (!a0[0].check(a0[1], a1))
        return 0;
    return a0[2].check(a0[3], a2);
}
