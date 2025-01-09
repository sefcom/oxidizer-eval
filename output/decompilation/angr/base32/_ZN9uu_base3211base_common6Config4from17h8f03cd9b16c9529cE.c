long long uu_base32::base_common::Config::from::h8f03cd9b16c9529c(struct_0 *a0, unsigned long long a1)
{
    char *v0;  // [sp-0x1c0]
    unsigned long long v1;  // [sp-0x1b8]
    char v2;  // [sp-0x1b0], Other Possible Types: unsigned long long
    char v3;  // [bp-0x1a0]
    void* v4;  // [sp-0x198], Other Possible Types: unsigned long long
    int v5;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x188]
    char v7;  // [sp-0x180]
    char v8;  // [bp-0x178]
    unsigned int v9;  // [sp-0x160]
    char v10;  // [bp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long v11;  // [sp-0x150], Other Possible Types: unsigned long long
    struct struct_1 **v12;  // [sp-0x148]
    unsigned long long v13;  // [sp-0x140]
    void* v14;  // [sp-0x138]
    int v15;  // [sp-0xa8]
    int v16;  // [sp-0x98]
    int v17;  // [sp-0x88]
    int v18;  // [sp-0x78]
    char v19;  // [bp-0x68]
    char v20;  // [bp-0x58]
    char v21;  // [bp-0x48]
    char v22;  // [bp-0x38]
    unsigned long long v24;  // r15
    unsigned long long v25[3];  // rax
    unsigned long long v26[3];  // r15
    struct_2 *v27;  // rax
    unsigned long long v28;  // r12
    unsigned long long v29;  // rax
    unsigned long long v31;  // rsi
    unsigned long long v32[3];  // rax
    unsigned long long v33;  // r12
    unsigned long long v34;  // rax

    v24 = "filei128";
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5f358a8c68c9a234(&v10, a1, "filei128", 4);
    clap_builder::parser::error::MatchesError::unwrap::h49b6dd2a71fba2f5(&v19, "filei128", 4, &v10);
    if (*((long long *)&v19))
    {
        *((int128_t *)&v18) = *((int128_t *)&v22);
        *((int128_t *)&v17) = *((int128_t *)&v21);
        *((int128_t *)&v16) = *((int128_t *)&v20);
        *((int128_t *)&v15) = *((int128_t *)&v19);
        v25 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h87b3baa98003a4ff(&v15);
        if (!v25)
            core::option::unwrap_failed::h0e11329e76906eaa(&g_5495a0); /* do not return */
        v26 = v25;
        v27 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h87b3baa98003a4ff(&v15);
        if (v27)
        {
            v4 = 0;
            *((int128_t *)&v5) = *((int128_t *)&(&v27->padding_0)[1]);
            v7 = 1;
            v0 = &v4;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v10 = &g_549570;
            v11 = 1;
            v14 = 0;
            v12 = &v0;
            v13 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b();
            v9 = 1;
            v29 = alloc::boxed::Box$LT$T$GT$::new::ha198aac8b81d8d24(&v8);
            a0->field_8 = v29;
            a0->field_10 = &g_5495f0;
            a0->field_0 = 2;
            return a0;
        }
        v28 = v26[1];
        v24 = v26[2];
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a5391263b8fe46e(v28, v24, "-invalid wrap size: wrap encoded lines after COLS character (default , 0 to disable wrapping)", 1))
        {
            std::fs::metadata::h44d4a21c29bf25da(&v10, v28, v24);
            v31 = v11;
            if (v10 == 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hbca8dbb0b453c058(2, v31);
                v4 = 1;
                v5 = v28;
                v6 = v24;
                v7 = 0;
                v0 = &v4;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v10 = &g_549580;
                v11 = 2;
                v14 = 0;
                v12 = &v0;
                v13 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b();
                v9 = 1;
                v29 = alloc::boxed::Box$LT$T$GT$::new::h89f85ffc87d48af0(&v8);
                a0->field_8 = v29;
                a0->field_10 = &g_549698;
                a0->field_0 = 2;
                return a0;
            }
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hbca8dbb0b453c058(v10, v31);
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v2, v28, v24);
LABEL_4c1111:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h61f91ed1ea627239(&v10, a1, "wrap", 4);
            v32 = clap_builder::parser::error::MatchesError::unwrap::h0cc7fcf21fadb1ed("wrap", 4, &v10);
            if (!v32)
            {
                v33 = 0;
            }
            else
            {
                uu_base32::base_common::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::ha2ccd14d5f7590b0(&v10, v32[1], v32[2]);
                v34 = v10;
                v24 = v11;
                if (v34)
                {
                    a0->field_8 = v34;
                    a0->field_10 = v24;
                    a0->field_0 = 2;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hde4c27a62c966e98(&v2);
                    return a0;
                }
                v33 = 1;
            }
            a0->field_20 = *((long long *)&v3);
            *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
            a0->field_0 = v33;
            a0->field_8 = v24;
            a0->field_28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "decode", 6);
            a0->field_29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "ignore-garbage", 14);
            return a0;
        }
    }
    v2 = 0x8000000000000000;
    goto LABEL_4c1111;
}
