long long fish::parse_execution::ExecutionContext::run_1_job(struct_1 *a0, unsigned long a1, struct_2 *a2)
{
    char v0;  // [bp-0x3e0], Other Possible Types: unsigned long long
    char v1;  // [bp-0x3e0]
    unsigned long long v2;  // [bp-0x3d8]
    unsigned long long v3;  // [bp-0x3d0]
    unsigned long long v4[5];  // [bp-0x3c0]
    unsigned long long v5;  // [bp-0x3b8]
    unsigned long long v6;  // [bp-0x3b0]
    void* v7;  // [bp-0x3a8]
    int v8;  // [bp-0x3a8]
    unsigned long long v9;  // [bp-0x3a0]
    int v10;  // [bp-0x398], Other Possible Types: void*
    unsigned long v11;  // [bp-0x390]
    int v12;  // [bp-0x38f]
    unsigned long long v13;  // [bp-0x388]
    char v14;  // [bp-0x380]
    int v15;  // [bp-0x378], Other Possible Types: char
    unsigned long long v16;  // [bp-0x368]
    int v17;  // [bp-0x358], Other Possible Types: char *, char
    unsigned long v18;  // [bp-0x350]
    void* v19;  // [bp-0x348]
    char v20;  // [bp-0x338]
    unsigned long v21;  // [bp-0x330]
    int v22;  // [bp-0x328], Other Possible Types: char
    char v23;  // [bp-0x318]
    void* v24;  // [bp-0x300], Other Possible Types: unsigned long long (64 bits)[2][1]
    int v25;  // [bp-0x2f0]
    unsigned long long v26;  // [bp-0x2e0]
    int v27;  // [bp-0x2d8], Other Possible Types: void*, char, unsigned long, unsigned long long
    unsigned int v28;  // [bp-0x2d4]
    uint128_t v29[3];  // [bp-0x2d0], Other Possible Types: char, unsigned long long
    void* v30;  // [bp-0x2c8], Other Possible Types: int, unsigned long, unsigned long long
    unsigned long long v31;  // [bp-0x2c8]
    int v32;  // [bp-0x2c0]
    unsigned long long v33;  // [bp-0x2b8]
    char v34;  // [bp-0x2a8]
    int v35;  // [bp-0x298]
    char v36;  // [bp-0x288]
    char v37;  // [bp-0x1a8]
    char v38;  // [bp-0x188]
    char v39;  // [bp-0x160]
    unsigned int v40;  // [bp-0x38]
    unsigned long long v42;  // rax
    unsigned long long v43;  // rbp
    unsigned long long v45;  // rdx
    char v46;  // bpl
    unsigned int v48;  // edi
    unsigned int v49;  // r15d
    uint128_t v51[3];  // rax
    int v52;  // xmm0
    int v53;  // xmm1
    char v54[91];  // r12
    char v55;  // r13b
    unsigned long long v56;  // rax
    int v57;  // xmm0
    unsigned long long v58;  // r13
    unsigned long v59;  // r15
    unsigned long long v60;  // 4100
    struct_4 *v61;  // rax
    unsigned long long v63[3];  // rax
    struct_0 *v64;  // r15
    unsigned long long v65;  // rax
    unsigned long long v66;  // 4097
    unsigned long v68;  // rcx
    unsigned long v69;  // rcx
    void* v70;  // rdx
    unsigned int v71;  // eax
    unsigned long long v72[3];  // rax
    struct_3 *v73;  // r13
    unsigned long long v74;  // rax
    unsigned long long v75;  // 4097

    v42 = a0->field_28.check_end_execution(a1);
    v43 = v42 & 4294967295;
    if ((char)v42 == 4)
    {
        if (fish::proc::no_exec())
        {
            v43 = 0;
        }
        else
        {
            v38.scoped_mod(a1.parser() + 64);
            v5 = a0->field_20.scoped_set(a2);
            v6 = v45;
            v3 = a1.parser().create_profile_item();
            *((int *)&v2) = (v3 == 1 ? fish::parser::ProfileItem::now() : 0);
            v2 = v2;
            if ((char)fish::parse_execution::job_node_wants_timing(a2))
            {
                if (a2->field_10 != 2)
                {
                    (char)v27.try_source_range(a2);
                    v46 = v27;
                    v48 = 0;
                    if (v46)
                        v48 = v28;
                    v49 = *((int *)&v29);
                    v7 = 0;
                    v9 = 4;
                    *((uint128_t *)&v10) = 0;
                    *((uint128_t *)&v12) = 0;
                    v11 = v48.start();
                    v13 = a0.length(((v46 & 1) ? v49 : 0));
                    v14 = 1;
                    v27 = 0;
                    v29 = 4;
                    v30 = 0;
                    fish_printf::printf_impl::sprintf_locale(&v17, &(char)v27, g_14dd228[0].localize(), v45, ".", 8, 0);
                    v17.unwrap(&g_14dd240);
                    *((int128_t *)&v17) = *((int128_t *)&v27);
                    v19 = 0;
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
                    v10 = 0;
                    *((int128_t *)&v8) = (int128_t)v17;
                    v51 = 8.alloc_impl(48, 0);
                    if (!v51)
                        alloc::alloc::handle_alloc_error(8, 48); /* do not return */
                    v52 = (int128_t)v8;
                    v53 = *((int128_t *)&v10);
                    v51[2] = *((int128_t *)&v13);
                    *((void*)&v51[1]) = v53;
                    *((void*)&v51[0]) = v52;
                    v27 = 1;
                    *((uint128_t *[3])&v29[0]) = v51;
                    v30 = 1;
                    a0->field_18.report_errors(a1, 2, &(char)v27);
                    core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&(char)v27);
                    v43 = 3;
                    goto LABEL_13e1a74;
                }
                fish::timer::push_timer(&v27);
                memcpy(&v39, &v27, 304);
                if ((char)a2.job_is_simple_block())
                    goto LABEL_13e1743;
LABEL_13e137d:
                v54 = a1.parser();
                v0 = v54[89];
                v55 = 1;
                if (!v54[88] && !(((char)v54.is_block() | v1) & 1))
                    v55 = v54[90] ^ 1;
                v27.node_source_owned((unsigned int)a0->field_18, a2, 19903792);
                (char)v17.new(v1 * 0x10000 | (a2->field_10 != 2) * 0x100 | v55, &v27);
                v56 = a1.parser();
                v24.scoped_mod(v56 + 64, *((long long *)&v22));
                v43 = (unsigned int)a0.populate_job_from_job_node(a1, &(char)v17, a2);
                v33 = v26;
                v57 = v24;
                v30 = v25;
                v27 = v57;
                core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v27);
                if (!(char)v43)
                {
                    a1.setup_group(&(char)v17);
                    if (!v21)
                    {
                        v27 = &g_14dd170;
                        v29 = 1;
                        v31 = 8;
                        *((uint128_t *)&v32) = 0;
                        core::panicking::panic_fmt(&v27, &g_14dd180); /* do not return */
                    }
                }
                memcpy(&v36, &v23, 16);
                v35 = v22;
                memcpy(&v34, &v20, 16);
                memcpy(&v33, &v19, 16);
                *((int128_t *)&v30) = (int128_t)v17;
                v27 = 1;
                v29 = 1;
                *((double *)&v4[0]) = v27.new();
                if (!(char)v43)
                {
                    v58 = a1.parser();
                    v4.inc_strong();
                    v58.job_add(v4);
                    v27.clone(a0->field_8, a0->field_10);
                    v59 = &v4[2];
                    v16 = v30;
                    memcpy(&v15, &v27, 16);
                    if (!(char)fish::exec::exec_job(v58, v59, &v15))
                    {
                        v37.get_statuses(v59);
                        v60 = *((long long *)&v37);
                        if (!((char)(((0 ^ v60) & (0 ^ -(v60))) >> 63)))
                        {
                            v58.set_last_statuses(&v37);
                            v61 = v58.libdata_mut();
                            v0 = v45;
                            if ((char)_ccall(4, 24, v61->field_68 + 1, 0, (unsigned long long)(char)(0 < v60)))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14dd198); /* do not return */
                            v61->field_68 = v61->field_68 + 1;
                            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v0);
                        }
                        fish::parse_execution::remove_job(v58, v4);
                    }
                    v58.sync_uvars_and_fire(v59.has_external_proc());
                    if (!a0->field_28)
                        a0->field_28 = v59.group().get_cancel_signal();
                }
                if (((char)v3 & 1))
                {
                    v63 = a1.parser().profile_items_mut();
                    if (v45 >= v63[2])
                        core::panicking::panic_bounds_check(v45, v63[2], &g_14dd1b0); /* do not return */
                    v64 = v45 * 48 + v63[1];
                    v65 = fish::parser::ProfileItem::now();
                    v66 = v2;
                    if ((char)(((v65 ^ v66) & (v65 ^ v65 - v66)) >> 63))
                        core::panicking::panic_const::panic_const_sub_overflow(&g_14dd1c8); /* do not return */
                    v64->field_18 = v65 - v66;
                    v64->field_20 = *((long long *)(a1.parser() + 64));
                    v27.to_vec(v4[3], v4[4]);
                    v16 = v30;
                    memcpy(&v15, &v27, 16);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v64);
                    v64->field_10 = v16;
                    *((void*)&v64->field_0) = v15;
                    v64->field_28 = (v43 & 255);
                    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v45);
                }
                fish::proc::job_reap(a1.parser(), 0);
                core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v4);
                core::ptr::drop_in_place<core::option::Option<fish::timer::PrintElapsedOnDrop>>(&v39);
                core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedRefCell<fish::parse_tree::LineCounter<fish::ast::JobPipeline>>,fish::common::ScopedRefCell<fish::parse_tree::LineCounter<fish::ast::JobPipeline>>::scoped_set<fish::parse_execution::ExecutionContext::run_1_job::{{closure}},*const fish::ast::JobPipeline>::{{closure}}>>(&v5);
                goto LABEL_13e1a7e;
            }
            else
            {
                v40 = 0x3b9aca00;
                if (!(char)a2.job_is_simple_block())
                    goto LABEL_13e137d;
LABEL_13e1743:
                v24 = 0;
                v43 = (unsigned int)a0.apply_variable_assignments(a1, 0, &a2[1].field_20, &v24);
                v17 = &v24;
                v18 = a1;
                v68 = a2->field_20;
                v69 = v68 - 1;
                if ((unsigned int)(v68 - 2) >= 5)
                    v69 = 0;
                if (v69 < 2)
                    core::panicking::panic("assertion failed: statement_is_redirectable_block(statement)", 60, &g_14dd1e0); /* do not return */
                if (!(char)v43)
                {
                    v70 = a2->field_28;
                    goto (long long)(long long)(g_9f51f8[2 + v69] + &g_9f51f8[0]);

                    switch (/* incomplete */)
                    {
                    case 0x13e199f:
                        v71 = (int)a0.run_begin_statement(a1, a2->field_28 + 32);
                    case 0x13e1978:
                        v71 = (unsigned int)a0.run_block_statement(a1, v70);
                        goto LABEL_13e19ae;
                    case 0x13e1992:
                        v71 = (int)a0.run_switch_statement(a1, v70);
                        goto LABEL_13e19ae;
                    case 0x13e1985:
                        v71 = (int)a0.run_if_statement(a1, v70);
                        goto LABEL_13e19ae;
                    }
LABEL_13e19ae:
                    v43 = v71;
                    if (((char)v3 & 1))
                    {
LABEL_13e19bb:
                        v72 = a1.parser().profile_items_mut();
                        if (v45 >= v72[2])
                            core::panicking::panic_bounds_check(v45, v72[2], &g_14dd1f8); /* do not return */
                        v73 = v45 * 48 + v72[1];
                        v74 = fish::parser::ProfileItem::now();
                        v75 = v2;
                        if ((char)(((v74 ^ v75) & (v74 ^ v74 - v75)) >> 63))
                            core::panicking::panic_const::panic_const_sub_overflow(&g_14dd210); /* do not return */
                        v73->field_18 = v74 - v75;
                        v73->field_20 = *((long long *)(a1.parser() + 64));
                        fish::parse_execution::profiling_cmd_name_for_redirectable_block(&v27, &a2->field_20, a0->field_18);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v73);
                        v73->field_10 = v30;
                        v73->field_0 = *((int128_t *)&v27);
                        v73->field_28 = 0;
                        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v45);
                    }
                }
                else if (!(!((char)v3 & 1)))
                {
                    goto LABEL_13e19bb;
                }
                core::ptr::drop_in_place<fish::common::ScopeGuard<(),fish::parse_execution::ExecutionContext::run_1_job::{{closure}}>>(&v17);
                core::ptr::drop_in_place<core::option::Option<fish::timer::PrintElapsedOnDrop>>(&v39);
LABEL_13e1a74:
                core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedRefCell<fish::parse_tree::LineCounter<fish::ast::JobPipeline>>,fish::common::ScopedRefCell<fish::parse_tree::LineCounter<fish::ast::JobPipeline>>::scoped_set<fish::parse_execution::ExecutionContext::run_1_job::{{closure}},*const fish::ast::JobPipeline>::{{closure}}>>(&v5);
LABEL_13e1a7e:
                core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v38);
            }
        }
    }
    return v43 & 4294967295;
}
