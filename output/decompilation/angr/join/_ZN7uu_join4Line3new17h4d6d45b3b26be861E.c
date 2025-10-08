long long uu_join::Line::new(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x30], Other Possible Types: char
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    v0.field_ranges(a2, a1->field_0[1], a1->field_8, a3);
    a0->field_10 = *((long long *)&v1);
    *((void*)&a0->field_0) = v0;
    *((unsigned long long [2])&(&a0->field_10)[1]) = a1->field_0;
    v3 = a1->field_8;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v3;
    return v3;
}
