long long fish::builtins::fish_indent::PrettyPrinterState::emit_space_or_indent(struct_0 *a0, char a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a0->field_38.at_line_start(*((long long *)&a0->field_40));
    if ((char)v3)
    {
        if (!a0->field_a0 >> 62)
            return a0->padding_0[48].extend(a0->field_a0 * 4);
        core::panicking::panic_const::panic_const_mul_overflow(&g_14c9498); /* do not return */
    }
    else
    {
        if (!a1)
        {
            v4 = a0.has_preceding_space();
            if (!(char)v4)
                return a0->padding_0[48].push(32);
            return v4;
        }
        else
        {
            return v3;
        }
    }
}
