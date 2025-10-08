long long uu_ls::display_symlink_count(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x1c]
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    v0.to_vec(core::fmt::num::imp::<impl usize>::_fmt(a1, &v2, 20), v5);
    v6 = *((long long *)&v1);
    a0->field_10 = v6;
    *((void*)&a0->field_0) = v0;
    return v6;
}
