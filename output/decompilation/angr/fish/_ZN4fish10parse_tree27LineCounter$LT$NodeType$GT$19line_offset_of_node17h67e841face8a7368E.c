long long fish::parse_tree::LineCounter<NodeType>::line_offset_of_node(struct_0 *a0)
{
    unsigned long long v1;  // rdx

    if (!((char)a0->field_8.source_offset_of_node() & 1))
        return 0;
    a0.line_offset_of_character_at_offset(v1);
    return 1;
}
