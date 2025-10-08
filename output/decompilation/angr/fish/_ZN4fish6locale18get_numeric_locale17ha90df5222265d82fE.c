long long fish::locale::get_numeric_locale(struct_0 *a0)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0x48]
    int v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x34]
    void* v5;  // rax
    void* v6;  // r14
    unsigned int v7;  // eax
    unsigned long v8;  // r15
    char v9;  // dl

    v0.lock();
    v5 = v0.unwrap(&g_14dbf38);
    v6 = v5;
    v7 = (int)v5[8];
    if (v7 == 0x110000)
    {
        fish::locale::read_locale(&v0);
        v8 = v5 + 8;
        *((int *)&v2) = (*((int *)&v0) == 0x110000 ? 4785074604081198 : *((int128_t *)&v0));
        *((int128_t *)v8) = (int128_t)v2;
        v7 = *((int *)v8);
        v1 = (int)(&v2)[12];
        v0 = v3;
        if (*((int *)v8) == 0x110000)
            core::option::unwrap_failed(&g_14dbf50); /* do not return */
    }
    else
    {
        v1 = (int)v6[20];
        v0 = (long long)v6[12];
    }
    a0->field_0 = v7;
    *((unsigned long long *)&(&a0->field_0)[1]) = v0;
    *((unsigned int *)((char *)&a0->field_4 + 4)) = v1;
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v6, v9 & 1);
    return a0;
}
