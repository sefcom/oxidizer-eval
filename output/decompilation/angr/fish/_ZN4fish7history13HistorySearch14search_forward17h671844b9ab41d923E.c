long long fish::history::HistorySearch::search_forward(struct_0 *a0, unsigned long a1)
{
    do
    { } while ((char)a0.go_to_next_match(0) && a0->field_a0 <= a1);
    return a0->padding_0[136].clear();
}
