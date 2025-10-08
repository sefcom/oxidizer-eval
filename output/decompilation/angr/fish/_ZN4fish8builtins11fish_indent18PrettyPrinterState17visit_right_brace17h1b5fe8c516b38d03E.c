long long fish::builtins::fish_indent::PrettyPrinterState::visit_right_brace(struct_0 *a0, unsigned long long a1, struct_1 **a2, struct_2 **a3)
{
    unsigned int v1;  // ebp
    unsigned int v3;  // edx
    unsigned long long v4;  // rax

    v1 = a3(a1);
    a0.emit_gap_text_before(v1, v3, (int)a0.gap_text_flags_before_node(a2(a1), a2) & 1);
    if (!(char)a0.is_multi_line_brace(a1, a2))
        return a0.emit_node_text(a2(a1), a2);
    v4 = v1.start();
    a0->field_a0 = a0->field_20.indent(a0->field_28, v4);
    if (!(char)a0->field_38.at_line_start(*((long long *)&a0->field_40)))
        a0.emit_newline();
    a0.emit_space_or_indent(0);
    return a0->padding_30.push(125);
}
