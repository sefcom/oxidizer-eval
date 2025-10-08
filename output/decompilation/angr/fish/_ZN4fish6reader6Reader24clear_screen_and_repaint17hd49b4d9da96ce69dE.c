void fish::reader::Reader::clear_screen_and_repaint(struct_0 *a0, void* a1)
{
    char v0;  // [bp-0x40]
    unsigned long long v2;  // rdx
    unsigned long v3;  // r15

    *((char *)(a1.libdata_mut() + 125)) = 1;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v2);
    if (*((long long *)fish::terminal::Outputter::stdoutput()))
        core::cell::panic_already_borrowed(&g_14e0800); /* do not return */
    _ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E = 18446744073709551615;
    v0 = 9;
    g_15a9190.write_command(&v0);
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&_ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E);
    v3 = &a0->padding_0[920];
    v3.reset_line(1);
    a0.layout_and_repaint(a1, "r", 8);
    a0.exec_prompt(a1, 1, 0);
    v3.reset_line(1);
    a0.layout_and_repaint(a1, "r", 8);
    a0->field_84d = 0;
    *((char *)(a1.libdata_mut() + 125)) = 0;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v2);
    return;
}
