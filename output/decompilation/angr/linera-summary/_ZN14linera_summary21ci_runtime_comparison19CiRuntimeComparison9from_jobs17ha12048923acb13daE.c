long long linera_summary::ci_runtime_comparison::CiRuntimeComparison::from_jobs(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xa8]
    char v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    int v4;  // [bp-0x78], Other Possible Types: char
    unsigned long v5;  // [bp-0x68]
    char v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x50]
    char *v9;  // [bp-0x18]

    v6.get_runtimes(a1);
    if (*((int *)&v6) == 1)
    {
        *((unsigned long long *)&a0[8]) = v7;
        *((unsigned long long *)a0) = 1;
        core::ptr::drop_in_place<alloc::vec::Vec<octocrab::models::workflows::Job>>(a2);
        return a0;
    }
    memcpy(&v1, &v8, 16);
    v0 = v7;
    v6.get_runtimes(a2);
    if (*((int *)&v6) == 1)
    {
        *((unsigned long long *)&a0[8]) = v7;
        *((unsigned long long *)a0) = 1;
    }
    else
    {
        memcpy(&v3, &v8, 16);
        v2 = v7;
        v6.into_iter(&v2);
        v9 = &v0;
        v4.collect(&v6);
        *((unsigned long *)&a0[24]) = v5;
        a0[8] = v4;
        *((unsigned long long *)a0) = 0;
    }
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::collections::btree::map::BTreeMap<alloc::string::String,u64>>>(&v0);
    return a0;
}
