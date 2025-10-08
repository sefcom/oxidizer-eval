long long fish::tty_handoff::TtyHandoff::enable_tty_protocols(struct_0 *a0)
{
    if (!a0->field_11)
    {
        a0->field_11 = 1;
        return fish::tty_handoff::set_tty_protocols_active(*((long long *)&a0->field_8), 1);
    }
    return 0;
}
