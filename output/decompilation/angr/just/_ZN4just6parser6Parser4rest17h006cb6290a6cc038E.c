long long just::parser::Parser::rest(unsigned long long a0[12])
{
    unsigned long long v0[12];  // [bp-0x8]

    if (a0[11] > a0[4])
    {
        v0[0] = a0;
        core::slice::index::slice_start_index_len_fail(a0[11], a0[4], &g_8306a8); /* do not return */
    }
    return a0[3] + a0[11] * 72;
}
