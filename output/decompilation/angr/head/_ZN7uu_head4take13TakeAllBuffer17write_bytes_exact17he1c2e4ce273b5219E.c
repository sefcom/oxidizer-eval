long long uu_head::take::TakeAllBuffer::write_bytes_exact(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rbx

    v1 = a1.write_all(a2.index(a0.remaining_buffer(), a2, &g_4f7b00), a2);
    if (v1)
        return v1;
    v2 = a2 + a0[3];
    a0[3] = v2;
    if (v2 > a0[2])
        core::panicking::panic("assertion failed: self.start_index <= self.buffer.len()Must request at least 1 line.Somehow we're being asked to write more lines than we have, that's a bug in copy_all_but_lines.", 55, &g_4f7b18); /* do not return */
    return v1;
}
