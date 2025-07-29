long long uu_join::Line::new(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rax

    v0.field_ranges(a2, *((long long *)&a1->padding_1[7]), a1->field_10, a3);
    a0->field_28 = a1->field_10;
    *((int128_t *)&a0->field_18) = *((int128_t *)&a1->field_0);
    *((void*)&a0->field_0) = v0;
    v3 = *((long long *)&v1);
    a0->field_10 = v3;
    return v3;
}
