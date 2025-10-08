long long just::string_literal::StringLiteral::from_raw(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    v1 = a0.to_vec(a1, a2);
    a0->field_2a = 0;
    a0->field_28 = 0x200;
    a0->field_18 = a1;
    a0->field_20 = a2;
    return v1;
}
