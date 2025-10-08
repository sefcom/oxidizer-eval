long long starship::module::Module::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5)
{
    int v0;  // [bp-0x50], Other Possible Types: char
    unsigned long v1;  // [bp-0x40]
    int v2;  // [bp-0x38], Other Possible Types: char
    char v3;  // [bp-0x28]
    unsigned long long v5;  // rax

    v0.visit_borrowed_str(a1, a2);
    v2.visit_borrowed_str(a3, a4);
    *((unsigned long *)((char *)&a0->field_40 + 8)) = a5;
    *((void*)&a0->field_0) = v0;
    a0->field_10 = v1;
    *((void*)&(&a0->field_10)[1]) = v2;
    v5 = *((long long *)&v3);
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v5;
    a0->field_28 = 0;
    a0->field_30 = 8;
    *((uint128_t *)&a0->field_38) = 0;
    *((unsigned int *)&a0->field_40) = 0;
    return v5;
}
