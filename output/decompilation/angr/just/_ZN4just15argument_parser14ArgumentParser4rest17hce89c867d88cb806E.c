long long just::argument_parser::ArgumentParser::rest(unsigned long long a0[4])
{
    unsigned long long v0;  // [bp-0x8]

    if (a0[1] < a0[3])
    {
        v0 = a0[3];
        core::slice::index::slice_start_index_len_fail(v0, a0[1], &g_82db18); /* do not return */
    }
    return v0 * 16 + a0[0];
}
