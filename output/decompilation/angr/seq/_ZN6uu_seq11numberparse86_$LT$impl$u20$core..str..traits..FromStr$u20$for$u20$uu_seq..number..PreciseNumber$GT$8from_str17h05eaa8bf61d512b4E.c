long long uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x1d8]
    int v1;  // [bp-0xb8]
    int v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0x98]
    char v4;  // [bp-0x88], Other Possible Types: unsigned long
    int v5;  // [bp-0x80], Other Possible Types: char
    int v6;  // [bp-0x70]
    char v7;  // [bp-0x60]
    char v8;  // [bp-0x48]
    int v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x28]
    unsigned long v12;  // rcx

    v4.extended_parse(a1, a2);
    if (v4 == 9223372036854775811)
    {
        v3 = *((long long *)&v7);
    }
    else if (v4 == 9223372036854775812)
    {
        memcpy(&v8, &v5, 16);
        v10 = *((long long *)&v7);
        v9 = v6;
        v12 = (*((long long *)&v8) < 9223372036854775813 ? *((long long *)&v8) + 9223372036854775809 : 0);
        v0 = 6;
        if (((char)(*((char *)&v0 + ((v12 & 63) >> 3)) >> ((char)v12 & 63 & 7)) & 1))
        {
            a0->field_30 = *((long long *)&v7);
            *((void*)&a0->field_20) = v6;
            *((void*)&a0->field_10) = v5;
            a0->field_0 = 1;
            *((unsigned long long *)&a0->field_8) = 0;
            a0->field_38 = 0;
            return a0;
        }
        v0 = 9;
        if (!((char)(*((char *)&v0 + ((v12 & 63) >> 3)) >> ((char)v12 & 63 & 7)) & 1))
        {
            a0->field_8 = 1;
            a0->field_0 = 2;
            ::0x4b9570::core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v8);
            return a0;
        }
        v3 = *((long long *)&v7);
    }
    else
    {
        a0->field_8 = 0;
        a0->field_0 = 2;
        core::ptr::drop_in_place<uucore::features::parser::num_parser::ExtendedParserError<uucore::features::extendedbigdecimal::ExtendedBigDecimal>>(&v4);
        return a0;
    }
    v2 = v6;
    v1 = v5;
    uu_seq::numberparse::compute_num_digits(a0, a1, a2, &v1);
    return a0;
}
