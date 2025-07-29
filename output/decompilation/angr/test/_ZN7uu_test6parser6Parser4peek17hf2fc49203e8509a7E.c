long long uu_test::parser::Parser::peek(void* a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long v2;  // r14

    v2 = &a1->field_18;
    v2.get_or_insert_with(&a1[1].padding_0[16]);
    if ((char)(((0 ^ a1->field_18) & (0 ^ -(a1->field_18))) >> 63))
        v0 = 0x8000000000000000;
    else
        (char)v0.clone(v2);
    return a0.new(&v0);
}
