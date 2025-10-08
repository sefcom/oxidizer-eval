long long fish::reader_history_search::ReaderHistorySearch::add_if_new(unsigned long a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x18]

    fish::builtins::fish_indent::fish_indent::{{closure}}(&v2, a1[1], a1[2]);
    v1 = *((long long *)&v3);
    memcpy(&v0, &v2, 16);
    if (!a0.add_skip(&v0))
        return (unsigned long long)core::ptr::drop_in_place<fish::path::BaseDirectory>(a1);
    return a0.push(a1, &g_14e1458);
}
