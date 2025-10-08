long long fish::reader_history_search::ReaderHistorySearch::move_backwards(unsigned long long a0[35])
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]
    char v4;  // [bp-0x10]
    unsigned long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // rcx

    v6 = a0[34] + 1;
    if ((char)_ccall(4, 24, a0[34] + 1, 0, (unsigned long long)(char)(&v4 < 56)))
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14e1498); /* do not return */
    }
    else if (v6 < a0[2])
    {
        a0[34] = v6;
        return v6 & 0xffffffffffffff00 | 1;
    }
    else
    {
        do
        {
            if (!(char)a0.search_mut().go_to_next_match(1))
                return 0;
            v7 = a0.append_matches_from_search();
        } while (!(char)v7);
        v8 = a0[34] + 1;
        if ((char)_ccall(4, 24, a0[34] + 1, 0, _ccall(17, v7 & 255, 0, (unsigned long long)(char)(&v4 < 56))))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e14b0); /* do not return */
        a0[34] = v8;
        if (v8 >= a0[2])
        {
            v0 = &g_14e1488;
            v1 = 1;
            v2 = 8;
            v3 = 0;
            core::panicking::panic_fmt(&v0, &g_14e14c8); /* do not return */
        }
        return v7 & 0xffffffffffffff00 | 1;
    }
}
