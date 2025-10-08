long long fish::proc::Process::get_wait_handle(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    void* v3;  // r14

    v0 = v2;
    if (a0->field_c0 >= 9223372036854775807)
        core::cell::panic_already_mutably_borrowed(&g_14df2e0); /* do not return */
    a0->field_c0 = a0->field_c0 + 1;
    if (a0->field_c8)
    {
        a0->field_c8.inc_strong();
        v3 = a0->field_c8;
    }
    else
    {
        v3 = 0;
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0->field_c0);
    return v3;
}
