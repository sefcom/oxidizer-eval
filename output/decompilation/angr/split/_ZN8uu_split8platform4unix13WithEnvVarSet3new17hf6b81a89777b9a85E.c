long long uu_split::platform::unix::WithEnvVarSet::new(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    int v1;  // [bp-0x48]
    int v2;  // [bp-0x38], Other Possible Types: char
    char v3;  // [bp-0x28]
    unsigned long long v5;  // rax

    std::env::var(&v0, "FILEchar", 4);
    std::env::set_var("FILEchar", 4, a1, a2);
    v2.to_vec("FILEchar", 4);
    v5 = *((long long *)&v3);
    a0->field_30 = v5;
    *((void*)&a0->field_20) = v2;
    *((void*)&a0->field_10) = v1;
    *((void*)&a0->field_0) = v0;
    return v5;
}
