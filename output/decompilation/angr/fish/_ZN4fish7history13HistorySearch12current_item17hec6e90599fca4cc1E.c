long long fish::history::HistorySearch::current_item(struct_0 *a0)
{
    void* v0;  // [bp-0x8]

    if ((char)(((0 ^ a0->field_30) & (0 ^ -(a0->field_30))) >> 63))
    {
        v0 = 0;
        core::option::expect_failed("No current itemH", 15, &g_14da108); /* do not return */
    }
    return &a0->field_30;
}
