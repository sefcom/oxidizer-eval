long long fish::parser::Parser::eval_node(void* a0, struct_0 *a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, void* *a6)
{
    unsigned long v0;  // [bp-0x130], Other Possible Types: unsigned int
    char v1;  // [bp-0x128], Other Possible Types: unsigned long long
    char v2;  // [bp-0x128]
    unsigned long v3;  // [bp-0x120], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x118]
    unsigned long long v5;  // [bp-0x110]
    unsigned long v6;  // [bp-0x108]
    unsigned long v7;  // [bp-0x100]
    int v8;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v9;  // [bp-0xe8]
    unsigned long v10;  // [bp-0xe0]
    unsigned long v11;  // [bp-0xd8]
    unsigned int v12;  // [bp-0xd0]
    char v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0xa0]
    void* v16;  // [bp-0x90], Other Possible Types: char
    int v17;  // [bp-0x88], Other Possible Types: char
    char v18;  // [bp-0x78]
    unsigned long long v19;  // [bp-0x68]
    int v20;  // [bp-0x58], Other Possible Types: char
    char v21;  // [bp-0x48]
    char v22;  // [bp-0x38]
    unsigned int v23;  // eax
    unsigned int v24;  // r15d
    unsigned long long v25;  // rax
    unsigned long long v26;  // cc_ndep
    unsigned long long v27;  // rax
    void* v28;  // r15
    unsigned long long v30;  // cc_ndep
    unsigned int v31;  // eax
    void* v32;  // rbp
    unsigned long long v33;  // rax
    unsigned long v34;  // r15
    unsigned long long v35;  // rdx
    unsigned long v36;  // r13
    unsigned long v37;  // rbp
    unsigned int v38;  // eax
    char v40;  // 4103

    v3 = a5;
    v1 = a3;
    v23 = fish::signal::signal_check_cancel();
    if (v23)
    {
        v24 = v23;
        if (a1->field_262 != 1)
        {
            v27 = v24.new();
            *((unsigned int *)a0) = 1;
            *((unsigned int *)&a0[4]) = v24;
            *((unsigned short *)&a0[8]) = 0;
            *((char *)&a0[10]) = 0;
            return v27;
        }
        v25 = a1->field_20;
        if (v25 >= 9223372036854775807)
            core::cell::panic_already_mutably_borrowed(&g_14de5b0); /* do not return */
        v26 = v25 < 9223372036854775807;
        a1->field_20 = v25 + 1;
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a1->field_20);
        if (a1->field_38)
        {
            v27 = v24.new();
            *((unsigned int *)a0) = 1;
            *((unsigned int *)&a0[4]) = v24;
            *((unsigned short *)&a0[8]) = 0;
            *((char *)&a0[10]) = 0;
            return v27;
        }
        fish::signal::signal_clear_cancel();
    }
    if (a6)
    {
        v28 = *(a6);
        v30 = _ccall(20, a6, 0, v26);
        if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v28) + 1, 0, _ccall(20, a6, 0, v26)))
            [D] Unsupported jumpkind Ijk_NoDecode at address 20882602()
    }
    else
    {
        v28 = 0;
        v30 = v26;
    }
    v4 = v28;
    v31 = fish::parser::Parser::eval_node::{{closure}}(v28);
    if (v31)
    {
        *((unsigned int *)a0) = 1;
        *((unsigned int *)&a0[4]) = v31;
        *((unsigned short *)&a0[8]) = 0;
        *((char *)&a0[10]) = 0;
        return core::ptr::drop_in_place<fish::parser::Parser::eval_node<fish::ast::JobList>::{{closure}}>(&v4);
    }
    fish::proc::job_reap(a1, 0);
    v0 = (int)v13.context(a1) & 0xffffff00 | 1;
    v8.scope_block(8);
    v5 = a1.push_block(&v8);
    if (a6)
    {
        v32 = *(a6);
        if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v32) + 1, 0, _ccall(20, a6, 0, v30)))
            [D] Unsupported jumpkind Ijk_NoDecode at address 20882602()
    }
    else
    {
        v32 = 0;
    }
    core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::job_group::JobGroup>>>(&v16);
    v16 = v32;
    v0 = 0;
    v33 = v28.new();
    core::ptr::drop_in_place<alloc::boxed::Box<dyn fish::builtins::test::test_expressions::Expression>>(v14, v15);
    v14 = v33;
    v15 = &g_14de580;
    a2.parsed_source_ref();
    v6 = a2;
    v34 = &a1->padding_40[208];
    v8.line_counter(a2);
    v20.scoped_set(v34, &v8);
    v7 = a2;
    v17.clone(a4, v3);
    v9 = *((long long *)&v18);
    v8 = v17;
    v10 = a2;
    v12 = 0;
    v11 = v34;
    v3 = *((long long *)(a1.libdata() + 88));
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v35);
    v0 = *((long long *)(a1.libdata() + 104));
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v35);
    v1 = v8.eval_node(&v13, v1, &g_14c2078, 1, v5);
    v36 = *((long long *)(a1.libdata() + 88));
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v35);
    v37 = *((long long *)(a1.libdata() + 104));
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v35);
    v19 = *((long long *)&v22);
    memcpy(&v18, &v21, 16);
    v17 = v20;
    core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedRefCell<fish::parse_tree::LineCounter<fish::ast::JobPipeline>>,fish::common::ScopedRefCell<fish::parse_tree::LineCounter<fish::ast::JobPipeline>>::scoped_set<fish::common::ScopedRefCell<fish::parse_tree::LineCounter<fish::ast::JobPipeline>>::scoped_replace::{{closure}},fish::parse_tree::LineCounter<fish::ast::JobPipeline>>::{{closure}}>>(&v17);
    a1.pop_block(v5);
    fish::proc::job_reap(a1, 0);
    v38 = fish::signal::signal_check_cancel();
    if (v38)
    {
        v38.new();
        *((unsigned int *)a0) = 1;
        *((unsigned int *)&a0[4]) = v38;
        *((unsigned short *)&a0[8]) = 0;
        *((char *)&a0[10]) = 0;
    }
    else
    {
        (unsigned int)a1.get_last_status().from_exit_code();
        v40 = v2;
        *((char *)&a0[8]) = v40 == 3;
        *((unsigned int *)a0) = 1;
        *((unsigned int *)&a0[4]) = v35;
        *((char *)&a0[9]) = v40 != 3 & v3 == v36;
        *((char *)&a0[10]) = v0 == v37;
    }
    core::ptr::drop_in_place<fish::parse_execution::ExecutionContext>(&v8);
    return (unsigned long long)core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v13);
}
