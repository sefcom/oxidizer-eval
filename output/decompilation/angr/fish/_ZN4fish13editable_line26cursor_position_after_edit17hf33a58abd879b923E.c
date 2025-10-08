long long fish::editable_line::cursor_position_after_edit(unsigned long long a0[11])
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax

    v0 = v2;
    if ((char)__CFADD__(a0[10], a0[9]))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d6638); /* do not return */
    v3 = fish::editable_line::chars_deleted_left_of_cursor(a0);
    return (v3 <= a0[10] + a0[9] ? a0[10] + a0[9] - v3 : 0);
}
