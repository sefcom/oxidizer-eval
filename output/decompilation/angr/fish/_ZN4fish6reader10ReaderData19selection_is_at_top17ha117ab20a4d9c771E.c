long long fish::reader::ReaderData::selection_is_at_top(unsigned int a0)
{
    unsigned long v1;  // rbx
    unsigned long v2;  // rdx
    unsigned long long v3;  // rax

    v1 = a0 + 632;
    if (!(v2 & (char)a0.get_selected_row(v1)))
    {
        v3 = a0.get_selected_column(v1);
        return v3 & 0xffffffffffffff00 | ((char)v3 ^ 1 | !v2) & 1;
    }
    return 0;
}
