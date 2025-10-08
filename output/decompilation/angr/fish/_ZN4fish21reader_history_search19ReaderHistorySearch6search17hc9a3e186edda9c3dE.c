long long fish::reader_history_search::ReaderHistorySearch::search(struct_0 *a0)
{
    void* v0;  // [bp-0x8]

    if ((char)(((0 ^ a0->field_18) & (0 ^ -(a0->field_18))) >> 63))
    {
        v0 = 0;
        core::option::unwrap_failed(&g_14e14e0); /* do not return */
    }
    return &a0->field_18;
}
