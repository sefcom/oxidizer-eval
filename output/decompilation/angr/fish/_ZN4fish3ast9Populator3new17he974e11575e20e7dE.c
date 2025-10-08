long long fish::ast::Populator::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned long a5)
{
    char v0;  // [bp-0xb8]
    unsigned long long v2;  // rax

    v0.new(a1, a2, a3, a4);
    *((char *)&a0->field_d9 + 1) = a3;
    a0->field_0 = 0;
    a0->field_8 = 4;
    a0->field_10 = 0;
    a0->field_20 = 4;
    a0->field_28 = 0;
    v2 = memcpy(&a0->padding_30, &v0, 152);
    a0->field_d8 = a4;
    *((unsigned short *)&(&a0->field_d8)[1]) = 0;
    a0->field_c8 = 0;
    a0->field_d0 = a5;
    return v2;
}
