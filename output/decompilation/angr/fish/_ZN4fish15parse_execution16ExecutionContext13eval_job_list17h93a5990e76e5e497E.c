long long fish::parse_execution::ExecutionContext::eval_job_list(struct_0 *a0, void* a1, unsigned long long a2[2], unsigned long long a3)
{
    void* v0;  // [bp-0xf8], Other Possible Types: unsigned long long, char
    int v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf8]
    unsigned int v3;  // [bp-0xf4]
    int v4;  // [bp-0xf0], Other Possible Types: uint128_t [3], char, unsigned long long
    void* v5;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v6;  // [bp-0xd8], Other Possible Types: void*
    unsigned long long v7;  // [bp-0xd0]
    void* v8;  // [bp-0xc8]
    int v9;  // [bp-0xb8]
    void* v10;  // [bp-0xb8]
    unsigned long long v11;  // [bp-0xb0]
    int v12;  // [bp-0xa8], Other Possible Types: void*
    unsigned long v13;  // [bp-0xa0]
    int v14;  // [bp-0x9f]
    unsigned long long v15;  // [bp-0x98]
    char v16;  // [bp-0x90]
    void* v17;  // [bp-0x88]
    int v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x80]
    int v20;  // [bp-0x78], Other Possible Types: void*
    unsigned long v21;  // [bp-0x70]
    int v22;  // [bp-0x6f]
    unsigned long long v23;  // [bp-0x68]
    char v24;  // [bp-0x60]
    void* v25;  // [bp-0x50]
    unsigned long long v26;  // [bp-0x48]
    void* v27;  // [bp-0x40]
    char v28;  // [bp-0x38]
    unsigned long long v30;  // rax
    unsigned int v32;  // edi
    unsigned int v33;  // r15d
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    uint128_t v36[3];  // rax
    int v37;  // xmm0
    int v38;  // xmm1
    unsigned int v39;  // ebp
    unsigned long long v40;  // rdx
    unsigned int v41;  // ebx
    unsigned int v43;  // edi
    unsigned int v44;  // r15d
    uint128_t v46[3];  // rax
    int v47;  // xmm0
    int v48;  // xmm1

    v25 = 0;
    v26 = 4;
    v27 = 0;
    v30 = a0.infinite_recursive_statement_in_job_list(a1, a2[0], a2[1], &v25);
    if (v30)
    {
        v0.try_source_range(v30);
        v32 = 0;
        if (v0)
            v32 = v3;
        v33 = *((int *)&v4);
        v10 = 0;
        v11 = 4;
        *((uint128_t *)&v12) = 0;
        *((uint128_t *)&v14) = 0;
        v13 = v32.start();
        v15 = a0.length(((v0 & 1) ? v33 : 0));
        v16 = 1;
        v6 = 0;
        v7 = 4;
        v8 = 0;
        v34 = g_14dcc08[0].localize();
        *((char *)&v2) = 1;
        *((int128_t *)&v4) = *((int128_t *)&v26);
        fish_printf::printf_impl::sprintf_locale(&v28, &v6, v34, v35, ".", &(char)v2, 1);
        v28.unwrap(&g_14dcc20);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v2);
        *((int128_t *)&v1) = *((int128_t *)&v6);
        v5 = 0;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
        v12 = 0;
        *((int128_t *)&v9) = *((int128_t *)&(char)v2);
        v36 = 8.alloc_impl(48, 0);
        if (!v36)
            alloc::alloc::handle_alloc_error(8, 48); /* do not return */
        v37 = (int128_t)v9;
        v38 = *((int128_t *)&v12);
        v36[2] = *((int128_t *)&v15);
        *((void*)&v36[1]) = v38;
        *((void*)&v36[0]) = v37;
        v2 = 1;
        *((uint128_t *[3])&v4[0]) = v36;
        v5 = 1;
        a0->field_18.report_errors(a1, 1, &(char)v2);
        goto LABEL_13db099;
    }
    else
    {
        v39 = *((char *)(a1.parser().block_with_id(a3) + 20));
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v40);
        if (v39 != 7)
        {
            if (v39 == 8 && (char)a1.parser().function_stack_is_overflowing())
                goto LABEL_13db12a;
LABEL_13db0e8:
            v41 = a0.run_job_list(a1, a2);
        }
        else
        {
            if (*((long long *)(a1.parser() + 64)) <= 499)
                goto LABEL_13db0e8;
LABEL_13db12a:
            (char)v0.try_source_range(a2);
            v43 = 0;
            if (v0)
                v43 = v3;
            v44 = (int)v4;
            v17 = 0;
            v19 = 4;
            *((uint128_t *)&v20) = 0;
            *((uint128_t *)&v22) = 0;
            v21 = v43.start();
            v23 = a0.length(((v0 & 1) ? v44 : 0));
            v24 = 1;
            v0 = 0;
            v4 = 4;
            v5 = 0;
            fish_printf::printf_impl::sprintf_locale(&(char)v6, &(char)v0, g_14dcc38[0].localize(), v40, ".", 8, 0);
            (char)v6.unwrap(&g_14dcc50);
            *((int128_t *)&v6) = *((int128_t *)&(char)v2);
            v8 = 0;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v17);
            v20 = 0;
            *((int128_t *)&v18) = (int128_t)v6;
            v46 = 8.alloc_impl(48, 0);
            if (!v46)
                alloc::alloc::handle_alloc_error(8, 48); /* do not return */
            v47 = (int128_t)v18;
            v48 = *((int128_t *)&v20);
            v46[2] = *((int128_t *)&v23);
            *((void*)&v46[1]) = v48;
            *((void*)&v46[0]) = v47;
            v0 = 1;
            *((uint128_t *[3])&v4[0]) = v46;
            v5 = 1;
            a0->field_18.report_errors(a1, 1, &(char)v0);
LABEL_13db099:
            core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&(char)v2);
            v41 = (unsigned int)a1 & 0xffffff00 | 3;
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v25);
        return v41;
    }
}
