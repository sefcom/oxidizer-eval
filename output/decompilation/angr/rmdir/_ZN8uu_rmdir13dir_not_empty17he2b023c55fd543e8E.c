void uu_rmdir::dir_not_empty(unsigned long long *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx

    v2 = v4;
    v1 = v5;
    std::io::error::repr_bitpacked::decode_repr(&v0, *(a0));
    goto (long long)(g_4184a0[v0] + (char *)&g_4184a0[0]);
}
