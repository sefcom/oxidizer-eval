long long fish::builtins::printf::builtin_printf_state_t::print_esc_char(struct_0 *a0, unsigned int a1)
{
    unsigned long v2;  // rax

    switch (a1)
    {
    case 97:
        return fish::builtins::printf::builtin_printf_state_t::append_output(a0, 7);
    case 98:
        return fish::builtins::printf::builtin_printf_state_t::append_output(a0, 8);
    case 99:
        a0->field_38 = 1;
        return v2;
    case 101:
        return fish::builtins::printf::builtin_printf_state_t::append_output(a0, 27);
    case 102:
        return fish::builtins::printf::builtin_printf_state_t::append_output(a0, 12);
    case 110:
        return fish::builtins::printf::builtin_printf_state_t::append_output(a0, 10);
    case 114:
        return fish::builtins::printf::builtin_printf_state_t::append_output(a0, 13);
    case 116:
        return fish::builtins::printf::builtin_printf_state_t::append_output(a0, 9);
    case 118:
        return fish::builtins::printf::builtin_printf_state_t::append_output(a0, 11);
    default:
        return fish::builtins::printf::builtin_printf_state_t::append_output(a0, a1);
    }
}
