long long fish::job_group::JobGroup::get_pgid(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned int *v3;  // rax

    v0 = v2;
    v3 = a0 + 96.get();
    if (!v3)
        return 0;
    return *(v3);
}
