long long uu_ls::PathData::file_type(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    char *v3;  // rax

    v0 = v2;
    v3 = a0 + 248.get_or_try_init(a0, a1);
    return (*(v3) ? v3 + 4 : 0);
}
