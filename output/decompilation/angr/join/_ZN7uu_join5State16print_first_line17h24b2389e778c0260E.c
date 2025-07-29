long long uu_join::State::print_first_line(struct_0 *a0, unsigned long long a1, void* a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (!a0->field_10)
    {
        v0 = v2;
        core::panicking::panic_bounds_check(0, 0, &g_593b08); /* do not return */
    }
    return a0.print_line(a1, a0->field_8, a2);
}
