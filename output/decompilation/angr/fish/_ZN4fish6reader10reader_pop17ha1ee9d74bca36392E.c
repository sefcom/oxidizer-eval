long long fish::reader::reader_pop()
{
    void* v0;  // [bp-0x80]
    char v1;  // [bp-0x70]
    void* v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    void* v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    int v6;  // [bp-0x40]
    uint128_t v7;  // [bp-0x30]
    unsigned short v8;  // [bp-0x20]
    char v9;  // [bp-0x1e]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    struct_0 *v14;  // rbx
    int v15;  // xmm0
    int v16;  // xmm1
    int v17;  // xmm2
    char v18;  // dl

    fish::threads::assert_is_main_thread();
    fish::reader::reader_data_stack();
    v11 = g_15a90b0;
    if (!v11)
        core::option::unwrap_failed(&g_14dfb08); /* do not return */
    g_15a90b0 = v11 - 1;
    core::ptr::drop_in_place<core::pin::Pin<alloc::boxed::Box<fish::reader::ReaderData>>>(*((long long *)(g_15a90a8 + v11 * 8 - 8)));
    v12 = fish::reader::current_data();
    if (v12)
    {
        v13 = fish::termsize::termsize_last();
        v13 >> 63.unwrap(&g_14dfb20);
        return (unsigned long long)v12 + 920.reset_abandoning_line(v13);
    }
    else if (!*((long long *)fish::terminal::Outputter::stdoutput()))
    {
        _ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E = 18446744073709551615;
        g_15a9190.reset_text_face();
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&_ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E);
        v2 = 0;
        v3 = 4;
        v4 = 0;
        v0 = 0;
        v7 = 0;
        v8 = 0;
        v5 = 0x8000000000000000;
        v9 = 0;
        v14 = fish::reader::commandline_state_snapshot();
        core::ptr::drop_in_place<fish::reader::CommandlineState>(&(&v14->padding_0)[1]);
        *((long long *)((char *)&v14->field_58 + 8)) = *((long long *)&v8);
        *((uint128_t *)((char *)&v14->field_48 + 8)) = 0;
        *((void*)((char *)&v14->field_38 + 8)) = v6;
        v15 = *((int128_t *)&v0);
        v16 = *((int128_t *)&v1);
        v17 = *((int128_t *)&v3);
        *((int128_t *)((char *)&v14->field_28 + 8)) = *((int128_t *)&v5);
        *((void*)((char *)&v14->field_18 + 8)) = v17;
        *((void*)((char *)&v14->field_8 + 8)) = v16;
        *((void*)&(&v14->padding_0)[1]) = v15;
        return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v14, v18 & 1);
    }
    else
    {
        core::cell::panic_already_borrowed(&g_14dfb38); /* do not return */
    }
}
