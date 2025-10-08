long long fish::tty_handoff::TtyHandoff::new(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    char v3;  // al

    v0 = v2;
    v3 = fish::tty_handoff::get_tty_protocols_active();
    a0->field_0 = 0;
    a0->field_10 = v3;
    a0->field_11 = v3;
    a0->field_12 = 0;
    a0->field_8 = a1;
    return a0;
}
