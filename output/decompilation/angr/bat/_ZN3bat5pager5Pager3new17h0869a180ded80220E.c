long long bat::pager::Pager::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, char a6)
{
    int v0;  // [bp-0x50], Other Possible Types: char
    unsigned long v1;  // [bp-0x40]
    int v2;  // [bp-0x38], Other Possible Types: char
    char v3;  // [bp-0x28]

    v0.to_vec(a1, a2);
    v2.to_vec(a3, a4);
    a0->field_10 = v1;
    *((void*)&a0->field_0) = v0;
    *((void*)&(&a0->field_10)[1]) = v2;
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v3);
    *((char *)&a0->field_28 + 1) = a5;
    *((char *)&a0->field_28) = a6;
    return a6;
}
