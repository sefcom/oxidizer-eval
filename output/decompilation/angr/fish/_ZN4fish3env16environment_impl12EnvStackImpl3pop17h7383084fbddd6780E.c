long long fish::env::environment_impl::EnvStackImpl::pop(struct_3 *a0, struct_1 *a1)
{
    struct_0 *v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    uint128_t v4;  // [bp-0x50]
    int v5;  // [bp-0x38], Other Possible Types: char
    char v6;  // [bp-0x28]
    struct_0 *v8;  // r14
    struct_2 *v9;  // rax
    unsigned long long v10;  // rax

    v8 = a1->field_50;
    v9 = v8.next();
    if (!v9)
    {
        v10 = a1->field_78;
        if (!v10)
        {
            v1 = &g_14d6cd0;
            v2 = 1;
            v3 = 8;
            v4 = 0;
            core::panicking::panic_fmt(&v1, &g_14d6cf8); /* do not return */
        }
        a1->field_78 = v10 - 1;
        v9 = *((long long *)(a1->field_70 + v10 * 8 - 8));
    }
    a1->field_50 = v9;
    v0 = v8;
    if (v8->field_10 >= 9223372036854775807)
        core::cell::panic_already_mutably_borrowed(&g_14d6ce0); /* do not return */
    v8->field_10 = v8->field_10 + 1;
    (char)v1.iter(v8 + 1);
    v5.collect(&(char)v1);
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v8->field_10);
    a0->field_10 = *((long long *)&v6);
    *((void*)&a0->field_0) = v5;
    return core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v0);
}
