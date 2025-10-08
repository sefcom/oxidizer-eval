long long fish::input_common::InputEventQueuer::parse_xtversion(unsigned long long a0, struct_1 *a1)
{
    struct_1 *v0;  // [bp-0x48]
    void* v1;  // [bp-0x40]
    unsigned long long v3;  // rax

    v0 = a1;
    if (!(char)a1->field_8.equal(a1->field_10, &g_a1b59b, 3))
    {
        v1 = 0;
        core::panicking::assert_failed(0, &v0, &g_14db2d0, &v1, &g_14db2d8); /* do not return */
    }
    v3 = a0.read_until_sequence_terminator(a1);
    if (!(char)v3)
    {
        return v3;
    }
    else if (a1->field_10 <= 3)
    {
        return v3;
    }
    else if (a1->field_8->field_3 == 124)
    {
        return a1.get_or_try_init();
    }
    else
    {
        return a1->field_8;
    }
}
