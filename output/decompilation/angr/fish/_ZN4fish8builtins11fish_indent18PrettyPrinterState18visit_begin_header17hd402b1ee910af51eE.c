long long fish::builtins::fish_indent::PrettyPrinterState::visit_begin_header(struct_1 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    a0.emit_node_text(a1, &g_14c3628);
    if (a1->field_10 != 2)
        a0.visit_semi_nl(&a1->field_10, <T as fish::ast::AsNode>::as_node, fish::ast::Node::source_range);
    v3 = a0->field_38.at_line_start(*((long long *)&a0->field_40));
    if (!(char)v3)
        return a0.emit_newline();
    return v3;
}
