long long fish::job_group::JobGroup::create_with_job_control(void* a0, char a1)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    char v2;  // [bp-0x90]

    v2.new(a0, fish::job_group::JobId::acquire(), 1, a1);
    v0 = 1;
    v1 = 1;
    return v0.new();
}
