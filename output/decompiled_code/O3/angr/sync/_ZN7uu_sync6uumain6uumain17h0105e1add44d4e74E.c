long long uu_sync::uumain::uumain::h0105e1add44d4e74(unsigned long long a0, unsigned long long a1)
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
    unsigned long long v23;  // rdx
    void* v26;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30[3];  // rax
    unsigned long long v31;  // r12
    unsigned long long v32;  // rbx
    unsigned long long v33;  // rsi
    unsigned long long v34;  // rsi

    uu_sync::uu_app::heb707c7f312af52a(&v16, a1, v23);
    clap_builder::builder::command::Command::try_get_matches_from::h0f71e1e827c1e090(&v4, &v16, a0, a1);
    if (v9 == 0x8000000000000000)
    {
        v26 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v10);
        return v26;
    }
    v13 = *((long long *)&v8);
    *((int128_t *)&v12) = *((int128_t *)&v7);
    *((int128_t *)&v11) = *((int128_t *)&v6);
    v9 = *((long long *)&v4);
    v10 = *((long long *)&v5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5bd6c755031198e1(&v16, &v9, _ZN7uu_sync9ARG_FILES17h0de6b7efc5b75998E, g_510308);
    clap_builder::parser::error::MatchesError::unwrap::h7002662741478b28(&v4, _ZN7uu_sync9ARG_FILES17h0de6b7efc5b75998E, g_510308, &v16);
    if (!*((long long *)&v4) || (*((int128_t *)&v21) = *((int128_t *)&v8), *((int128_t *)&v20) = *((int128_t *)&v7), *((int128_t *)&v18) = *((int128_t *)&v6), *((int128_t *)&v16) = *((int128_t *)&v4), _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf2210abe24d9b5ff(&v14, &v16, v23), *((int128_t *)&v16) = *((int128_t *)&v15), v0 == 0x8000000000000000))
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
    v29 = v2;
    if ((!v29 & (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, _ZN7uu_sync7options4DATA17ha39d08c333026b84E, g_5102f8)))
    {
        ::0x45fce0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1dc5e61ef08c4152(&v4, "--data needs at least one argument", 34);
        v18 = *((long long *)&v6);
        *((int128_t *)&v16) = *((int128_t *)&v4);
        v19 = 1;
        v26 = alloc::boxed::Box$LT$T$GT$::new::hf8a987e2352da603(&v16);
        goto LABEL_4611ef;
    }
    v3 = _ZN7uu_sync7options4DATA17ha39d08c333026b84E;
    v16 = v1;
    v17 = v16 + v29 * 24;
    v30 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h62ec2557fd9fa5c3(&v16);
    if (v30)
    {
        do
        {
            v31 = v30[1];
            v32 = v30[2];
            if ((v30 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h62ec2557fd9fa5c3(&v16), v30))
                goto LABEL_4611ec;
        } while ((v30 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h62ec2557fd9fa5c3(&v16), v30));
    }
    v33 = v3;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, _ZN7uu_sync7options11FILE_SYSTEM17hc0e7a0e4faeca0dbE, g_5102e8))
    {
        v18 = v2;
        *((int128_t *)&v16) = *((int128_t *)&v0);
        v26 = uu_sync::syncfs::h9988d99d4a10be62(&v16, v33, v23);
        goto LABEL_4611d1;
    }
    else
    {
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, v33, g_5102f8))
        {
            v26 = uu_sync::sync::h8cc40bbb2b575b2f();
            if (!v26)
            {
                ::0x45f730::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd56b85f8950f8ede(&v0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h08076dace854e2fd(&v9);
                return 0;
            }
LABEL_4611ec:
LABEL_4611ef:
            ::0x45f730::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd56b85f8950f8ede(&v0);
        }
        else
        {
            v18 = v2;
            *((int128_t *)&v16) = *((int128_t *)&v0);
            v26 = uu_sync::fdatasync::hce4b31347dd23327(&v16, v34, v23);
LABEL_4611d1:
            if (!v26)
            {
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h08076dace854e2fd(&v9);
                return 0;
            }
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h08076dace854e2fd(&v9);
        return v26;
    }
}
