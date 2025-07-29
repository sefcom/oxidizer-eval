void uu_touch::error::to_uioerror(unsigned long a0, unsigned long long a1)
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx

    v2 = v4;
    v1 = v5;
    ::0x5c4420::std::io::error::repr_bitpacked::decode_repr(&v0, a1);
    goto (long long)(g_46601c[v0] + (char *)&g_46601c[0]);
}
