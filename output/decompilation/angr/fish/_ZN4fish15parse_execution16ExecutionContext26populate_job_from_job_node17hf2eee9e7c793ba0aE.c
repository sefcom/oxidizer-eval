long long fish::parse_execution::ExecutionContext::populate_job_from_job_node(void* a0, void* a1, unsigned long long a2[5], void* a3)
{
    void* v0;  // [bp-0x1b8]
    unsigned long long v1;  // [bp-0x1b0]
    void* v2;  // [bp-0x1a8]
    unsigned long long v3;  // [bp-0x190]
    int v4;  // [bp-0x188]
    void* v5;  // [bp-0x188]
    unsigned long long v6;  // [bp-0x180]
    int v7;  // [bp-0x178], Other Possible Types: void*
    unsigned long v8;  // [bp-0x170]
    int v9;  // [bp-0x16f]
    unsigned long long v10;  // [bp-0x168]
    char v11;  // [bp-0x160]
    void* v12;  // [bp-0x150]
    unsigned long long v13;  // [bp-0x148]
    void* v14;  // [bp-0x140]
    void* v15;  // [bp-0x138], Other Possible Types: char
    int v16;  // [bp-0x138], Other Possible Types: void*
    unsigned long long v17;  // [bp-0x138]
    unsigned int v19;  // [bp-0x137]
    unsigned int v20;  // [bp-0x134]
    uint128_t v21[3];  // [bp-0x130], Other Possible Types: char, unsigned long long
    void* v22;  // [bp-0x128], Other Possible Types: unsigned long long
    void* v23;  // [sp-0x120]
    unsigned long long v24;  // [sp-0x118]
    uint128_t v25;  // [bp-0x110]
    unsigned long long v26;  // [bp-0x100]
    uint128_t v27;  // [sp-0xf8]
    unsigned long long v28;  // [sp-0xe8]
    uint128_t v29;  // [sp-0xe0]
    unsigned long long v30;  // [sp-0xd0]
    void* v31;  // [sp-0xc8]
    int v32;  // [sp-0xc0]
    uint128_t v33;  // [sp-0xb4]
    uint128_t v34;  // [sp-0xa0]
    unsigned int v35;  // [sp-0x90]
    uint128_t v36;  // [sp-0x88]
    uint128_t v37;  // [sp-0x78]
    unsigned int v38;  // [bp-0x68]
    unsigned short v39;  // [sp-0x64]
    unsigned int v40;  // [sp-0x62]
    char v41;  // [bp-0x50]
    char v42;  // [bp-0x4d]
    unsigned long long v43;  // [bp-0x40]
    int v44;  // [bp-0x38]
    unsigned short v45;  // [bp-0x32]
    char v46;  // [bp-0x30]
    unsigned long long v48;  // rsi
    void* v49;  // rbx
    struct_0 *v50;  // r15
    unsigned long long v51;  // r12
    unsigned long v52;  // r14
    unsigned long v53;  // r13
    unsigned long v54;  // r13
    void* v56;  // r15
    unsigned long v57;  // rcx
    unsigned long v58;  // rax
    unsigned int v60;  // edi
    unsigned int v61;  // r12d
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax
    unsigned int v64;  // esi
    unsigned long long v65;  // rdx
    uint128_t v66[3];  // rax
    int v67;  // xmm0
    int v68;  // xmm1
    unsigned long v69;  // rax
    void* v71;  // rax
    unsigned long long v72;  // rax
    unsigned long long v73;  // rdx

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v48 = (long long)a3[104];
    if ((char)_ccall(4, 24, v48 + 1, 0, (unsigned long long)(char)(&v46 < 408)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14dd2a0); /* do not return */
    v0.reserve_exact(v48 + 1, 224, &g_14dd2b8);
    v39 = 0;
    v15 = 0;
    v23 = 0;
    v24 = 8;
    v25 = 0;
    v26 = 4;
    v38 = 0;
    v27 = 0;
    *((uint128_t *)&v32) = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v40 = 0;
    v28 = 8;
    v29 = 0;
    v30 = 8;
    v31 = 0;
    v37 = 0;
    v0.push(&(char)v15, &g_14dd2d0);
    v49 = v2;
    if (!v49)
        core::panicking::panic_bounds_check(0, 0, &g_14dd2e8); /* do not return */
    v50 = v1;
    v51 = (unsigned int)a0.populate_job_process(a1, a2, v50, a3 + 32, a3 + 80);
    if (!(char)v51 && !!v48)
    {
        v52 = (long long)a3[96];
        v3 = v48 * 96 + v52;
        v53 = v52 + 96;
    }
    else
    {
LABEL_13e2285:
        v50->field_d4 = 1;
        v71 = 0xe0 * v49 + (char *)v50;
        if (v71 == 224)
            core::option::unwrap_failed(&g_14dd3a8); /* do not return */
        *((char *)&v71[11]) = 1;
        if (!(char)v51)
        {
            v22 = v2;
            memcpy(&v15, &v0, 16);
            v72 = v15.into_boxed_slice();
            core::ptr::drop_in_place<alloc::boxed::Box<[fish::proc::Process]>>(a2[3], a2[4]);
            a2[3] = v72;
            a2[4] = v73;
            return 0;
        }
        goto LABEL_13e2528;
    }
    while (true)
    {
        v54 = v53;
        v15.try_from((unsigned long long)(long long)a0[24].node_source(v52, fish::ast::Node::source), a2);
        v43.expect(&v15, "Failed to parse valid pipe", 26, &g_14dd300);
        if ((int)v44 < 0)
        {
            v15.try_source_range(v52);
            v60 = 0;
            if (v15)
                v60 = v20;
            v61 = *((int *)&v21);
            v5 = 0;
            v6 = 4;
            *((uint128_t *)&v7) = 0;
            *((uint128_t *)&v9) = 0;
            v8 = v60.start();
            v10 = a0.length(((v15 & 1) ? v61 : 0));
            v11 = 1;
            v12 = 0;
            v13 = 4;
            v14 = 0;
            v62 = g_14dd318[0].localize();
            v63 = (unsigned long long)(long long)a0[24].node_source(v52, fish::ast::Node::source);
            *((char *)&v17) = 1;
            v64 = *((int *)&v42);
            v19 = *((int *)&v41);
            v20 = v64;
            v21 = v63;
            v22 = v65;
            fish_printf::printf_impl::sprintf_locale(&v41, &v12, v62, v65, ".", &(char)v17, 1);
            v41.unwrap(&g_14dd330);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v17);
            *((int128_t *)&v16) = *((int128_t *)&v12);
            v22 = 0;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
            v7 = 0;
            *((int128_t *)&v4) = (int128_t)v16;
            v66 = 8.alloc_impl(48, 0);
            if (!v66)
                alloc::alloc::handle_alloc_error(8, 48); /* do not return */
            v67 = (int128_t)v4;
            v68 = *((int128_t *)&v7);
            v66[2] = *((int128_t *)&v10);
            *((void*)&v66[1]) = v68;
            *((void*)&v66[0]) = v67;
            v17 = 1;
            *((uint128_t *[3])&v21[0]) = v66;
            v22 = 1;
            (long long)a0[24].report_errors(a1, 2, &(char)v17);
            core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&(char)v17);
            v50->field_d4 = 1;
            v69 = 0xe0 * v49 + (char *)v50;
            if (v69 == 224)
                core::option::unwrap_failed(&g_14dd3a8); /* do not return */
            *((char *)(v69 - 11)) = 1;
            v51 = v65 & 0xffffffffffffff00 | 3;
LABEL_13e2528:
            core::ptr::drop_in_place<alloc::vec::Vec<fish::proc::Process>>(&v0);
            return v51 & 4294967295;
        }
        v56 = (char *)v50 + 0xe0 * v49;
        if (v56 == 224)
            core::option::unwrap_failed(&g_14dd348); /* do not return */
        *((int *)&v56[16]) = (int)v44;
        if ((char)v45)
        {
            fish::parse_execution::get_stderr_merge(&v15);
            v56 - 128.push(&v15, &g_14dd360);
        }
        v39 = 0;
        v16 = 0;
        v23 = 0;
        v24 = 8;
        v25 = 0;
        v26 = 4;
        v38 = 0;
        v27 = 0;
        v33 = 0;
        *((uint128_t *)&v32) = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v40 = 0;
        v28 = 8;
        v29 = 0;
        v30 = 8;
        v31 = 0;
        v37 = 0;
        v0.push(&v15, &g_14dd378);
        v49 = v2;
        if (!v49)
            core::option::unwrap_failed(&g_14dd390); /* do not return */
        v50 = v1;
        v57 = -224 + (char *)v50 + 0xe0 * v49;
        if (!v57)
            core::option::unwrap_failed(&g_14dd390); /* do not return */
        v51 = (unsigned int)a0.populate_job_process(a1, a2, v57, v52 + 16, v52 + 64);
        v58 = v54 + 96;
        if (v54 == v3)
            v58 = v54;
        if (!v54 || (char)v51)
            goto LABEL_13e2285;
        v52 = v54;
        v53 = v58;
        goto LABEL_13e2285;
    }
}
