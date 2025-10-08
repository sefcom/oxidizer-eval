long long just::function::just_pid(struct_0 *a0)
{
    int v0;  // [bp-0x30], Other Possible Types: char
    char v1;  // [bp-0x20]
    char v2;  // [bp-0x12]
    unsigned long long v5;  // rdx

    v0.to_vec(core::fmt::num::imp::<impl u32>::_fmt(std::process::id(), &v2, 10), v5);
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v1);
    *((void*)&(&a0->field_0)[1]) = v0;
    a0->field_0 = 0;
    return a0;
}
