long long starship::modules::bun::parse_bun_version(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x20], Other Possible Types: char
    char v1;  // [bp-0x10]
    unsigned long long v4;  // rax

    v0.to_vec(core::str::<impl str>::trim_end_matches(a1, a2), a2);
    v4 = *((long long *)&v1);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v0;
    return v4;
}
