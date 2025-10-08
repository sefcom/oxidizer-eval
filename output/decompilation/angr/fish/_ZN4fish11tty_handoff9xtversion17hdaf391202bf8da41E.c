long long fish::tty_handoff::xtversion()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax

    v0 = v2;
    v3 = once_cell::sync::OnceCell<T>::get();
    if (!v3)
        return 0;
    return v3->field_8;
}
