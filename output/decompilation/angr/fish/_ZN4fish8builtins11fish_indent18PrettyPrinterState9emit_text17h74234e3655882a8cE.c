long long fish::builtins::fish_indent::PrettyPrinterState::emit_text(struct_0 *a0, unsigned int a1, unsigned int a2, unsigned int a3, char a4)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    a0.emit_gap_text_before(a1, a2, a3);
    v4 = a1.start();
    a0->field_a0 = a0->field_20.indent(a0->field_28, v4);
    v5 = a0.length(a2);
    if (!v5)
        return v5;
    a0.emit_space_or_indent(a4);
    v0.clean_text(*((long long *)&a0->field_90).substr(*((long long *)&a0->field_98), a1, a2), a2);
    a0->padding_30.spec_extend(v1, v1 + *((long long *)&v2) * 4);
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
}
