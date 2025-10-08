long long fish::history::HistorySearch::prepare_to_search_after_deletion(unsigned long long a0[24])
{
    if (!a0[23])
        core::panicking::panic("assertion failed: self.current_index != 0No current itemH", 41, &g_14da0c0); /* do not return */
    a0[23] = a0[23] - 1;
    core::ptr::drop_in_place<core::option::Option<fish::history::HistoryItem>>(&a0[6]);
    a0[6] = 0x8000000000000000;
    return 0x8000000000000000;
}
