long long uu_join::State::get_current_key::h6b22667ac5a703a7(struct_0 *a0)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax

    if (a0->field_10)
        return uu_join::Line::get_field::h7dd14bed39768627(a0->field_8, *((long long *)&a0->field_40));
    v0 = v2;
    core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_535450); /* do not return */
}
