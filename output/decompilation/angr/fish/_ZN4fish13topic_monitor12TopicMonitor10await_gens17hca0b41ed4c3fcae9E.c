long long fish::topic_monitor::TopicMonitor::await_gens(unsigned long a0, void* a1, struct_0 *a2)
{
    char v0;  // [bp-0x88]
    int v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x78]
    struct_2 *v3;  // [bp-0x70]
    unsigned long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    uint128_t v8;  // [bp-0x48]
    struct_1 *v10;  // r12
    char v11;  // dl
    int v12;  // xmm0

    v2 = a2->field_10;
    if ((char)v0.eq(a2))
    {
        v4 = a1 + 16;
        do
        {
            if ((char)(unsigned int)a1.try_update_gens_maybe_becoming_reader(&v0))
            {
                if ((char)v0.eq(a2))
                {
                    a1.wait();
                    v5.lock(v4);
                    v10 = v5.unwrap(&g_14e4128);
                    *((int128_t *)&v1) = *((int128_t *)&(&v10->padding_0)[1]);
                    v2 = *((long long *)((char *)&v10->field_8 + 8));
                    if (!(char)v10->field_18)
                    {
                        v5 = &g_14e4100;
                        v6 = 1;
                        v7 = 8;
                        v8 = 0;
                        core::panicking::panic_fmt(&v5, &g_14e4140); /* do not return */
                    }
                    *((char *)&v10->field_18) = 0;
                    a1 + 56.notify_all();
                    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v10, v11 & 1);
                }
                else
                {
                    v5 = &g_14e40f0;
                    v6 = 1;
                    v7 = 8;
                    v8 = 0;
                    core::panicking::panic_fmt(&v5, &g_14e4110); /* do not return */
                }
            }
        } while ((char)v0.eq(a2));
    }
    v3->field_10 = v2;
    *((void*)&v3->field_0) = v12;
    return v2;
}
