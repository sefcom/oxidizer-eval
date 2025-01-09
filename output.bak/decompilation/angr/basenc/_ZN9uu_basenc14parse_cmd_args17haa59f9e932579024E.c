long long uu_basenc::parse_cmd_args::haa59f9e932579024(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x370], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x368]
    unsigned long v2;  // [sp-0x358], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x350]
    unsigned int v4;  // [sp-0x348]
    int v5;  // [sp-0x344]
    int v6;  // [sp-0x334]
    unsigned int v7;  // [sp-0x324]
    char v8;  // [bp-0x320]
    char v9;  // [bp-0x318]
    char v10;  // [bp-0x310]
    char v11;  // [bp-0x30c]
    char v12;  // [bp-0x2fc]
    char v13;  // [bp-0x2ec]
    int v14;  // [bp-0x2e8], Other Possible Types: char
    char v15;  // [bp-0x2e0]
    unsigned long v16;  // [sp-0x2d8], Other Possible Types: unsigned long long
    unsigned int v17;  // [sp-0x2d0]
    char v18;  // [bp-0x2c0]
    struct_1 *v22;  // rax
    char v24;  // bpl
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rcx

    uu_basenc::uu_app::hfbf1ac7160545103(&v14);
    uucore::Args::collect_lossy::h59613048ab61941c(&v0, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::hd3fa77ff50e7945c(&v8, &v14, &v0);
    if (v2 == 0x8000000000000000)
    {
        a0->field_8 = alloc::boxed::Box$LT$T$GT$::new::h52e31e1a4412d689(v3);
        a0->field_10 = &g_54cd90;
        a0->field_0 = 2;
        return &g_54cd90;
    }
    *((int128_t *)&v5) = *((int128_t *)&v11);
    *((int128_t *)&v6) = *((int128_t *)&v12);
    v7 = *((int *)&v13);
    v2 = *((long long *)&v8);
    v3 = *((long long *)&v9);
    v4 = *((int *)&v10);
    v0 = &g_54cb70;
    v1 = &g_54ccb0;
    v22 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h0ca1d326b6d409fa(&v0, &v2);
    if (!v22)
    {
        ::0x47bf20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::heaa6d59ecfaf3b76(&v8);
        v16 = *((long long *)&v10);
        *((int128_t *)&v14) = *((int128_t *)&v8);
        v17 = 1;
        *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h92a545b9430b9ec5(&v14);
        a0->field_10 = &g_54cce8;
        goto LABEL_47ceab;
    }
    else
    {
        v24 = v22->field_10;
        uu_base32::base_common::Config::from::h8f03cd9b16c9529c(&v14, &v2);
        v25 = *((long long *)&v14);
        v26 = *((long long *)&v15);
        v27 = v16;
        if (v25 != 2)
        {
            *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v18);
            *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v17);
            a0->field_0 = v25;
            a0->field_8 = v26;
            a0->field_10 = v27;
            *((char *)&a0->field_28) = v24;
        }
        else
        {
            a0->field_8 = v26;
            a0->field_10 = v27;
LABEL_47ceab:
            a0->field_0 = 2;
        }
    }
    return core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h232bb017e5ec51f0(&v2);
}
