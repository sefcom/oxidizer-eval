long long fish::proc::Job::continue_job(struct_0 *a0, struct_2 *a1)
{
    void* v0;  // [bp-0x140]
    unsigned long long v1;  // [bp-0x138]
    void* v2;  // [bp-0x130]
    char v3;  // [bp-0x128]
    int v4;  // [bp-0x128]
    int v5;  // [bp-0x120]
    void* v6;  // [bp-0x118]
    void* v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xf8]
    void* v9;  // [bp-0xf0]
    unsigned short v10;  // [bp-0xe8]
    unsigned long long v11;  // [bp-0xe0]
    int v12;  // [bp-0xd8]
    int v13;  // [bp-0xc8], Other Possible Types: unsigned int
    unsigned int v14;  // [bp-0xc4]
    int v15;  // [bp-0xb8]
    char v16;  // [bp-0xa8]
    char v17;  // [bp-0x98]
    char v18;  // [bp-0x88]
    unsigned long v19;  // [bp-0x80]
    unsigned long v20;  // [bp-0x78]
    char v21;  // [bp-0x68]
    unsigned long v22;  // [bp-0x60]
    unsigned long v23;  // [bp-0x58]
    char v24;  // [bp-0x48]
    unsigned int v26;  // eax
    char v27;  // al
    unsigned int v28;  // ecx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx
    unsigned long v31;  // rcx
    unsigned long long v32;  // rax
    unsigned long long v33;  // 4100
    struct_1 *v34;  // rax
    unsigned long long v35;  // rdx

    if ((char)core::sync::atomic::atomic_load(&g_15a95f0, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3.to_flog_str(&g_15a95e0);
        (char)v13.into_iter(&v3);
        v0.spec_extend(&(char)v13);
        v0.push(58, &g_14df3c8);
        v0.push(32, &g_14df3c8);
        v7 = 0;
        v8 = 4;
        v9 = 0;
        v26 = a0.job_id();
        v11 = -(v26 < 1) | v26;
        v10 = 16389;
        *((int128_t *)&v5) = *((int128_t *)&(&a0->padding_0)[1]);
        v3 = 1;
        v27 = a0.is_completed();
        v28 = a1->field_5a;
        v15 = v12;
        *((int128_t *)&v13) = *((int128_t *)&v10);
        memcpy(&v16, &v3, 16);
        memcpy(&v17, &v5, 16);
        v18 = 0;
        *((int *)&v19) = (v27 ? "COMPLETEDNON-INTERACTIVEINTERACTIVEFailed to send SIGCONT to procs in job %lskillpg(%d, %s)" : "UNCOMPLETEDCOMPLETEDNON-INTERACTIVEINTERACTIVEFailed to send SIGCONT to procs in job %lskillpg(%d, %s)");
        v20 = (v27 ^ 1) * 2 + 9;
        v21 = 0;
        *((int *)&v22) = (v28 ? "INTERACTIVEFailed to send SIGCONT to procs in job %lskillpg(%d, %s)" : "NON-INTERACTIVEINTERACTIVEFailed to send SIGCONT to procs in job %lskillpg(%d, %s)");
        v23 = (v28 ^ 1) * 4 + 11;
        fish_printf::printf_impl::sprintf_locale(&v3, &v7, "Run job %d (%ls), %ls, %lsUNCOMPLETEDCOMPLETEDNON-INTERACTIVEINTERACTIVEFailed to send SIGCONT to procs in job %lskillpg(%d, %s)", 26, &(char)v13, 4);
        v3.unwrap(&g_14df3c8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 4]>(&(char)v13);
        *((int128_t *)&v4) = *((int128_t *)&v7);
        v6 = 0;
        v10.to_flog_str(&v3);
        (char)v13.into_iter(&v10);
        v0.spec_extend(&(char)v13);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
        v0.push(10, &g_14df3c8);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    if (!(char)fish::reader::fish_is_unwinding_for_exit())
    {
        while (!(char)a0.is_stopped() && !a0.is_completed())
        {
            fish::proc::process_mark_finished_children(a1, 1);
            if ((char)fish::reader::fish_is_unwinding_for_exit())
                break;
        }
    }
    v29 = a0.is_completed();
    if (!(char)v29)
    {
        return v29;
    }
    else if (a0->field_18)
    {
        v30 = a0->field_18 * 224;
        if (*((int *)(*((long long *)((char *)&a0->field_8 + 8)) + v30 - 56)) == 1)
        {
            v31 = *((int *)(*((long long *)((char *)&a0->field_8 + 8)) + v30 - 52));
            if (((char)v31 & 127))
            {
                v13 = *((int *)(*((long long *)((char *)&a0->field_8 + 8)) + v30 - 56));
                v14 = v31;
                v32 = v13.signal_exited();
                if (!(char)v32)
                    return v32;
            }
        }
        v24.get_statuses(a0);
        v33 = *((long long *)&v24);
        if ((char)(((0 ^ v33) & (0 ^ -(v33))) >> 63))
            return 0;
        a1.set_last_statuses(&v24);
        v34 = a1.libdata_mut();
        if ((char)_ccall(4, 24, v34->field_68 + 1, 0, (unsigned long long)(char)(0 < v33)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14df3f8); /* do not return */
        v34->field_68 = v34->field_68 + 1;
        return (unsigned long long)core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v35);
    }
    else
    {
        core::option::unwrap_failed(&g_14df3e0); /* do not return */
    }
}
