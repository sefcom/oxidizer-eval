long long uu_ls::dired::add_total::hcf0e71387fbf703c(unsigned long long a0[7], unsigned long a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    v1 = a0[6];
    if (!v1)
    {
        v2 = a0[2];
        v1 = (!v2 ? 0 : *((long long *)(v2 * 16 + a0[1] - 8)) + 1);
    }
    a0[6] = v1 + a1 + 2;
    return v1 + a1 + 2;
}
