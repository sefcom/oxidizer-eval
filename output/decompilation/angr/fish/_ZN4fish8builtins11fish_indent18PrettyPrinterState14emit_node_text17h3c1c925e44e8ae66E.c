long long fish::builtins::fish_indent::PrettyPrinterState::emit_node_text(struct_2 *a0, unsigned long long a1, struct_1 *a2)
{
    unsigned int v1;  // r14d
    unsigned int v2;  // edx
    unsigned long long v3;  // rdx
    unsigned long v5;  // cc_ndep
    unsigned long long v6;  // rax

    v1 = a2->field_78(a1);
    if (!*((long long *)&a0->field_90).substr(*((long long *)&a0->field_98), v1, v2).ends_with(v3, "\\\nsource out of bounds \\\nShould have handled all leaf nodes", 2))
    {
        return a0.emit_text(v1, v2, (int)a0.gap_text_flags_before_node(a1, a2) & 1, 0);
    }
    else if (v2 >= 2)
    {
        a0.emit_text(v1, v2 - 2, (int)a0.gap_text_flags_before_node(a1, a2) & 1, 0);
        a0->padding_0[48].extend(" \\\nShould have handled all leaf nodes", "Should have handled all leaf nodes");
        if ((char)_ccall(4, 24, a0->field_a0 + 1, 0, _ccall(19, 0, 0, v5)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14c9568); /* do not return */
        a0->field_a0 = a0->field_a0 + 1;
        a0.emit_space_or_indent(0);
        v6 = a0->field_a0;
        if (!a0->field_a0)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14c9580); /* do not return */
        a0->field_a0 = v6 - 1;
        return v6 - 1;
    }
    else
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14c9550); /* do not return */
    }
}
