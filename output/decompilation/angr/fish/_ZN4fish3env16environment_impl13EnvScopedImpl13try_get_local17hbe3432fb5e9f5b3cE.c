long long fish::env::environment_impl::EnvScopedImpl::try_get_local(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x60]
    void* v1;  // [bp-0x58]
    void* v2;  // [bp-0x50]
    int v3;  // [bp-0x48]
    char v4;  // [bp-0x38]
    void* v6;  // rax

    a1.parsed_source_ref();
    v0 = a1;
    while (true)
    {
        v6 = v0.next();
        if (!v6)
        {
            core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeIter>(&v0);
            *((unsigned long long *)v2) = 0;
            return a0;
        }
        v1 = v6;
        v3.find_entry(v6, a2, a3);
        if ((long long)v3)
        {
            *((long long *)&v2[16]) = *((long long *)&v4);
            *(v2) = v3;
            core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
            return (unsigned long long)core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeIter>(&v0);
        }
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v3);
        core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
    }
}
