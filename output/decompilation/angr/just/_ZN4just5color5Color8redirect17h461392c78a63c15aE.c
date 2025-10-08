long long just::color::Color::redirect(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rax

    v0 = v2;
    a0->field_0 = <std::io::stdio::Stderr as std::io::stdio::IsTerminal>::is_terminal();
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&(&a1->padding_0)[1]);
    v3 = *((char *)&a1->field_1 + 1);
    *((char *)&a0->field_1 + 1) = v3;
    return v3;
}
