long long just::function::trim_start_matches(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [bp-0x20], Other Possible Types: char
    char v1;  // [bp-0x10]

    v0.to_vec(core::str::<impl str>::trim_start_matches(a2, a3, a4, a5), a2);
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v1);
    *((void*)&(&a0->field_0)[1]) = v0;
    a0->field_0 = 0;
    return a0;
}
