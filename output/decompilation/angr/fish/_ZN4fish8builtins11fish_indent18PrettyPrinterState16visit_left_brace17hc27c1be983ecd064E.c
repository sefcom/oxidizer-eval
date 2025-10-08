long long fish::builtins::fish_indent::PrettyPrinterState::visit_left_brace(struct_0 *a0, unsigned long long a1, struct_2 **a2, struct_1 **a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = a3(a1);
    a0.gap_text_flags_before_node(a2(a1), a2);
    if ((char)a0.is_multi_line_brace(a1, a2) && !(char)a0->field_38.at_line_start(*((long long *)&a0->field_40)))
        a0.emit_newline();
    v5 = v3.start();
    a0->field_a0 = a0->field_20.indent(a0->field_28, v5);
    a0.emit_space_or_indent(0);
    return a0->padding_30.push(123);
}
