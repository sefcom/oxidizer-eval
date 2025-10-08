long long fish::builtins::fish_indent::PrettyPrinterState::visit_redirection(void* a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    if (!(a1->field_0 & 1))
        return v2;
    v3 = a0.emit_text(a1->field_4, a1->field_8, 0, 0);
    if (!(a1->field_10 & 1))
        return v3;
    return a0.emit_text(a1->field_14, a1->field_18, 0, 1);
}
