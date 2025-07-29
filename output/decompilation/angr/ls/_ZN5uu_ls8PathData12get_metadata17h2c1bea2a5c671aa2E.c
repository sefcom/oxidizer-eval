long long uu_ls::PathData::get_metadata(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned int *v3;  // rax

    v0 = v2;
    v3 = a0 + 72.get_or_try_init(a0, a1);
    if (*(v3) != 2)
        return v3;
    return 0;
}
