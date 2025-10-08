void fish::screen::screen_force_clear_to_end()
{
    char v0;  // [bp-0x20]

    if (*((long long *)fish::terminal::Outputter::stdoutput()))
        core::cell::panic_already_borrowed(&g_14e1dc8); /* do not return */
    _ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E = 18446744073709551615;
    v0 = 11;
    g_15a9190.write_command(&v0);
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&_ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E);
    return;
}
