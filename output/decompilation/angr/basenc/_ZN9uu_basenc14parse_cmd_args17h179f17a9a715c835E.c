long long uu_basenc::parse_cmd_args(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x348], Other Possible Types: char
    unsigned long long v1;  // [bp-0x340]
    char v2;  // [bp-0x338], Other Possible Types: unsigned long
    char v3;  // [bp-0x334]
    char v4;  // [bp-0x330], Other Possible Types: unsigned int
    char v5;  // [bp-0x324]
    char v6;  // [bp-0x320]
    unsigned int v7;  // [bp-0x314]
    int v8;  // [bp-0x310], Other Possible Types: char
    unsigned long v9;  // [bp-0x300]
    unsigned long long v10;  // [bp-0x2f8]
    unsigned long long v11;  // [bp-0x2f0]
    char v12;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x2e0]
    unsigned int v14;  // [bp-0x2d8]
    char v15;  // [bp-0x2d4]
    char v16;  // [bp-0x2c4]
    unsigned int v17;  // [bp-0x2b4]
    struct_1 *v19;  // rax
    char v20;  // bpl
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rcx

    uu_basenc::uu_app(&v12);
    v8.collect_lossy(a1, a2);
    (char)v0.try_get_matches_from(&v12, &v8);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        a0->field_8 = v13.new();
        a0->field_10 = &g_510cc0;
        a0->field_0 = 2;
        return &g_510cc0;
    }
    memcpy(&v15, &v3, 16);
    memcpy(&v16, &v5, 16);
    v17 = v7;
    v12 = *((long long *)&v0);
    v13 = v1;
    v14 = *((int *)&v2);
    v10 = &g_510ad8;
    v11 = &g_510c18;
    v19 = v10.find(&v12);
    if (v19)
    {
        v20 = v19->field_10;
        (char)v0.from(&v12);
        v21 = *((long long *)&v0);
        v22 = *((long long *)&v2);
        if (v21 == 2)
        {
            a0->field_8 = v1;
            a0->field_10 = v22;
            a0->field_0 = 2;
        }
        else
        {
            *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v6);
            *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v4);
            a0->field_0 = v21;
            a0->field_8 = v1;
            a0->field_10 = v22;
            *((char *)&a0->field_28) = v20;
        }
    }
    else
    {
        v8.to_vec("missing encoding typebase64same as 'base64' programbase64urlfile- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5: \nTry ' --help' for more information.\n", 21);
        v2 = v9;
        v0 = v8;
        v4 = 1;
        *((double *)&a0->field_8) = (char)v0.new();
        a0->field_10 = &g_510c38;
        a0->field_0 = 2;
    }
    return (unsigned long long)core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v12);
}
