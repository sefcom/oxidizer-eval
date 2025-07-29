void uu_date::parse_date(struct_0 *a0, unsigned long long a1[3])
{
    int v0;  // [bp-0xb8], Other Possible Types: char
    char v1;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v2;  // [bp-0xa0]
    unsigned long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    char v5;  // [bp-0x80], Other Possible Types: unsigned long
    unsigned int v6;  // [bp-0x78]
    unsigned int v7;  // [bp-0x74]
    char v8;  // [bp-0x70], Other Possible Types: unsigned long long
    int v9;  // [bp-0x68], Other Possible Types: char
    unsigned long long v10;  // [bp-0x58]
    int v11;  // [bp-0x48], Other Possible Types: char
    char v12;  // [bp-0x38]
    unsigned long long v15;  // rdx
    unsigned int v16;  // eax

    parse_datetime::parse_datetime(&v5, a1[1].as_ref(a1[2]), v15);
    if (v5 == 9223372036854775810)
    {
        v16 = v6.num_days_from_ce();
        v0.new((v16 - 719163) * 86400 + v7, *((int *)&v8));
        v0.new(v0.unwrap(), v15, 1);
        a0->field_28 = v3;
        *((int128_t *)&a0->field_18) = *((int128_t *)&v1);
        *((void*)&a0->field_8[0]) = v0;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    }
    else
    {
        v10 = v8;
        memcpy(&v9, &v5, 16);
        v11.to_vec(a1[1].as_ref(a1[2]), v15);
        v1 = *((long long *)&v12);
        v0 = v11;
        v2 = v9;
        v4 = v10;
        a0->field_8[1] = v1;
        *((long long *)&a0->field_18) = (long long)v2;
        *((void*)&a0->field_0) = v11;
        *((unsigned long *)&a0->padding_19[7]) = v3;
        a0->field_28 = v4;
    }
    ::0x5dec20::core::ptr::drop_in_place<alloc::string::String>(a1);
    return;
}
