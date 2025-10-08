long long fish::reader_history_search::ReaderHistorySearch::reset(struct_0 *a0)
{
    unsigned long long v1;  // rdi
    void* v2;  // rsi

    v1 = a0->field_8;
    v2 = a0->field_10;
    a0->field_10 = 0;
    core::ptr::drop_in_place<[fish::reader_history_search::SearchMatch]>(v1, v2);
    a0->padding_20[192].clear();
    a0->field_110 = 0;
    a0->field_120 = 0;
    core::ptr::drop_in_place<core::option::Option<fish::history::HistorySearch>>(&a0->field_18);
    a0->field_18 = 0x8000000000000000;
    return 0x8000000000000000;
}
