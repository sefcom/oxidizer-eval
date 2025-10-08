long long fish::builtins::fish_indent::PrettyPrinterState::visit_semi_nl(struct_1 *a0, unsigned long long a1, struct_0 **a2, struct_2 **a3)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned int v2;  // ebp
    unsigned int v3;  // edx
    char v4;  // r15b
    struct_0 **v5;  // 4096
    struct_0 **v6;  // r13
    unsigned int v7;  // eax
    unsigned long long v8;  // rax

    v2 = a3(a1);
    if (a0.length(v3))
    {
        v0 = v2.start();
        v4 = !core::slice::<impl [T]>::binary_search_by(a0->field_80, a0->field_88, &v0);
        v5 = a2;
    }
    else
    {
        v5 = a2;
    }
    v6 = v5;
    v7 = a0.gap_text_flags_before_node(v6(a1), a2);
    a0.emit_gap_text_before(v2, v3, v7 & 1);
    v8 = a0->field_38.at_line_start(*((long long *)&a0->field_40));
    if ((char)v8)
        return v8;
    return (!v4 ? a0.emit_newline() : a0.emit_semi());
}
