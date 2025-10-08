long long uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x198]
    char v1;  // [bp-0x70], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [bp-0x68]
    int v3;  // [bp-0x60], Other Possible Types: char
    char v4;  // [bp-0x58]
    unsigned long v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    int v7;  // [bp-0x38]
    unsigned long v8;  // [bp-0x28]
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rsi
    struct_0 *v12;  // rax
    unsigned long v13;  // rcx

    v1.extended_parse(a1, a2);
    if (v1 == 9223372036854775817)
    {
        v10 = v2;
        v11 = *((long long *)&v3);
        v12 = &v4;
        v13 = (v10 < 9223372036854775813 ? 9223372036854775803 + v10 + 6 : 0);
        v0 = 6;
        if ((*((char *)&v0 + ((v13 & 63) >> 3)) >> ((char)v13 & 63 & 7) & 1))
        {
            *((long long *)&a0[48]) = *((long long *)&v6);
            *((int128_t *)&a0[32]) = *((int128_t *)&v4);
            *((unsigned long long *)a0) = 1;
            *((unsigned long long *)&a0[8]) = 0;
            *((unsigned long long *)&a0[16]) = v10;
            *((unsigned long long *)&a0[24]) = v11;
            *((unsigned long long *)&a0[56]) = 0;
            return a0;
        }
        v0 = 9;
        if (!(*((char *)&v0 + ((v13 & 63) >> 3)) >> ((char)v13 & 63 & 7) & 1))
        {
            *((char *)&a0[8]) = 1;
            *((unsigned long long *)a0) = 2;
            core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v10, v11);
            return a0;
        }
    }
    else if (v1 + 9223372036854775803 == 3)
    {
        v11 = *((long long *)&v3);
        v12 = &v4;
    }
    else
    {
        *((char *)&a0[8]) = 0;
        *((unsigned long long *)a0) = 2;
        core::ptr::drop_in_place<uucore::features::parser::num_parser::ExtendedParserError<uucore::features::extendedbigdecimal::ExtendedBigDecimal>>(&v1);
        return a0;
    }
    v8 = v12->field_10;
    *((char [16])&v7) = v12->field_0;
    v1 = v10;
    v2 = v11;
    *((char [16])&v3) = v12->field_0;
    v5 = v8;
    uu_seq::numberparse::compute_num_digits(a0, a1, a2, &v1);
    return a0;
}
