long long fish::parse_tree::LineCounter<NodeType>::source_offset_of_node(unsigned long long a0)
{
    char v0;  // [bp-0xc]
    char v1;  // [bp-0x8]

    if (!a0)
        return 0;
    v0.try_source_range(a0);
    if (!(v0 & 1))
        return 0;
    *((int *)&v1).start();
    return 1;
}
