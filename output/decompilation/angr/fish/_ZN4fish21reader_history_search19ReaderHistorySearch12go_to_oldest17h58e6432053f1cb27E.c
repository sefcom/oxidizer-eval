long long fish::reader_history_search::ReaderHistorySearch::go_to_oldest(unsigned long long a0[35])
{
    unsigned long long v1;  // rax

    v1 = a0[2];
    if (v1)
    {
        v1 -= 1;
        a0[34] = v1;
    }
    return v1;
}
