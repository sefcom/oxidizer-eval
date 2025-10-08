long long fish::pager::print_max(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned long long a5, char a6, unsigned long long a7)
{
    unsigned long v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]
    unsigned long v2;  // rax

    v0 = v2;
    v1 = a4;
    return fish::pager::print_max_impl(a0, a1, a2, a3, &v1, a5, a6, a7);
}
