long long uu_join::State::print_first_line::h187e12e4181d2d45(struct_0 *a0, unsigned long long a1, void* a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax

    if (a0->field_10)
        return uu_join::State::print_line::h4b2b0e1de22b70d7(a0, a1, a0->field_8, a2);
    v0 = v2;
    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
}
