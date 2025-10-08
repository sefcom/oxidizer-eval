void fish::editable_line::EditableLine::set_position(unsigned long long a0[16], unsigned long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a1 > a0[6])
    {
        v0 = v2;
        core::panicking::panic("assertion failed: position <= self.len()assertion failed: range.start == self.position()assertion failed: self.undo_history.may_coalesceexecutable path: ", 40, &g_14d64e8); /* do not return */
    }
    a0[15] = a1;
    return;
}
