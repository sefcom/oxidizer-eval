long long fish::builtins::fish_indent::PrettyPrinterState::visit_maybe_newlines(struct_1 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned int v3;  // r14d
    unsigned int v4;  // ebp
    unsigned long long v5;  // rax
    unsigned int v6;  // eax
    unsigned long long v7;  // rax
    unsigned int v8;  // r14d
    unsigned int v9;  // eax

    v0 = v2;
    if (!(a1->field_0 & 1))
        return v2;
    v3 = a1->field_4;
    v4 = a1->field_8;
    v5 = a0.length(v4);
    if (!v5)
        return v5;
    v6 = a0.gap_text_flags_before_node(a1, &g_14c2c08);
    v7 = v3.start();
    a0->field_a0 = a0->field_20.indent(a0->field_28, v7);
    v8 = v3;
    if ((char)a0.emit_gap_text_before(v8, v4, v6 & 1))
    {
        v8 = v3;
        if (a0.length(v4))
        {
            v9 = a0->field_90.char_at(a0->field_98, v3.start());
            v8 = v3;
            if (v9 == 10)
            {
                v8 = v3 + 1;
                if ((char)_ccall(4, 23, (unsigned long long)(v3 + 1), 0, (unsigned long long)(char)(v9 < 10)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14c9598); /* do not return */
            }
        }
    }
    return a0.emit_gap_text(v8, v4, v6 & 1);
}
