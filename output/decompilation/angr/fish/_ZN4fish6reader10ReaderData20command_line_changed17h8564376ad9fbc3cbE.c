long long fish::reader::ReaderData::command_line_changed(void* a0, unsigned int a1, unsigned long a2)
{
    int v0;  // [bp-0x78]
    int v1;  // [bp-0x68]
    int v2;  // [bp-0x58]
    unsigned long long v4;  // rax

    v4 = fish::threads::assert_is_main_thread();
    if (a1)
    {
        if ((long long)a0[1144])
        {
            return a0.fill_history_pager(0, 6, 1);
        }
        else if ((long long)a0[544])
        {
            a0 + 352.refilter_completions();
            return a0.pager_selection_changed();
        }
        else
        {
            return v4;
        }
    }
    atomic_fetch_add(&_ZN4fish6reader10GENERATION17h4cfc4679e3b2943bE);
    *((int128_t *)&v2) = (int128_t)a0[2008];
    *((int128_t *)&v1) = (int128_t)a0[1992];
    *((int128_t *)&v0) = (int128_t)a0[1976];
    *((unsigned long long *)&a0[1976]) = 0x8000000000000000;
}
