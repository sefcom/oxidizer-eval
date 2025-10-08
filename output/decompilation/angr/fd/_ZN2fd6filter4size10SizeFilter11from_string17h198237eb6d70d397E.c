long long fd::filter::size::SizeFilter::from_string(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = a1;
    v1 = a2;
    v3 = a1.parse_opt(a2);
    if (v3 == 3)
    {
        v4 = fd::filter::size::SizeFilter::from_string::{{closure}}(&v0, a1, a2);
        v3 = 3;
    }
    a0[1] = v4;
    a0[0] = v3;
    return v3;
}
