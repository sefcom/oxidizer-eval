long long uu_date::parse_date(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0xa0], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x98]
    unsigned int v2;  // [bp-0x94]
    char v3;  // [bp-0x90]
    char v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x78]
    int v6;  // [bp-0x68], Other Possible Types: char
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    int v11;  // [bp-0x38], Other Possible Types: char
    char v12;  // [bp-0x28]
    unsigned long long v15;  // rdx
    unsigned int v16;  // eax
    unsigned long long v17;  // rax

    parse_datetime::parse_datetime(&v0, a1.as_ref(), v15);
    if (v0 != 9223372036854775810)
    {
        v5 = *((long long *)&v3);
        memcpy(&v4, &v0, 16);
        v11.to_vec(a1.as_ref(), v15);
        v7 = *((long long *)&v12);
        v6 = v11;
        memcpy(&v8, &v4, 16);
        v10 = v5;
        a0->field_10 = v7;
        a0->field_18 = v8;
        *((void*)&a0->field_0) = v11;
        a0->field_20 = v9;
        a0->field_28 = v10;
        return v10;
    }
    v16 = v1.num_days_from_ce();
    v6.new((v16 - 719163) * 86400 + v2, *((int *)&v3));
    v17 = a0->padding_1[7].new(v6.unwrap(), v15, 1);
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    return v17;
}
