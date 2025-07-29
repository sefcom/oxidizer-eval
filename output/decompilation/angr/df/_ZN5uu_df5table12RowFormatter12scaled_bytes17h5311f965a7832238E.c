long long uu_df::table::RowFormatter::scaled_bytes(unsigned long long a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rbx
    unsigned long v4;  // xmm0lq
    int v5;  // xmm1
    unsigned long v6;  // xmm2lq

    if (a1->field_54 != 2)
        return uu_df::blocks::to_magnitude_and_suffix(a0, a2, 0, a1->field_54);
    v1 = v3;
    v4 = AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000);
    v5 = InterleaveLOV(0x4530000043300000, a1->field_48) - 0x45300000000000004330000000000000;
    v6 = AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a1->field_48) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a1->field_48) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a1->field_48) - 0x45300000000000004330000000000000);
    ceil((unsigned long long)(DivV(v4, v6)));
    v0 = DivV(v4, v6);
    return a0.spec_to_string(&v0);
}
