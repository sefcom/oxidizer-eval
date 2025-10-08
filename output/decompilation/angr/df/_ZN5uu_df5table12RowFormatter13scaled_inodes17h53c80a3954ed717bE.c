long long uu_df::table::RowFormatter::scaled_inodes(unsigned long long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // rax

    v1 = a3;
    v0 = a2;
    v3 = a1->field_54;
    if ((char)v3 != 2)
        return uu_df::blocks::to_magnitude_and_suffix(a0, a2, a3, (unsigned int)v3 & 255);
    return a0.spec_to_string(&v0);
}
