long long fish::exec::run_internal_process_or_short_circuit(unsigned long long a0, unsigned long long a1, struct_2 *a2, unsigned long long a3[3], unsigned long long a4[3], unsigned long long a5[3])
{
    void* v0;  // [bp-0x170]
    unsigned long long v1;  // [bp-0x168]
    void* v2;  // [bp-0x160]
    char v3;  // [bp-0x158]
    int v4;  // [bp-0x158]
    int v5;  // [bp-0x150]
    void* v6;  // [bp-0x148]
    void* v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x128]
    void* v9;  // [bp-0x120]
    unsigned short v10;  // [bp-0x118]
    unsigned long long v11;  // [bp-0x110]
    int v12;  // [bp-0x108]
    unsigned long v13;  // [bp-0xf8]
    char v14;  // [bp-0xf0], Other Possible Types: unsigned long long
    char v15;  // [bp-0xe8]
    char v16;  // [bp-0xd0]
    int v17;  // [bp-0xc8]
    char v18;  // [bp-0xb8]
    unsigned int v19;  // [bp-0xa0]
    char v20;  // [bp-0x98]
    int v21;  // [bp-0x88]
    char v22;  // [bp-0x78]
    char v23;  // [bp-0x68]
    unsigned short v24;  // [bp-0x58]
    unsigned long v25;  // [bp-0x50]
    unsigned int v27;  // eax
    unsigned int v28;  // eax
    unsigned long long v29;  // 4100
    struct_1 *v30;  // rax
    unsigned long long v31;  // rdx
    struct_0 *v32;  // rax
    unsigned long long v33;  // rdx

    if (a3[2] || a4[2])
        return fish::exec::run_internal_process(a2, a3, a4, a5);
    a2[1].padding_0[1].store(1);
    if (a2->field_d5 == 1)
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a9500, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v3.to_flog_str(&g_15a94f0);
            v20.into_iter(&v3);
            v0.spec_extend(&v20);
            v0.push(58, &g_14d7b90);
            v0.push(32, &g_14d7b90);
            v7 = 0;
            v8 = 4;
            v9 = 0;
            v27 = a1.job_id();
            v11 = -(v27 < 1) | v27;
            v10 = 16389;
            v16.preview(a1);
            v5 = v17;
            v3 = 1;
            v13 = a2->field_a8;
            v28 = v13.status_value();
            v21 = v12;
            memcpy(&v20, &v10, 16);
            memcpy(&v22, &v3, 16);
            memcpy(&v23, &v5, 16);
            v24 = 8197;
            v25 = v28;
            fish_printf::printf_impl::sprintf_locale(&v3, &v7, "Set status of job %d (%ls) to %d using short circuitFork #%d, pid %d fork external command for '%ls'Process is not a builtinProcess is not external", 52, &v20, 3);
            v3.unwrap(&g_14d7b90);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v20);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v16);
            *((int128_t *)&v4) = *((int128_t *)&v7);
            v6 = 0;
            v10.to_flog_str(&v3);
            v20.into_iter(&v10);
            v0.spec_extend(&v20);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
            v0.push(10, &g_14d7b90);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        v14.get_statuses(a1);
        v29 = v14;
        if ((char)(((0 ^ v29) & (0 ^ -(v29))) >> 63))
        {
            v30 = a1.flags();
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v31);
            if (v30->field_2 == 1)
            {
                v18.get_last_statuses(a0);
                v19 = !v19;
                a0.set_last_statuses(&v18);
            }
            if (v14 != 0x8000000000000000)
                core::ptr::drop_in_place<fish::env::var::Statuses>(v14, *((long long *)&v15));
        }
        else
        {
            a0.set_last_statuses(&v14);
            v32 = a0.libdata_mut();
            if ((char)_ccall(4, 24, v32->field_68 + 1, 0, (unsigned long long)(char)(0 < v29)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d7ba8); /* do not return */
            v32->field_68 = v32->field_68 + 1;
            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v33);
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(a4[0], a4[1]);
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<i8>>(a3[0], a3[1]);
    return fish::exec::run_internal_process(a2, a3, a4, a5);
}
