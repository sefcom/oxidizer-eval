long long uu_join::State::get_current_key(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (!a0->field_10)
    {
        v0 = v2;
        core::panicking::panic_bounds_check(0, 0, &g_594508); /* do not return */
    }
    return a0->field_8.get_field(*((long long *)&a0->field_40));
}
