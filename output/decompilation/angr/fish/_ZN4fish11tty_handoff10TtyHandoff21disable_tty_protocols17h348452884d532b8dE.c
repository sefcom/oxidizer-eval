long long fish::tty_handoff::TtyHandoff::disable_tty_protocols(struct_0 *a0)
{
    if (a0->field_11 != 1)
        return 0;
    a0->field_11 = 0;
    return fish::tty_handoff::set_tty_protocols_active(*((long long *)&a0->field_8), 0);
}
