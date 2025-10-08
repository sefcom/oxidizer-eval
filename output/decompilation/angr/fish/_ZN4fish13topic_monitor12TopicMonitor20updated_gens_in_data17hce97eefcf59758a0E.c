long long fish::topic_monitor::TopicMonitor::updated_gens_in_data(struct_0 *a0, unsigned long a1, void* a2)
{
    char v0;  // [bp-0x131]
    void* v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    void* v3;  // [bp-0x120]
    unsigned long v4;  // [bp-0x110]
    unsigned long v5;  // [bp-0x108]
    unsigned long v6;  // [bp-0x100]
    unsigned long v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    void* v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xd0]
    unsigned short v12;  // [bp-0xc8]
    char v13;  // [bp-0xc6]
    int v14;  // [bp-0xc0]
    unsigned long long v15;  // [bp-0xa8]
    unsigned long long v16;  // [bp-0xa0]
    unsigned long long v17;  // [bp-0x98]
    uint128_t v18;  // [bp-0x90]
    int v19;  // [bp-0x78]
    int v20;  // [bp-0x60]
    char v21;  // [bp-0x48]
    unsigned long v23;  // rbx
    unsigned long long v24;  // rax
    char v25;  // bpl
    unsigned long long v26;  // rax
    unsigned long long v27;  // rbx
    unsigned int v28;  // r15d
    unsigned long long v29;  // cc_op
    unsigned long long v30;  // cc_dep1
    unsigned long long v31;  // cc_dep2
    unsigned long v32;  // rcx
    unsigned long long v33;  // cc_ndep
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long long v39;  // cc_ndep

    v23 = a1 + 60;
    while (true)
    {
        v24 = (unsigned long long)core::sync::atomic::atomic_load(v23, 0);
        if (!((char)v24 & 127))
            break;
        v25 = v24;
        if (!((char)core::sync::atomic::atomic_compare_exchange_weak(v23, v24 & 4294967295, 0) & 1))
        {
            if (v25 >= 0)
            {
                v10 = 0;
                v11 = 3;
                v12 = 0x100;
                v13 = 2;
                v26 = v10.next();
                if ((char)v26 != 3)
                {
                    v27 = v26 & 4294967295;
                    v7 = a2 + 8;
                    v4 = a2 + 24;
                    v5 = a2 + 16;
                    v9 = &g_15a9800;
                    v8 = &g_15a97f0;
                    do
                    {
                        v0 = v27;
                        v28 = v27;
                        v39 = v39;
                        if ((v25 & fish::topic_monitor::topic_to_bit(v28)))
                        {
                            v29 = 17;
                            v30 = v27 & 255;
                            v31 = 0;
                            if ((char)v27)
                            {
                                v29 = 7;
                                v30 = v28;
                                v31 = 1;
                                v32 = (v28 == 1 ? v5 : v4);
                            }
                            else
                            {
                                v32 = v7;
                            }
                            v33 = _ccall(v29, v30, v31, v39);
                            if ((char)_ccall(4, 24, *((long long *)v32) + 1, 0, _ccall(v29, v30, v31, v39)))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14e4038); /* do not return */
                            *((long long *)v32) = *((long long *)v32) + 1;
                            v39 = v33;
                            if ((char)core::sync::atomic::atomic_load(&g_15a9800, 0))
                            {
                                v1 = 0;
                                v2 = 1;
                                v3 = 0;
                                v14.to_flog_str(&g_15a97f0);
                                v15.into_iter(&v14);
                                v1.spec_extend(&v15);
                                v1.push(58, &g_14e4050);
                                v1.push(32, &g_14e4050);
                                v19.to_vec("Updating topictoNo thread should be waitingGenerations should not have changed if we are the reader.We should be the readerIncoming gen count exceeded published countPrincipal topic monitor not initializedsrc/trace.rssrc/tty_handoff.rs", 14);
                                v15.into_iter(&v19);
                                v1.spec_extend(&v15);
                                v1.push(32, &g_14e4050);
                                v14.to_flog_str(&v0);
                                v15.into_iter(&v14);
                                v1.spec_extend(&v15);
                                v1.push(32, &g_14e4050);
                                v20.to_vec("toNo thread should be waitingGenerations should not have changed if we are the reader.We should be the readerIncoming gen count exceeded published countPrincipal topic monitor not initializedsrc/trace.rssrc/tty_handoff.rs", 2);
                                v15.into_iter(&v20);
                                v1.spec_extend(&v15);
                                v1.push(32, &g_14e4050);
                                v6 = v7;
                                if ((char)v27)
                                {
                                    v6 = v5;
                                    if (v28 == 2)
                                        v6 = v4;
                                }
                                v21.to_vec(core::fmt::num::imp::<impl usize>::_fmt(*((long long *)v6), &v15, 20), a2);
                                v15.into_iter(&v21);
                                v1.spec_extend(&v15);
                                v1.push(10, &g_14e4050);
                                fish::flog::flog_impl(v2, 0);
                                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
                                v39 = v33;
                            }
                        }
                        v27 = v10.next() & 4294967295;
                    } while ((char)v37 != 3);
                }
                a1 + 56.notify_all();
                break;
            }
            else
            {
                v15 = &g_14e4028;
                v16 = 1;
                v17 = 8;
                v18 = 0;
                core::panicking::panic_fmt(&v15, &g_14e4068); /* do not return */
            }
        }
    }
    v38 = (long long)a2[24];
    a0->field_0 = (int128_t)a2[8];
    a0->field_10 = v38;
    return v38;
}
