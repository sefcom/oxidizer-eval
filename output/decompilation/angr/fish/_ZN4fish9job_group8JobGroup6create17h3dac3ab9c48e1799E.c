long long fish::job_group::JobGroup::create(void* a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    unsigned int v4;  // edx

    v4 = 0;
    if (a1)
        v4 = fish::job_group::JobId::acquire();
    v2.new(a0, v4, 0, 0);
    v0 = 1;
    v1 = 1;
    return v0.new();
}
