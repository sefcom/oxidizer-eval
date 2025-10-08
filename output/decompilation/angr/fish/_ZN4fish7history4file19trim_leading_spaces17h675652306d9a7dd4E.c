long long fish::history::file::trim_leading_spaces(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v2 = 0;
    v4 = v0.fold();
    if (a2 < v4)
        core::slice::index::slice_start_index_len_fail(v4, a2, &g_14d9b78); /* do not return */
    a0[0] = v4;
    a0[1] = a1 + v4;
    a0[2] = a2 - v4;
    return v4;
}
