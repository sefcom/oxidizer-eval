void fish::screen::Screen::with_buffered_output(struct_0 *a0, unsigned int a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rbx
    unsigned long long *v4;  // rbx

    v0 = v2;
    v3 = a0->field_c0;
    if (*(v3))
        core::cell::panic_already_borrowed(&g_14e1c78); /* do not return */
    *(v3) = 18446744073709551615;
    v3 + 1.begin_buffering();
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v3);
    fish::screen::Screen::update::{{closure}}(a1, a2, a0);
    v4 = a0->field_c0;
    if (*(v4))
        core::cell::panic_already_borrowed(&g_14e1c60); /* do not return */
    *(v4) = 18446744073709551615;
    v4 + 1.end_buffering();
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v4);
    return;
}
