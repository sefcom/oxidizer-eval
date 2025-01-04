long long uu_touch::uumain::uumain::h705f09c8dae5a0ad(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [bp-0x438]
    unsigned long long v1;  // [sp-0x430]
    unsigned int v2;  // [bp-0x428]
    int v3;  // [bp-0x418], Other Possible Types: char, unsigned long long, unsigned long
    int v4;  // [bp-0x410], Other Possible Types: char
    char v5;  // [bp-0x408], Other Possible Types: unsigned long long
    int v6;  // [sp-0x400]
    char v7;  // [bp-0x3f8]
    unsigned long long v8;  // [sp-0x3f0]
    char v9;  // [bp-0x3e8]
    char v10;  // [bp-0x3e0]
    unsigned long v11;  // [sp-0x3d0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x3c8]
    int v13;  // [sp-0x3c0]
    int v14;  // [sp-0x3b0]
    unsigned long long v15;  // [sp-0x3a0]
    unsigned long long v16;  // [bp-0x398]
    unsigned long long v17;  // [sp-0x388]
    char v18;  // [bp-0x380]
    char v19;  // [bp-0x378]
    char v20;  // [bp-0x370]
    int v21;  // [sp-0x368]
    unsigned long long v22;  // [sp-0x358]
    char v23;  // [bp-0x350]
    char v24;  // [bp-0x340]
    unsigned long v25;  // [sp-0x338], Other Possible Types: unsigned long long
    int v26;  // [sp-0x330]
    int v27;  // [sp-0x320]
    int v28;  // [sp-0x310]
    unsigned long long v29;  // [sp-0x300]
    int v30;  // [bp-0x2f8], Other Possible Types: char
    char v31;  // [bp-0x2f0]
    unsigned long long v32;  // [sp-0x2e8], Other Possible Types: unsigned long
    int v33;  // [sp-0x2e0]
    unsigned long long v34;  // [sp-0x2d0]
    char v35;  // [sp-0x2c8]
    char v36;  // [sp-0x2c7]
    char v37;  // [sp-0x2c6]
    char v38;  // [sp-0x2c5]
    unsigned long long v41;  // rax
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rdi
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rdx
    char v46;  // al
    unsigned long long v47[3];  // r14
    unsigned long long v48[3];  // rax
    unsigned long long v49;  // rcx
    unsigned long long v50;  // r8
    unsigned long long v51;  // r9
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax

    uu_touch::uu_app::h6cafa39b57a66b7b(&v30, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h839733911ffe4e3d(&v3, &v30, a0, a1);
    if (v11 == 0x8000000000000000)
    {
        v41 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v12);
        return v41;
    }
    v15 = *((long long *)&v9);
    *((int128_t *)&v14) = *((int128_t *)&v7);
    *((int128_t *)&v13) = *((int128_t *)&v5);
    v11 = v3;
    v12 = *((long long *)&v4);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h219e52a321966872(&v30, &v11, _ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE, g_710d40);
    clap_builder::parser::error::MatchesError::unwrap::h253c999d17ec96d2(&v3, _ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE, g_710d40, &v30);
    if (!v25)
    {
        v41 = uu_touch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h649caa4cf9839cd8(v43, v44, v45);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h082071c536512932(&v11);
        return v41;
    }
    v29 = *((long long *)&v10);
    *((int128_t *)&v28) = *((int128_t *)&(&v7)[8]);
    v27 = v6;
    v25 = v3;
    *((int128_t *)&v26) = *((int128_t *)&v4);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he495c32affd9a0b5(&v18, &v25, v42);
    v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v11, _ZN8uu_touch7options8NO_DEREF17h87e2d6a561434778E, g_711590);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haaca2baeff626b88(&v30, &v11, _ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE, g_7115d0);
    v47 = clap_builder::parser::error::MatchesError::unwrap::ha8b85f67119db88b(_ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE, g_7115d0, &v30);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h153b4a940d494604(&v30, &v11, _ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E, g_7115e0);
    v48 = clap_builder::parser::error::MatchesError::unwrap::ha8b85f67119db88b(_ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E, g_7115e0, &v30);
    if (v47)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v30, v47[1], v47[2]);
        *((unsigned long *)&v2) = v32;
        *((void*)&v0) = v30;
        goto LABEL_573ca8;
    }
    if (!v48)
    {
        v0 = 9223372036854775809;
        goto LABEL_573ca8;
    }
    else
    {
        uu_touch::parse_timestamp::h96cd6cd8bd424ce5(&v30, v48[1], v48[2], v49, v50, v51);
        if ((long long)v30)
        {
            v41 = *((long long *)&v31);
        }
        else
        {
            v1 = *((long long *)&v31);
            v2 = v32;
            v0 = 0x8000000000000000;
LABEL_573ca8:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h153b4a940d494604(&v30, &v11, _ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E, g_7115c0);
            v52 = clap_builder::parser::error::MatchesError::unwrap::ha8b85f67119db88b(_ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E, g_7115c0, &v30);
            if (!v52)
            {
                v16 = 0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v30, v52);
                v17 = v32;
                *((void*)&v16) = v30;
            }
            v22 = *((long long *)&v2);
            *((int128_t *)&v21) = *((int128_t *)&v0);
            v5 = v17;
            *((int128_t *)&v3) = *((int128_t *)&v16);
            v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v11, _ZN8uu_touch7options9NO_CREATE17hab80ce86436bd515E, g_711580);
            v36 = v46;
            v33 = v21;
            v34 = v22;
            *((int128_t *)&v30) = (int128_t)v3;
            v32 = v5;
            v38 = uu_touch::determine_atime_mtime_change::hda9df64dc3778c17(&v11);
            v37 = 0;
            uu_touch::touch::h8e2a06923358d7c5(&v21, *((long long *)&v19), *((long long *)&v20), &v30, v50, v51);
            v53 = (long long)v21;
            if (v3 == 9223372036854775812)
            {
                core::ptr::drop_in_place$LT$uu_touch..Options$GT$::hb83ab5f2538670c9(&v30);
                ::0x572780::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::hca9fb99717cd0aa2(&v18);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h082071c536512932(&v11);
                return 0;
            }
            v8 = *((long long *)&v24);
            *((int128_t *)&v6) = *((int128_t *)&v23);
            *((int128_t *)&v4) = (int128_t)(&v21)[8];
            v3 = v53;
            v41 = alloc::boxed::Box$LT$T$GT$::new::h5aa8999775824872(&v3);
            core::ptr::drop_in_place$LT$uu_touch..Options$GT$::hb83ab5f2538670c9(&v30);
        }
        ::0x572780::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::hca9fb99717cd0aa2(&v18);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h082071c536512932(&v11);
        return v41;
    }
}
