long long fish::history::HistorySearch::current_string(void* a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return *((long long *)(a0.current_item() + 8));
}
