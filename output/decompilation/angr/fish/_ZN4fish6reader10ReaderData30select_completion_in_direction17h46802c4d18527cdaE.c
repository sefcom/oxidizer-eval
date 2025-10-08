long long fish::reader::ReaderData::select_completion_in_direction(void* a0, char a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a0 + 352.select_next_completion_in_direction(a1, a0 + 632);
    if (!a2 && !(char)v3)
        return v3;
    return a0.pager_selection_changed();
}
