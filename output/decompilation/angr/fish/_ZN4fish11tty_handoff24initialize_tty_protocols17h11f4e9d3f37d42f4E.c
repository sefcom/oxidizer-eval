long long fish::tty_handoff::initialize_tty_protocols()
{
    char v0;  // [bp-0x90]
    unsigned long long v2[3];  // rbx
    unsigned long long v3;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    once_cell::sync::OnceCell<T>::get_or_try_init();
    once_cell::sync::OnceCell<T>::get_or_try_init();
    v2 = once_cell::sync::OnceCell<T>::get_or_try_init();
    v3 = core::sync::atomic::atomic_load();
    if (v3)
        return v3;
    v0.get_protocols((unsigned int)v2[1].detect(v2[2]));
    v5 = v0.new();
    v6 = core::sync::atomic::atomic_compare_exchange(v5);
    if (!((char)v6 & 1))
        return v6;
    return (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<fish::tty_handoff::TtyProtocolsSet>>(v5);
}
