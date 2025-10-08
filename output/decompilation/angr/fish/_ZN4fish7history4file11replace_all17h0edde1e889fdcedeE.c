long long fish::history::file::replace_all(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x68]
    unsigned long v2;  // rsi
    void* v3;  // r15
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx
    unsigned long long v6;  // rcx

    v2 = a0[2];
    v3 = 0;
    while (true)
    {
        v4 = fish::common::subslice_position(a0[1] + v3, v2 - v3, a1, 1);
        if (!((char)v4 & 1))
        {
            return v4;
        }
        else if (!((char)__CFADD__(v3, v5)))
        {
            v6 = v3 + v5;
            if ((char)_ccall(4, 24, v6 + 1, 0, (v3 + v5 <= v3 ? 1 : 0)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d9a40); /* do not return */
            v0.splice(a0, v6, v6 + 1, a2, a2 + 2);
            core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u8>>>>(&v0);
            v3 = v6 + 2;
            if ((char)__CFADD__(v6, 2))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d9a58); /* do not return */
            v2 = a0[2];
            if (v3 > v2)
                core::slice::index::slice_start_index_len_fail(v3, v2, &g_14d9a70); /* do not return */
        }
        else
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14d9a28); /* do not return */
        }
    }
}
