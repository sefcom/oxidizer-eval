long long fd::fmt::input::dirname(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long
    char v1;  // [bp-0x28]
    unsigned long long v3;  // rax

    v3 = a1.parent(a2);
    if (!v3)
        return a0.to_vec(a1, a2);
    fd::fmt::input::dirname::{{closure}}(&v0, v3, a2);
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
    a0->field_0 = v0;
    return v0;
}
