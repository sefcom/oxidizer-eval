long long zoxide::util::tmpfile(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    void* v16;  // [bp-0x48]
    void* v21;  // rbp
    unsigned long long v22;  // rdx

    v13 = a1.as_ref(a2);
    v21 = 0;
    v14 = 16.with_capacity_in(1, 1, &g_534c00);
    v15 = v22;
    v16 = 0;
    v14.spec_extend("tmp_", &g_418ea0);
    while (true)
    {
        v14.push((unsigned int)std::thread::local::LocalKey<T>::with());
    }
}
