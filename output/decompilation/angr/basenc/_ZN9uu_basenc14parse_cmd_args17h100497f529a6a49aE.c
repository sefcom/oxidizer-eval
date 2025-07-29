long long uu_basenc::parse_cmd_args(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x380]
    unsigned long long v1;  // [bp-0x378]
    unsigned long v2;  // [bp-0x370]
    unsigned long long v3;  // [bp-0x368]
    unsigned long long v4;  // [bp-0x360]
    unsigned int v5;  // [bp-0x358]
    int v6;  // [bp-0x354]
    int v7;  // [bp-0x344]
    unsigned int v8;  // [bp-0x334]
    unsigned long long v9;  // [bp-0x330]
    unsigned long long v10;  // [bp-0x328]
    char v11;  // [bp-0x320], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x318]
    unsigned int v13;  // [bp-0x310]
    int v14;  // [bp-0x30c]
    int v15;  // [bp-0x2fc]
    unsigned int v16;  // [bp-0x2ec]
    int v17;  // [bp-0x2e8], Other Possible Types: char
    unsigned long v18;  // [bp-0x2e0]
    unsigned long v19;  // [bp-0x2d8], Other Possible Types: unsigned long long
    char v20;  // [bp-0x2d0], Other Possible Types: unsigned int
    char v21;  // [bp-0x2c0]
    struct_0 *v23;  // rax
    char v24;  // bpl
    unsigned long long v25;  // rdx

    uu_basenc::uu_app(&v17);
    v0.collect_lossy(a1, a2);
    v11.try_get_matches_from(&v17, &v0);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
    {
        a0->field_8 = v4.new();
        a0->field_10 = &g_5a7488;
        a0->field_0 = 2;
        return &g_5a7488;
    }
    v6 = v14;
    v7 = v15;
    v8 = v16;
    v3 = v11;
    v4 = v12;
    v5 = v13;
    uu_basenc::get_encodings(&v0);
    v9 = v1;
    v10 = v2 * 48 + v1;
    v23 = v9.find(&v3);
    if (v23)
    {
        v24 = v23->field_10;
        v17.from(&v3);
        v25 = *((long long *)&v17);
        if (v25 == 2)
        {
            a0->field_8 = v18;
            a0->field_10 = v19;
LABEL_4ad1a6:
            a0->field_0 = 2;
            core::ptr::drop_in_place<alloc::vec::Vec<(&str,uucore::features::encoding::Format,alloc::string::String)>>(&v0);
        }
        else
        {
            *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v21);
            *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v20);
            a0->field_0 = v25;
            a0->field_8 = v18;
            a0->field_10 = v19;
            *((char *)&a0->field_28) = v24;
            core::ptr::drop_in_place<alloc::vec::Vec<(&str,uucore::features::encoding::Format,alloc::string::String)>>(&v0);
        }
    }
    else
    {
        uucore::mods::locale::get_message(&v11, "basenc-error-missing-encoding-type: \nTry ' --help' for more information.\n", 34);
        v20 = 1;
        *((int128_t *)&v17) = *((int128_t *)&v11);
        v19 = *((long long *)&v13);
        *((double *)&a0->field_8) = v17.new();
        a0->field_10 = &g_5a7400;
        goto LABEL_4ad1a6;
    }
    return (unsigned long long)core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
}
