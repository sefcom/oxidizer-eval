long long fish::reader::Reader::handle_char_event(struct_1 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v5;  // r14
    unsigned long long v6;  // r13
    unsigned long long v7;  // r12
    struct_0 *v8;  // rdi
    unsigned long long v9;  // rdx
    struct_3 *v10;  // rax
    struct_2 *v12;  // rax
    unsigned long long v13;  // rax

    v3 = v5;
    v2 = v6;
    v1 = v7;
    v8 = a0->field_0;
    if (a0->field_0->field_845)
    {
        a0->field_0->field_845 = 0;
        *((char *)(v8.rls_mut() + 42)) = 95;
        *((char *)(a0->field_0.rls_mut() + 40)) = 0;
    }
    a0->field_8.update_termsize();
    a0->field_0.color_suggest_repaint_now(a0->field_8, v9);
    v10 = a0->field_0.rls();
    if (v10->field_20 && v10->field_20 <= a0->field_0->field_30)
    {
        *((char *)(a0->field_0.rls_mut() + 41)) = 1;
        return (unsigned long long)core::ptr::drop_in_place<core::option::Option<fish::input_common::CharEvent>>(a1) & 0xffffffffffffff00 | 1;
    }
    v0.or_else(a1, a0);
    v12 = a0->field_8.libdata();
    a0->field_0->field_84b = a0->field_0->field_84b | v12->field_80;
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v9);
    *((char *)(a0->field_8.libdata_mut() + 128)) = 0;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v9);
    v13 = *((long long *)&v0);
    if (a0->field_0->field_84b)
    {
        if (v13 != 9223372036854775812)
            core::ptr::drop_in_place<fish::input_common::CharEvent>(&v0);
    }
    else
    {
        if (v13 != 9223372036854775812)
            goto (long long)(g_9f5474[(v13 < 9223372036854775812 ? 9223372036854775812 + v13 - 3 : 0)] + (char *)&g_9f5474[0]);
    }
    return 0;
}
