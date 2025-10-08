long long uu_tail::follow::files::PathData::new(struct_0 *a0, unsigned long a1, unsigned long a2, void* a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    char v1;  // [bp-0x28]

    v0.to_vec(a4, a5);
    a0->field_c0 = *((long long *)&v1);
    *((void*)&a0->field_b0) = v0;
    a0->field_c8 = a1;
    a0->field_d0 = a2;
    return memcpy(a0, a3, 176);
}
