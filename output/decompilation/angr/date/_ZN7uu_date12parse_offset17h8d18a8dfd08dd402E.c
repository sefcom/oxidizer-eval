long long uu_date::parse_offset(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x48]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rax
    unsigned int v6;  // edx
    unsigned int v7;  // ecx

    v3.now();
    parse_datetime::parse_datetime_at_date(&v0, &v3, a1, a2);
    if (v0 != 9223372036854775810)
    {
        v0.drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>();
        a0->field_0 = 1;
        return a0;
    }
    memcpy(&v2, &v1, 16);
    v5 = v2.signed_duration_since(&v3);
    if (v5 < 0)
    {
        v7 = (v6 <= 0 ? v6 : v6 - 0x3b9aca00);
        v5 += v6 > 0;
    }
    a0->field_8 = v5.new(v7);
    a0->field_10 = v6;
    a0->field_0 = 0;
    v0.drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>();
    return a0;
}
