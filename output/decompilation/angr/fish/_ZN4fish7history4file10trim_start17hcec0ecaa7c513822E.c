long long fish::history::file::trim_start(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rax

    v0 = a0;
    v1 = a0 + a1;
    v2 = 0;
    v4 = v0.fold();
    if (a1 < v4)
        core::slice::index::slice_start_index_len_fail(v4, a1, &g_14d9b60); /* do not return */
    return a0 + v4;
}
