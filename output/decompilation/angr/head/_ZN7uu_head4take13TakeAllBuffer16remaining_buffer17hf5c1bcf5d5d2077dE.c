long long uu_head::take::TakeAllBuffer::remaining_buffer(unsigned long long a0[4])
{
    unsigned long long v0;  // [bp-0x8]

    if (a0[2] < a0[3])
    {
        v0 = a0[3];
        core::slice::index::slice_start_index_len_fail(v0, a0[2], &g_593570); /* do not return */
    }
    return v0 + a0[1];
}
