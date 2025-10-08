void fish::screen::Screen::write_str(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if (*(a0))
        core::cell::panic_already_borrowed(&g_14e1c18); /* do not return */
    *(a0) = 18446744073709551615;
    a0 + 1.write_wstr(a1, a2);
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(a0);
    return;
}
