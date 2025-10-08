long long fish::reader_history_search::ReaderHistorySearch::move_in_direction(unsigned long long a0, unsigned int a1)
{
    if (!a1)
        return a0.move_forwards();
    return a0.move_backwards();
}
