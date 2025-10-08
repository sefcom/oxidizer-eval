long long fish::pager::Pager::visual_selected_completion_index(unsigned long long a0[22], unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (!a0[21])
        return 0;
    v2 = a0[0];
    if (!v2)
    {
        return 0;
    }
    else if (!a0[1])
    {
        return v2;
    }
    else if (!a2 || !a1)
    {
        return 0;
    }
    else
    {
        v0 = v2 & 0xffffffffffffff00 | !a1;
        fish::pager::Pager::visual_selected_completion_index::{{closure}}(a0[21], a1, a0[1]);
        return 1;
    }
}
