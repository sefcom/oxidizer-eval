long long just::function::num_cpus(struct_0 *a0)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x1c]
    unsigned long long v5;  // rdx

    v0.to_vec(core::fmt::num::imp::<impl u64>::_fmt(num_cpus::linux::get_num_cpus(), &v2, 20), v5);
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v1);
    *((void*)&(&a0->field_0)[1]) = v0;
    a0->field_0 = 0;
    return a0;
}
