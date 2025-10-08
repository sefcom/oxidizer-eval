long long fish::exec::run_internal_process(void* a0, struct_3 *a1, struct_0 *a2, unsigned long long a3[3])
{
    char v0;  // [bp-0x128]
    int v1;  // [bp-0x128]
    unsigned int v2;  // [bp-0x127]
    unsigned short v3;  // [bp-0x123]
    char v4;  // [bp-0x121]
    unsigned long v5;  // [bp-0x120]
    void* v6;  // [bp-0x118], Other Possible Types: char, unsigned long
    unsigned int v7;  // [bp-0x104]
    void* v8;  // [bp-0x100]
    unsigned long long v9;  // [bp-0xf8]
    void* v10;  // [bp-0xf0]
    struct_0 *v11;  // [bp-0xe8]
    struct_3 *v12;  // [bp-0xe0]
    char v13;  // [bp-0xd0]
    unsigned long long v14;  // [bp-0xc8]
    void* v15;  // [bp-0xc0]
    unsigned long long v16;  // [bp-0xb8]
    void* v17;  // [bp-0xb0]
    int v18;  // [bp-0xa8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned int v19;  // [bp-0xa7]
    unsigned short v20;  // [bp-0xa3]
    char v21;  // [bp-0xa1]
    unsigned long v22;  // [bp-0xa0], Other Possible Types: unsigned long long
    int v23;  // [bp-0x98], Other Possible Types: char, unsigned long, unsigned long long
    int v24;  // [bp-0x90]
    char v25;  // [bp-0x88]
    int v26;  // [bp-0x80], Other Possible Types: unsigned long
    void* v27;  // [bp-0x78]
    unsigned long long v28;  // [bp-0x70]
    uint128_t v29;  // [bp-0x68]
    unsigned long long v30;  // [bp-0x58]
    void* v31;  // [bp-0x50]
    unsigned int v32;  // [bp-0x48]
    struct_4 *v33;  // [bp-0x40]
    unsigned int v34;  // [bp-0x38]
    unsigned int v35;  // [bp-0x34]
    char v36;  // [bp-0x30]
    struct_4 *v38;  // rbp
    struct_2 *v39;  // r15
    int v40;  // xmm0
    unsigned long v41;  // rbx
    unsigned int v42;  // eax
    unsigned int v43;  // eax
    unsigned long v44;  // rbx

    a0.check_generations_before_launch();
    v23.new();
    v18 = 1;
    v22 = 1;
    v38 = (char)v18.new();
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v38) + 1, 0, (unsigned long long)(char)(&v36 < 248))))
    {
        v14 = a0 + 152.replace(v38);
        v7 = (unsigned int)v14 & 0xffffff00 | v14;
        if (v14)
        {
            v18 = &g_14d7b20;
            v22 = 1;
            v23 = 8;
            *((uint128_t *)&v24) = 0;
            core::panicking::panic_fmt(&(char)v18, &g_14d7b48); /* do not return */
        }
        else if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v38) + 1, 0, _ccall(20, v14, 0, (unsigned long long)(char)(&v36 < 248)))))
        {
            v34 = 4294967295;
            *((uint128_t *)&v18) = a1->field_0;
            v23 = a1->field_10;
            v35 = 4294967295;
            *((uint128_t *)&v24) = a2->field_0;
            v26 = a2->field_10;
            v27 = 0;
            v28 = 8;
            v29 = 0;
            v30 = 4;
            v31 = 0;
            v33 = v38;
            v32 = 0;
            v39 = (char)v18.new();
            v12 = a1;
            v11 = a2;
            if ((char)core::sync::atomic::atomic_load(&g_15a9650, 0))
            {
                v8 = 0;
                v9 = 1;
                v10 = 0;
                v0.to_flog_str(&g_15a9640);
                (char)v18.into_iter(&v0);
                v8.spec_extend(&(char)v18);
                v8.push(58, &g_14d7b60);
                v8.push(32, &g_14d7b60);
                v15 = 0;
                v16 = 4;
                v17 = 0;
                v5 = v38->field_10;
                v0 = 4;
                if (!(long long)a0[88])
                    core::option::unwrap_failed(&g_14d7b78); /* do not return */
                v40 = *((int128_t *)((long long)a0[80] + 8));
                v18 = v0;
                v19 = v2;
                v20 = v3;
                v21 = v4;
                v22 = v5;
                *((int128_t *)&v23) = *((int128_t *)&v6);
                v25 = 1;
                v26 = v40;
                fish_printf::printf_impl::sprintf_locale(&v0, &v15, "Created internal proc %llu to write output for proc '%ls'Set status of job %d (%ls) to %d using short circuitFork #%d, pid %d fork external command for '%ls'Process is not a builtinProcess is not external", 57, &v18, 2);
                v0.unwrap(&g_14d7b60);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v18);
                *((int128_t *)&v1) = *((int128_t *)&v15);
                v6 = 0;
                v15.to_flog_str(&v0);
                v18.into_iter(&v15);
                v8.spec_extend(&v18);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                v8.push(10, &g_14d7b60);
                fish::flog::flog_impl(v9, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v8, v9);
            }
            fish::redirection::dup2_list_resolve_chain(&v18, a3);
            v41 = &v39->field_48;
            core::ptr::drop_in_place<fish::ast::TokenStream>(v39->field_48[0], v39->field_48[1]);
            v39->field_50 = v23;
            *((int128_t *)&v39->field_48[0]) = (int128_t)v18;
            v42 = v41.fd_for_target_fd(1);
            *((unsigned int *)&v39->padding_68[0]) = v42;
            v43 = v41.fd_for_target_fd(2);
            *((unsigned int *)&v39->padding_68[4]) = v43;
            if (v42 >= 0 && v39->field_10 || v43 >= 0 && v39->field_28)
            {
                v18.clone(a3[1], a3[2]);
                v6 = v23;
                *((int128_t *)&v1) = (int128_t)v18;
                v44 = &v39->field_30;
                core::ptr::drop_in_place<fish::io::IoChain>(v44);
                *((unsigned long *)(v44 + 16)) = v6;
                *((int128_t *)v44) = (int128_t)v1;
                v39->field_58 = (long long)a0[168];
                fish::threads::iothread_perform_cant_wait(v39);
            }
            else
            {
                v38->field_10.mark_exited((int)a0[168], (int)a0[172]);
                core::ptr::drop_in_place<alloc::boxed::Box<fish::exec::run_internal_process::WriteFields>>(v39);
            }
            core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::proc::InternalProc>>>(&v14);
            return core::ptr::drop_in_place<alloc::sync::Arc<fish::proc::InternalProc>>(&v13);
        }
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20601518()
}
