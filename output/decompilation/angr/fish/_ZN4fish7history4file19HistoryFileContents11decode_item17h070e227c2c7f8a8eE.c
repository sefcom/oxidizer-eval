long long fish::history::file::HistoryFileContents::decode_item(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x8]

    if (a2 < a3)
    {
        v0 = a2 - a3;
        core::slice::index::slice_start_index_len_fail(a3, a2, &g_14d9918); /* do not return */
    }
    return fish::history::file::decode_item_fish_2_0(a0, a1 + a3, v0);
}
