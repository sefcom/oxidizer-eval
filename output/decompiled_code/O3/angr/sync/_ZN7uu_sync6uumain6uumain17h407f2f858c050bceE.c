long long uu_sync::uumain::uumain::h407f2f858c050bce(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x3a8], Other Possible Types: unsigned long, unsigned long long
    int v1;  // [sp-0x3a0], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x398]
    unsigned long long v3;  // [sp-0x390]
    char v4;  // [bp-0x388]
    char v5;  // [bp-0x380]
    char v6;  // [bp-0x378]
    char v7;  // [bp-0x368]
    char v8;  // [bp-0x358]
    unsigned long v9;  // [sp-0x348], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x340]
    int v11;  // [sp-0x338]
    int v12;  // [sp-0x328]
    unsigned long long v13;  // [sp-0x318]
    char v14;  // [bp-0x310]
    char v15;  // [bp-0x308]
    int v16;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    unsigned long long v17;  // [sp-0x2f0]
    int v18;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v19;  // [sp-0x2e0]
    int v20;  // [sp-0x2d8]
    int v21;  // [sp-0x2c8]
    unsigned long long v23;  // r8
    unsigned long long v24;  // r9
    void* v27;  // rax
    unsigned long long v29;  // rdx
    unsigned long long v31;  // rcx
    unsigned long long v32[3];  // rax
    unsigned long long v33;  // r12
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rsi
    unsigned long long v36;  // rsi

    uu_sync::uu_app::hbd9026fe07cb3ff7(&v16, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::hc23ef9eb20649cbc(&v4, &v16, a0, a1, v23, v24);
    if (v9 == 0x8000000000000000)
    {
        v27 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v10);
        return v27;
    }
    v13 = *((long long *)&v8);
    *((int128_t *)&v12) = *((int128_t *)&v7);
    *((int128_t *)&v11) = *((int128_t *)&v6);
    v9 = *((long long *)&v4);
    v10 = *((long long *)&v5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h081bf8739e290fe0(&v16, &v9, _ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E, g_50f058);
    clap_builder::parser::error::MatchesError::unwrap::hef673200ff6c2f5e(&v4, _ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E, g_50f058, &v16);
    if (!*((long long *)&v4) || (*((int128_t *)&v21) = *((int128_t *)&v8), *((int128_t *)&v20) = *((int128_t *)&v7), *((int128_t *)&v18) = *((int128_t *)&v6), *((int128_t *)&v16) = *((int128_t *)&v4), _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h93e75ad4c4b808a4(&v14, &v16, v29), *((int128_t *)&v16) = *((int128_t *)&v15), v0 == 0x8000000000000000))
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    }
    else
    {
        *((int128_t *)&v1) = (int128_t)v16;
        v0 = *((long long *)&v14);
    }
    v31 = v2;
    if ((!v31 & (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE, g_50f048)))
    {
        ::0x45f190::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed56f59dd49a5456(&v4);
        v18 = *((long long *)&v6);
        *((int128_t *)&v16) = *((int128_t *)&v4);
        v19 = 1;
        v27 = alloc::boxed::Box$LT$T$GT$::new::h19a1f1b0b127e263(&v16);
        goto LABEL_46068f;
    }
    v3 = _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE;
    v16 = v1;
    v17 = v16 + v31 * 24;
    v32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1aca6a860bec0f51(&v16);
    if (v32)
    {
        do
        {
            v33 = v32[1];
            v34 = v32[2];
            if ((v32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1aca6a860bec0f51(&v16), v32))
                goto LABEL_46068c;
        } while ((v32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1aca6a860bec0f51(&v16), v32));
    }
    v35 = v3;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, _ZN7uu_sync7options11FILE_SYSTEM17hd312cdc539073d0fE, g_50f038))
    {
        v18 = v2;
        *((int128_t *)&v16) = *((int128_t *)&v0);
        v27 = uu_sync::syncfs::he57a0533702037d5(&v16, v35, v29);
        goto LABEL_460671;
    }
    else
    {
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, v35, g_50f048))
        {
            v27 = uu_sync::sync::h1ff0f9205f7ca55d();
            if (!v27)
            {
                ::0x45ee60::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h14d95892ba184393(&v0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f65eda5a4ca9139(&v9);
                return 0;
            }
LABEL_46068c:
LABEL_46068f:
            ::0x45ee60::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h14d95892ba184393(&v0);
        }
        else
        {
            v18 = v2;
            *((int128_t *)&v16) = *((int128_t *)&v0);
            v27 = uu_sync::fdatasync::h4c99a721be5a0cf3(&v16, v36, v29);
LABEL_460671:
            if (!v27)
            {
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f65eda5a4ca9139(&v9);
                return 0;
            }
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f65eda5a4ca9139(&v9);
        return v27;
    }
}
