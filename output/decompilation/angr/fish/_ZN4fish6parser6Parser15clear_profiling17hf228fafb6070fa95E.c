void fish::parser::Parser::clear_profiling(struct_0 *a0)
{
    unsigned long long v1;  // rax
    void* v2;  // rsi

    if (a0->field_60)
        core::cell::panic_already_borrowed(&g_14de988); /* do not return */
    a0->field_60 = 18446744073709551615;
    v1 = a0->field_70;
    v2 = a0->field_78;
    a0->field_78 = 0;
    core::ptr::drop_in_place<[fish::parser::ProfileItem]>(v1, v2);
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0->field_60);
    return;
}
