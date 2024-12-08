long long uu_df::table::RowFormatter::scaled_inodes::hd46b2c5f83a68ef1(unsigned long long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x10]
    unsigned long long v3;  // rax

    v1 = a3;
    v0 = a2;
    v3 = a1->field_54;
    if ((char)v3 != 2)
        return uu_df::blocks::to_magnitude_and_suffix::h6db7bfcd5f682503(a0, a2, a3, v3 & 4294967295 & 4294967295);
    return _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h3af679b7ce1e0f02(a0, &v0);
}
