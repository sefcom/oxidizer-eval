long long fish::parser::Parser::function_stack_is_overflowing(struct_0 *a0)
{
    char v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax

    if (a0->field_40 >= 129)
    {
        v1 = v3;
        v0.blocks_iter_rev(a0);
        v4 = v0.fold();
        return v4 & 0xffffffffffffff00 | 129 <= v4;
    }
    return 0;
}
