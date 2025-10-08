long long uu_ls::get_time(unsigned int *a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edx

    v1 = (unsigned long long)uu_ls::get_system_time(a1, a2);
    if (v2 != 0x3b9aca00)
        return a0.from(v1, a2);
    *(a0) = 0;
    return v1;
}
