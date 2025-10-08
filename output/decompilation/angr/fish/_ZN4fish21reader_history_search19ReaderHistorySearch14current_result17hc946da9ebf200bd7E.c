long long fish::reader_history_search::ReaderHistorySearch::current_result(unsigned long long a0[35])
{
    unsigned long long v0[35];  // [bp-0x8]

    if (a0[34] >= a0[2])
    {
        v0[0] = a0;
        core::panicking::panic_bounds_check(a0[34], a0[2], &g_14e1358); /* do not return */
    }
    return *((long long *)(a0[1] + a0[34] * 32 + 8));
}
