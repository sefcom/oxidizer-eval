long long uu_head::head_backwards_file::ha0aeb9760a675e3f(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8]
    char v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    unsigned long long v6;  // r12

    std::fs::File::metadata::he899a18112e6f19e(&v0, a0);
    if (*((int *)&v0) == 2)
        return *((long long *)&v1);
    v6 = *((long long *)&v3);
    if (!((char)uu_head::is_seekable::hd1f109ae7175c200(a0) && *((long long *)&v2) > 0x200))
        return uu_head::head_backwards_without_seek_file::h4751660dfab5d25f(a0, a1);
    return uu_head::head_backwards_on_seekable_file::h5f694e1b23998d6d(a0, a1);
}
