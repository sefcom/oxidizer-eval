void fish::env::environment_impl::EnvNodeRef::find_entry(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if (a1->field_10 >= 9223372036854775807)
        core::cell::panic_already_mutably_borrowed(&g_14d6898); /* do not return */
    a1->field_10 = a1->field_10 + 1;
    a0.find_entry(a1 + 1, a2, a3);
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a1->field_10);
    return;
}
