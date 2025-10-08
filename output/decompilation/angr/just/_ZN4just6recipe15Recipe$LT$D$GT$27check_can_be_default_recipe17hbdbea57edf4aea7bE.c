char just::recipe::Recipe<D>::check_can_be_default_recipe(struct_0 *a0, unsigned long long a1[12])
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    char v4;  // al

    v1 = a1[10].fold(a1[11] * 208 + a1[10]);
    if (v1)
    {
        v2 = a1[1 + 6].lexeme();
        a0->field_8 = v1;
        a0->field_10 = v2;
        a0->field_18 = v3;
        v4 = 15;
    }
    else
    {
        v4 = 56;
    }
    a0->field_0 = v4;
    return v4;
}
