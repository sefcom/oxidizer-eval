long long fish::topic_monitor::TopicMonitor::try_update_gens_maybe_becoming_reader(unsigned int a0, struct_1 *a1)
{
    char v0;  // [bp-0x81]
    unsigned long v1;  // [bp-0x80]
    char v2;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    uint128_t v5;  // [bp-0x60]
    int v6;  // [bp-0x48]
    char v7;  // [bp-0x38]
    struct_0 *v9;  // rax
    char v10;  // dl
    unsigned long v11;  // r13
    unsigned long long v12;  // rax
    char v13;  // cl

    v2.lock(a0 + 16);
    v9 = v2.unwrap(&g_14e40a8);
    v0 = v10;
    v11 = a0 + 60;
    v1 = a0 + 56;
    while (true)
    {
        v6.updated_gens_in_data(a0, v9);
        if (!(char)a1.eq(&v6))
        {
            v13 = v0 & 1;
            a1->field_10 = *((long long *)&v7);
            *((void*)&a1->field_0) = v6;
            break;
        }
        else if (!v9->field_20)
        {
            if ((char)core::sync::atomic::atomic_load(v11, 0) < 0)
            {
                v0 &= 1;
                v2 = &g_14e4098;
                v3 = 1;
                v4 = 8;
                v5 = 0;
                core::panicking::panic_fmt(&v2, &g_14e40c0); /* do not return */
            }
            if (((char)core::sync::atomic::atomic_compare_exchange(v11, 128, 4, 4) & 1))
                continue;
            v13 = v0 & 1;
            v9->field_20 = 1;
            break;
        }
        else
        {
            v2.wait(v1, v9, v0 & 1);
            v9 = v2.unwrap(&g_14e40d8);
            v0 = v10;
        }
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v9, v13);
    return v12 & 4294967295;
}
