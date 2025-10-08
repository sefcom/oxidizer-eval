long long fish::env::environment_impl::copy_node_chain(struct_0 **a0)
{
    unsigned long long v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98]
    int v4;  // [bp-0x90]
    int v5;  // [bp-0x80]
    char v6;  // [bp-0x70]
    unsigned long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    int v10;  // [bp-0x48], Other Possible Types: char
    int v11;  // [bp-0x38]
    char v12;  // [bp-0x28]
    struct_0 *v14;  // rbx
    unsigned long long v16;  // rax

    v14 = *(a0);
    v1 = v14.next();
    *((int *)&v0) = (!v1 ? 0 : fish::env::environment_impl::copy_node_chain(&v1));
    core::ptr::drop_in_place<core::option::Option<fish::env::environment_impl::EnvNodeRef>>(&v1);
    if (v14->field_10 >= 9223372036854775807)
        core::cell::panic_already_mutably_borrowed(&g_14d68c8); /* do not return */
    v14->field_10 = v14->field_10 + 1;
    v10.clone(&v14->padding_18);
    memcpy(&v6, &v12, 16);
    v5 = v11;
    v4 = v10;
    v1 = 1;
    v2 = 1;
    v3 = 0;
    v7 = v14->field_48;
    v8 = v0;
    v9 = v14->field_58;
    v16 = v1.new();
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v14->field_10);
    return v16;
}
