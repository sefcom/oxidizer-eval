long long fish::proc::Job::get_statuses(void* a0, unsigned long long a1[5])
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned int *v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned int v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x5c]
    unsigned long long v5;  // [bp-0x58]
    unsigned long v6;  // [bp-0x50]
    unsigned long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    void* v9;  // [bp-0x38]
    unsigned int v11;  // ebp
    char v12;  // r13b
    unsigned long long v13;  // rax
    void* v14;  // rdx
    unsigned long long v15;  // r15
    unsigned long long v16;  // rsi
    unsigned int v17;  // eax
    unsigned int v18;  // eax
    unsigned int v19;  // r14d

    v0.default();
    v0.resize(a1[4]);
    v7 = a1[3];
    v8 = a1[4] * 224 + a1[3];
    v9 = 0;
    v11 = 0;
    v5 = &g_14df458;
    while (true)
    {
        v13 = v7.next();
        if (!v14)
            break;
        v15 = v13;
        v6 = (long long)v14[168];
        if ((int)v14[168])
        {
            if ((char)v6.signal_exited())
            {
                v17 = v6.signal_code();
                v17.new();
                v4 = v17;
            }
            v11 = v6.status_value();
            v18 = v6.status_value();
            if (v15 >= v2)
                core::panicking::panic_bounds_check(v15, v16, 0x14df458); /* do not return */
            v1[v15] = v18;
            v12 = 1;
        }
        else if (v15 < v2)
        {
            v1[v15] = v11;
        }
        else
        {
            v5 = &g_14df470;
            v5 = &g_14df470;
            core::panicking::panic_bounds_check(v15, v2, &g_14df470); /* do not return */
        }
    }
    if (!(v12 & 1))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<fish::env::var::Statuses>(v0, v1);
        return a0;
    }
    v19 = (!*((char *)(a1.flags() + 2)) ? v11 : !v11);
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v14);
    v3 = v19;
    *((int128_t *)a0) = *((int128_t *)&v0);
    *((unsigned long long *)&a0[16]) = v2;
    *((unsigned int *)&a0[24]) = v3;
    *((unsigned int *)&a0[28]) = v4;
    return a0;
}
