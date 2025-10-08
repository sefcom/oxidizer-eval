long long uu_touch::error::to_uioerror(unsigned long long a0[4], unsigned long long a1)
{
    char v0;  // [bp-0x20]
    char v1;  // [bp-0x1c]
    unsigned long v3;  // rax
    unsigned long long v4;  // rcx

    std::io::error::repr_bitpacked::decode_repr(&v0, a1);
    if (v0)
    {
        v3 = (unsigned int)a1.kind();
        v4 = 3;
    }
    else
    {
        v3 = *((int *)&v1);
        v4 = 2;
    }
    a0[0] = 0x8000000000000000;
    a0[3] = v3 * 0x100000000 | v4;
    return v3 * 0x100000000 | v4;
}
