long long fish::reader::reader_push(struct_2 *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    int v0;  // [bp-0x1d8], Other Possible Types: char
    unsigned long long v1;  // [bp-0x1c8]
    char v2;  // [bp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1b0]
    void* v4;  // [bp-0x1a0], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [bp-0x198]
    uint128_t v6;  // [bp-0x190]
    void* v7;  // [bp-0x180]
    unsigned long long v8;  // [bp-0x178]
    uint128_t v9;  // [bp-0x170]
    unsigned long long v10;  // [bp-0x160]
    void* v11;  // [bp-0x158]
    unsigned long long v12;  // [bp-0x150]
    unsigned long long v13;  // [bp-0x138]
    unsigned int v14;  // [bp-0x130]
    void* v15;  // [bp-0x128]
    unsigned long long v16;  // [bp-0x120]
    unsigned int v17;  // [bp-0xf0]
    char v18;  // [bp-0xec]
    void* v19;  // [bp-0xe8]
    unsigned long long v20;  // [bp-0xe0]
    uint128_t v21;  // [bp-0xd8]
    void* v22;  // [bp-0xc8]
    unsigned long long v23;  // [bp-0xc0]
    uint128_t v24;  // [bp-0xb8]
    unsigned long long v25;  // [bp-0xa8]
    void* v26;  // [bp-0xa0]
    unsigned long long v27;  // [bp-0x98]
    unsigned long v28;  // [bp-0x80]
    unsigned int v29;  // [bp-0x78]
    void* v30;  // [bp-0x70]
    unsigned long long v31;  // [bp-0x68]
    char v32;  // [bp-0x34]
    unsigned long v34;  // r13
    struct_1 *v35;  // rbx
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax

    fish::threads::assert_is_main_thread();
    if (!a0[1].padding_0[140].swap(1))
    {
        v34 = &a0[1].padding_0[4];
        fish::reader::terminal_init(&v4, v34, &g_14c7518, a3->field_40);
        fish::env_dispatch::guess_emoji_width(v34);
        v2.to_vec("f", 4);
        v1 = v3;
        memcpy(&v0, &v2, 16);
        v35 = a0.libdata_mut();
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v35);
        v35->field_10 = v1;
        *((void*)&v35->field_0) = v0;
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v36);
        v2.to_vec("f", 4);
        v1 = v3;
        memcpy(&v0, &v2, 16);
        v34.set_one("_", 1, 4, &v0);
        if ((int)a0->field_1c0.replace(v13, v14) != 0x3b9aca00)
            core::panicking::panic("assertion failed: old.is_none()", 31, &g_14dfaa8); /* do not return */
        memcpy(&(char)v19, &v4, 184);
        v4 = 0;
        v5 = 8;
        v6 = 0;
        v7 = 0;
        v8 = 4;
        v9 = 0;
        v10 = 8;
        v11 = 0;
        v12 = 0x8000000000000000;
        v14 = 0x3b9aca00;
        v15 = 0;
        v16 = 3;
        v17 = 0;
        v18 = 0;
        core::ptr::drop_in_place<fish::input_common::InputEventQueue>(&v4);
    }
    else if (a0->field_1c0 < 9223372036854775807)
    {
        a0->field_1c0 = a0->field_1c0 + 1;
        v19 = 0;
        v20 = 8;
        v21 = 0;
        v27 = 0x8000000000000000;
        v22 = 0;
        v23 = 4;
        v32 = 0;
        v24 = 0;
        v25 = 8;
        v26 = 0;
        v28 = a0->field_1c8;
        v29 = a0->field_1d0;
        v30 = 0;
        v31 = 3;
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0->field_1c0);
    }
    else
    {
        core::cell::panic_already_mutably_borrowed(&g_14dfac0); /* do not return */
    }
    v2 = a1.with_name(a2);
    v2 + 16.resolve_pending();
    v4 = v2;
    fish::reader::reader_data_stack();
    v37 = v19.new(v4, a3, !g_15a90b0);
    fish::reader::reader_data_stack();
    v37.push(&g_14dfad8);
    v38 = fish::reader::current_data();
    if (!v38)
        core::option::unwrap_failed(&g_14dfaf0); /* do not return */
    v38.command_line_changed(0, 1);
    return v38;
}
