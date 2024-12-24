long long uu_basenc::parse_cmd_args::hfc9093c9740c8eed(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
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
    unsigned long long v20;  // rcx
    struct_0 *v23;  // rax
    char v25;  // bpl
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rcx

    uu_basenc::uu_app::he9829a50bfb4841e(&v14);
    uucore::Args::collect_lossy::hd31841fd6102c9f0(&v0, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::hde5c82cf29759c68(&v8, &v14, &v0, v20);
    if (v2 == 0x8000000000000000)
    {
        a0->field_8 = alloc::boxed::Box$LT$T$GT$::new::h166bf730fac6daee(v3);
        a0->field_10 = &g_54d520;
        a0->field_0 = 2;
        return &g_54d520;
    }
    *((int128_t *)&v5) = *((int128_t *)&v11);
    *((int128_t *)&v6) = *((int128_t *)&v12);
    v7 = *((int *)&v13);
    v2 = *((long long *)&v8);
    v3 = *((long long *)&v9);
    v4 = *((int *)&v10);
    v0 = &g_54d300;
    v1 = &g_54d440;
    v23 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h4b4c1aba0bcf3bb2(&v0, &v2);
    if (!v23)
    {
        ::0x47b320::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3b5ebc400045b8ce(&v8);
        v16 = *((long long *)&v10);
        *((int128_t *)&v14) = *((int128_t *)&v8);
        v17 = 1;
        *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::hbcc4bc236636aa79(&v14);
        a0->field_10 = &g_54d478;
        goto LABEL_47c2ab;
    }
    else
    {
        v25 = v23->field_10;
        uu_base32::base_common::Config::from::h1cce24ddb373e3aa(&v14, &v2);
        v26 = *((long long *)&v14);
        v27 = *((long long *)&v15);
        v28 = v16;
        if (v26 != 2)
        {
            *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v18);
            *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v17);
            a0->field_0 = v26;
            a0->field_8 = v27;
            a0->field_10 = v28;
            *((char *)&a0->field_28) = v25;
        }
        else
        {
            a0->field_8 = v27;
            a0->field_10 = v28;
LABEL_47c2ab:
            a0->field_0 = 2;
        }
    }
    return core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6e5363d55758e048(&v2);
}
