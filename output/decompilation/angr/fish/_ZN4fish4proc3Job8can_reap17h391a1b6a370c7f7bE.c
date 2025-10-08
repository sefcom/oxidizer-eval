long long fish::proc::Job::can_reap(unsigned long long a0, unsigned int a1)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // eax
    unsigned int *v3;  // rax
    unsigned long v4;  // rax

    if (a1.is_completed())
        return 0;
    v1 = a0.is_constructed();
    if (!(char)v1)
    {
        v2 = a0.get_pgid();
        v3 = a1 + 144.get();
        v4 = (!v3 ? 0 : *(v3));
        return v4 & 0xffffffffffffff00 | (unsigned int)v4 != v2;
    }
    return v1 & 0xffffffffffffff00 | 1;
}
