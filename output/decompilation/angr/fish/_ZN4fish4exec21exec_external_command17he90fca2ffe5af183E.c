long long fish::exec::exec_external_command(unsigned long long a0, unsigned long long a1[3], struct_2 *a2, unsigned long long a3)
{
    unsigned long long v0[4];  // [bp-0x440]
    unsigned long long v1;  // [bp-0x430]
    void* v2;  // [bp-0x420]
    unsigned long long v3;  // [bp-0x418]
    void* v4;  // [bp-0x410]
    char v5;  // [bp-0x408], Other Possible Types: unsigned long long
    unsigned int v6[2];  // [bp-0x400]
    unsigned int v7;  // [bp-0x3f8]
    char v8;  // [bp-0x3e8]
    void* v9;  // [bp-0x3d8]
    struct_1 *v10;  // [bp-0x3d0]
    char *v11;  // [bp-0x3c8]
    char *v12;  // [bp-0x3c0]
    char *v13;  // [bp-0x3b8]
    char v14;  // [bp-0x3b0], Other Possible Types: unsigned long long
    char v15;  // [bp-0x3a8]
    char *v16;  // [bp-0x390], Other Possible Types: char, unsigned long
    unsigned long v17;  // [bp-0x390]
    unsigned int v18;  // [bp-0x38c]
    char *v19;  // [bp-0x388], Other Possible Types: char, unsigned long, unsigned long long
    char *v20;  // [bp-0x380], Other Possible Types: unsigned long long
    int v21;  // [bp-0x378]
    unsigned short v22;  // [bp-0x370]
    unsigned long v23;  // [bp-0x368]
    char v24;  // [bp-0x350]
    unsigned long v25;  // [bp-0x348]
    unsigned long v26;  // [bp-0x340]
    char v27;  // [bp-0x330]
    unsigned long v28;  // [bp-0x328]
    unsigned long v29;  // [bp-0x320]
    char v30;  // [bp-0x1e8]
    void* v31;  // [bp-0x1d0], Other Possible Types: char
    unsigned long long v32;  // [bp-0x1c8]
    void* v33;  // [bp-0x1c0]
    unsigned int v35;  // r13d
    unsigned int v36;  // eax
    unsigned long long v37;  // 4098
    unsigned long long v38;  // r14
    unsigned int v39;  // ebp
    unsigned int v40;  // edx
    unsigned long long v41;  // rdx
    unsigned int v43;  // ebx
    struct_0 *v44;  // rdi
    void* v45;  // rsi

    if (a2->field_0)
    {
        v16 = &g_14d7c78;
        v19 = 1;
        v20 = 8;
        *((uint128_t *)&v21) = 0;
        core::panicking::panic_fmt(&(char)v16, &g_14d7cd0); /* do not return */
    }
    v30.collect(a2->field_50, a2->field_50 + a2->field_58 * 24);
    v14.new(&v30);
    fish::redirection::dup2_list_resolve_chain(&v5, a3);
    if (a2->field_d6)
    {
        v35 = 2;
    }
    else
    {
        v36 = a1.group().get_pgid();
        v35 = v36;
    }
    v16 = fish::fds::make_fd_blocking(0);
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&(char)v16);
    v0[0] = a0 + 472.export_array();
    v1 = fish::common::wcs2zstring(a2->field_38, a2->field_40);
    if ((char)fish::exec::can_use_posix_spawn_for_job(a1, v6, v7))
    {
        v10 = a0.libdata();
        v37 = atomic_exchange_add(&_ZN4fish4exec10FORK_COUNT17hea85ce41dc2c8cc9E, 1);
        v38 = v37;
        if ((char)_ccall(4, 24, v38 + 1, 0, (v37 + 1 <= v37 ? 1 : 0)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d7c88); /* do not return */
        (char)v16.new(a1, v35, v36, &v5);
        v11 = &v1;
        v12 = &v14;
        v13 = &v0;
        if (*((int *)&(char)v16) == 1)
        {
            v39 = v18;
LABEL_13a6d14:
            fish::fork_exec::postfork::safe_report_exec_error(v39, v1, v41, v14, *((long long *)&v15), v0[2], v0[3]);
            (unsigned int)fish::exec::exit_code_from_exec_error(v39).from_exit_code();
            a2->field_a8 = 1;
            a2->field_ac = v41;
            v43 = (unsigned int)a2 & 0xffffff00 | 1;
        }
        else
        {
            memcpy(&v31, &v19, 416);
            v39 = v40;
            if (((char)fish::exec::exec_external_command::{{closure}}(&v11, &v31) & 1))
                goto LABEL_13a6d14;
            if ((char)core::sync::atomic::atomic_load(&g_15a9560, 0))
            {
                v2 = 0;
                v3 = 1;
                v4 = 0;
                v31.to_flog_str(&g_15a9550);
                (char)v16.into_iter(&v31);
                v2.spec_extend(&(char)v16);
                v2.push(58, &g_14d7ca0);
                v2.push(32, &g_14d7ca0);
                v31 = 0;
                v32 = 4;
                v33 = 0;
                v44 = v10->field_48;
                if (v44)
                {
                    v45 = v44->field_18;
                    v44 = v44->field_20;
                }
                else
                {
                    v45 = 0;
                }
                v16 = 4;
                v19 = v38 + 1;
                v22 = 8197;
                v23 = v40;
                v24 = 1;
                v25 = a2->field_38;
                v26 = a2->field_40;
                v27 = 1;
                *((int *)&v28) = (v45 ? v45 : "<");
                *((int *)&v29) = (v45 ? v44 : 9);
                fish_printf::printf_impl::sprintf_locale(&v8, &v31, "Fork #%d, pid %d: spawn external command '%s' from '%ls'", 56, &v16, 4);
                v8.unwrap(&g_14d7ca0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 4]>(&v16);
                memcpy(&v8, &v31, 16);
                v9 = 0;
                v31.to_flog_str(&v8);
                v16.into_iter(&v31);
                v2.spec_extend(&v16);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
                v2.push(10, &g_14d7ca0);
                fish::flog::flog_impl(v3, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v2, v3);
            }
            if (v40 < 0)
            {
                v17 = &g_14c74d8;
                v19 = 1;
                v20 = 8;
                *((uint128_t *)&v21) = 0;
                core::panicking::panic_fmt(&(char)v16, &g_14c74e8); /* do not return */
            }
            else if (v40)
            {
                a2.set_pid(v40);
                if (a2->field_d6 == 1)
                {
                    a1.group().set_pgid(v40);
                    fish::fork_exec::postfork::execute_setpgid(v40, v40, 1);
                }
                v43 = 0;
            }
            else
            {
                core::option::unwrap_failed(&g_14d7cb8); /* do not return */
            }
        }
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v40);
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v1, v41);
        core::ptr::drop_in_place<alloc::sync::Arc<fish::null_terminated_array::OwningNullTerminatedArray>>(&v0);
        core::ptr::drop_in_place<fish::ast::TokenStream>(v5, v6);
    }
    else
    {
        v16 = &v1;
        v19 = &v14;
        v20 = &v0;
        fish::exec::fork_child_for_process(a1, a2, &v5, v35, v36, &(char)v16);
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v1, v41);
        core::ptr::drop_in_place<alloc::sync::Arc<fish::null_terminated_array::OwningNullTerminatedArray>>(&v0);
        core::ptr::drop_in_place<fish::ast::TokenStream>(v5, v6);
        v43 = 0;
    }
    core::ptr::drop_in_place<fish::null_terminated_array::OwningNullTerminatedArray>(&v14);
    return v43;
}
