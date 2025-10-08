char fish::reader_history_search::ReaderHistorySearch::move_forwards(struct_0 *a0)
{
    unsigned long long v1;  // rax

    v1 = a0->field_110;
    if (v1)
        a0->field_110 = v1 - 1;
    return v1;
}
