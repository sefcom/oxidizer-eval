long long fish::env::environment_impl::EnvScopedImpl::export_array_needs_regeneration(unsigned long long a0[13])
{
    char v0;  // [bp-0x11]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rax
    unsigned long v5;  // rax

    if (!a0[12])
        return v5 & 0xffffffffffffff00 | 1;
    v1 = a0[8];
    v2 = a0[8] + a0[9] * 8;
    v0 = 0;
    v4 = (unsigned long long)a0[10].enumerate_generations(a0[11], &v1, &v0);
    if (!v1)
    {
        return 0;
    }
    else if (v1 != v2)
    {
        return (v4 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
    }
    else
    {
        return 0;
    }
}
