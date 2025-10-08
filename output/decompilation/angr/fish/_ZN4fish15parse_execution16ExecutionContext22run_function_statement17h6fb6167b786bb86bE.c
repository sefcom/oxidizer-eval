long long fish::parse_execution::ExecutionContext::run_function_statement(struct_1 *a0, void* a1, unsigned long long a2, unsigned long long a3[6])
{
    char v0;  // [bp-0x1a9]
    char v1;  // [bp-0x1a8]
    char v8;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x170]
    unsigned long long v10;  // [bp-0x168]
    void* v11;  // [bp-0x160]
    unsigned long long v12;  // [bp-0x158]
    void* v13;  // [bp-0x150]
    unsigned long long v14;  // [bp-0x148]
    void* v15;  // [bp-0x140]
    unsigned long long v16;  // [bp-0x138]
    void* v17;  // [bp-0x130]
    char v26;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0xe8]
    unsigned int v28;  // [bp-0xe0]
    void* v32;  // [bp-0xc0]
    unsigned long long v33;  // [bp-0xb8]
    void* v34;  // [bp-0xb0]
    void* v38;  // [bp-0x90]
    char *v39;  // [bp-0x88]
    char *v40;  // [bp-0x80]
    char *v41;  // [bp-0x78]
    unsigned long long v42;  // [bp-0x70]
    char v43;  // [bp-0x68]
    void* v44;  // [bp-0x60]
    unsigned long long v47[5];  // r15
    unsigned long long v48;  // rbx
    void* v50;  // rax
    unsigned long long v51;  // 4098
    unsigned int v52;  // ebp
    struct_0 *v53;  // rax
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rax

    v11 = 0;
    v12 = 8;
    v13 = 0;
    v8.get_argument_nodes(a3[4], a3[5]);
    v8.insert(a3 + 1);
    v47 = a0->field_18;
    v48 = v9;
    v0 = v47.expand_arguments_from_nodes(a0->field_28, a1, v48, v10, &v11);
    if (v0)
    {
        v9 = v48;
    }
    else
    {
        fish::trace::trace_if_enabled_with_args(a1.parser(), "f", 8, 8, 0);
        v44 = 0;
        v15 = 0;
        v16 = 4;
        v17 = 0;
        v14 = 2;
        v32 = 0;
        v33 = 8;
        v34 = 0;
        v39 = &v44;
        v40 = &v14;
        v42 = 4294967295;
        v43 = 0;
        v41 = &v32;
        v38 = 0;
        v26.collect(8, 8);
        v50 = a1.parser();
        v51 = atomic_fetch_add(v47);
        if ((char)_ccall(14, 24, v51 + 1, 0, (unsigned long long)(char)(v0 < 0)))
            [D] Unsupported jumpkind Ijk_NoDecode at address 20840273()
        v52 = fish::builtins::function::function(v50, &v38, v27, v28, v47, a2);
        v53 = a1.parser().libdata_mut();
        if ((char)_ccall(4, 24, v53->field_68 + 1, 0, _ccall(24, v51 + 1, 0, (unsigned long long)(char)(v0 < 0))))
            core::panicking::panic_const::panic_const_add_overflow(&g_14dcff8); /* do not return */
        v53->field_68 = v53->field_68 + 1;
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v54);
        v55 = a1.parser();
        v1.just(v52);
        v55.set_last_statuses(&v1);
        core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v26, v27);
        core::ptr::drop_in_place<fish::io::IoStreams>(&v38);
        core::ptr::drop_in_place<fish::io::IoChain>(&v32);
        core::ptr::drop_in_place<fish::io::OutputStream>(&v14);
        core::ptr::drop_in_place<fish::io::OutputStream>(&v44);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v8, v9);
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v11);
    return v0;
}
