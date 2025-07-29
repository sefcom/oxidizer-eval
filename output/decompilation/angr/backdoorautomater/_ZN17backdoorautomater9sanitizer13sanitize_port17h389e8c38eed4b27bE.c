long long backdoorautomater::sanitizer::sanitize_port(struct_0 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    char v3;  // [bp-0x68], Other Possible Types: unsigned long long
    char v4;  // [bp-0x60]
    char v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x38]
    struct_1 *v8;  // r15
    unsigned long v9;  // r12
    unsigned long long v10;  // r13
    unsigned long long v11;  // rdx
    unsigned int v12;  // eax
    unsigned long v13;  // rbp
    unsigned long long v14;  // rsi

    v0.new("[^0-9]+Error ! Given port cannot be 0 !\nError ! Given port is not in the TCP Range (1-65536)\nInvalid character in port\nError ! Please choose an option.\nError! Invalid time to schedule a cron.\n", 7);
    v8 = &v0;
    v3.unwrap(&v0, &g_62a4b8);
    v9 = *((long long *)&a1->padding_1[7]);
    v10 = a1->field_10;
    if (!(char)v3.is_match_at(*((long long *)&v4), v9, v10))
    {
        v12 = core::str::<impl str>::trim_matches(v9, v10).from_str(v11);
        v0.to_vec("Error ! Given port is invalid ! \n[^0-9]+Error ! Given port cannot be 0 !\nError ! Given port is not in the TCP Range (1-65536)\nInvalid character in port\nError ! Please choose an option.\nError! Invalid time to schedule a cron.\n", 33);
        v6 = *((long long *)&v2);
        memcpy(&v5, &v0, 16);
        v0.add(&v5, v9, v10);
        v13 = (unsigned int)v12.expect(v1, *((long long *)&v2));
        v8 = &v0;
        ::0x45a7d0::core::ptr::drop_in_place<alloc::string::String>(&v0);
        if ((unsigned short)v13)
        {
            if ((unsigned int)v13 != 65535)
            {
                a0->field_10 = a1->field_10;
                *((int128_t *)&a0->field_0) = *((int128_t *)&a1->field_0);
                return core::ptr::drop_in_place<regex::regex::string::Regex>(&v3);
            }
            v0 = &g_62a510;
            v14 = &g_62a520;
        }
        else
        {
            v0 = &g_62a4e8;
            v14 = &g_62a4f8;
        }
    }
    else
    {
        v0 = &g_62a538;
        v14 = &g_62a548;
    }
    v8->field_8 = 1;
    v8->field_10 = 8;
    *((uint128_t *)&(&v8->field_10)[1]) = 0;
    core::panicking::panic_fmt(v8, v14); /* do not return */
}
