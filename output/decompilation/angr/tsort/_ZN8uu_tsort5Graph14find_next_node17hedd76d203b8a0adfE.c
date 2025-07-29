long long uu_tsort::Graph::find_next_node(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a1.pop_front();
    if (v3)
        return v3;
    do
    {
        a0.find_and_break_cycle(a1);
        v4 = a1.pop_front();
    } while (!v4);
    return v4;
}
