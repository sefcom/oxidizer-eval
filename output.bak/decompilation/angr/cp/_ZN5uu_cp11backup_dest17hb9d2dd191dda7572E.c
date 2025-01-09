long long uu_cp::backup_dest::hb9d2dd191dda7572(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rdx

    if (!a5)
    {
        v1 = std::fs::copy::h82e95226cca79e6a(a1, a2, a3, a4);
        if (v1)
        {
            a0[0] = 2;
            a0[1] = v2;
            return v1;
        }
    }
    else
    {
        v1 = std::fs::rename::h07c9d3c373504b5f(a1, a2, a3, a4);
        if (v1)
        {
            a0[0] = 2;
            a0[1] = v1;
            return v1;
        }
    }
    v1 = std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&a0[1], a3, a4);
    a0[0] = 13;
    return v1;
}
