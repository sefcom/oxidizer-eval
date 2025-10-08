long long uu_cp::localize_to_target(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // r15
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx

    v0 = 9223372036854775814;
    v1 = a3.strip_prefix(a4, a1, a2);
    if (v1)
    {
        a0 + 1.join(a5, a6, v1, v2);
        v0 = 9223372036854775820;
    }
    *(a0) = v0;
    return a0;
}
