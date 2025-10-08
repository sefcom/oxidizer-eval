long long uu_head::head_backwards_file(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xd0]
    unsigned long v1;  // [bp-0x80]
    char v2;  // [bp-0x78]
    unsigned long long v4;  // r12
    char v5;  // al

    v0.metadata(a0);
    if (*((int *)&v0) == 2)
        return 1;
    v4 = *((long long *)&v2);
    v5 = uu_head::is_seekable(a0);
    if (*((long long *)&v2) - 1 >= 0x20000000)
        v4 = 0x200;
    if (!v5 || v1 <= v4)
        return uu_head::head_backwards_without_seek_file(a0, a1);
    return uu_head::head_backwards_on_seekable_file(a0, a1);
    return uu_head::head_backwards_without_seek_file(a0, a1);
}
