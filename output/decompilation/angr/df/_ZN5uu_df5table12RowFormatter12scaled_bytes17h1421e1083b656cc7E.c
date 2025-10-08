long long uu_df::table::RowFormatter::scaled_bytes(unsigned long long a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rbx
    int v4;  // xmm2
    int v5;  // xmm0
    int v6;  // xmm1
    int v7;  // xmm2

    if (a1->field_54 != 2)
        return uu_df::blocks::to_magnitude_and_suffix(a0, a2, 0, a1->field_54);
    v1 = v3;
    v4 = InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000;
    v5 = (unsigned long long)(v4 >> 64) CONCAT (unsigned long long)(v4 >> 64);
    v6 = InterleaveLOV(0x4530000043300000, a1->field_48) - 0x45300000000000004330000000000000;
    v7 = (unsigned long long)(v6 >> 64) CONCAT (unsigned long long)(v6 >> 64);
    ceil();
    v0 = (unsigned long long)(DivV(AddV((unsigned long long)(v4 >> 64) CONCAT (unsigned long long)(v4 >> 64), v4) & 18446744073709551615, AddV((unsigned long long)(v6 >> 64) CONCAT (unsigned long long)(v6 >> 64), v6) & 18446744073709551615));
    return a0.spec_to_string(&v0);
}
