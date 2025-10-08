char uu_head::take::TakeAllBuffer::is_empty(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a1 > a0)
    {
        v0 = v2;
        core::panicking::panic("assertion failed: self.start_index <= self.buffer.len()Must request at least 1 line.Somehow we're being asked to write more lines than we have, that's a bug in copy_all_but_lines.", 55, &g_4f7b48); /* do not return */
    }
    return a1 == a0;
}
