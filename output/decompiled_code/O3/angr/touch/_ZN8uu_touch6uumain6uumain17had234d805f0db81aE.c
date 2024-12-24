long long uu_touch::uumain::uumain::had234d805f0db81a(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [bp-0x438]
    unsigned long long v1;  // [sp-0x430]
    unsigned int v2;  // [bp-0x428]
    int v3;  // [bp-0x418], Other Possible Types: char
    char v4;  // [bp-0x410]
    int v5;  // [bp-0x408], Other Possible Types: char, unsigned long
    int v6;  // [bp-0x400]
    int v7;  // [sp-0x3f8]
    char v8;  // [bp-0x3f0]
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
    unsigned long v22;  // [sp-0x358], Other Possible Types: unsigned long long
    char v23;  // [bp-0x348]
    unsigned long v24;  // [sp-0x338], Other Possible Types: unsigned long long
    int v25;  // [sp-0x330]
    int v26;  // [sp-0x320]
    int v27;  // [sp-0x310]
    unsigned long long v28;  // [sp-0x300]
    int v29;  // [bp-0x2f8], Other Possible Types: char
    char v30;  // [bp-0x2f0]
    unsigned long long v31;  // [sp-0x2e8], Other Possible Types: unsigned long
    int v32;  // [sp-0x2e0]
    unsigned long long v33;  // [sp-0x2d0]
    char v34;  // [sp-0x2c8]
    char v35;  // [sp-0x2c7]
    char v36;  // [sp-0x2c6]
    char v37;  // [sp-0x2c5]
    unsigned long long v41;  // rax
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rdi
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rdx
    char v47;  // al
    unsigned long long v48[3];  // r14
    unsigned long long v49[3];  // rax
    unsigned long long v50;  // rax
    unsigned long long v51;  // r8
    unsigned long long v52;  // r9

    uu_touch::uu_app::he2376bac0fa38c19(&v29, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::ha5176725ef236000(&v3, &v29, a0, a1);
    if (v11 == 0x8000000000000000)
    {
        v41 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v12);
        return v41;
    }
    v15 = *((long long *)&v9);
    v14 = v7;
    *((int128_t *)&v13) = *((int128_t *)&v5);
    v11 = *((long long *)&v3);
    v12 = *((long long *)&v4);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6fb037217712e1ab(&v29, &v11, _ZN8uu_touch9ARG_FILES17hbdc7e242f959e472E, g_710fe8);
    clap_builder::parser::error::MatchesError::unwrap::h1c4461fc01837743(&v3, _ZN8uu_touch9ARG_FILES17hbdc7e242f959e472E, g_710fe8, &v29);
    if (!v24)
    {
        v41 = uu_touch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hae45ae62db934dad(v44, v45, v46);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h02720ec8677af28d(&v11);
        return v41;
    }
    v28 = *((long long *)&v10);
    *((int128_t *)&v27) = *((int128_t *)&v8);
    *((int128_t *)&v26) = (int128_t)v6;
    v24 = *((long long *)&v3);
    *((int128_t *)&v25) = *((int128_t *)&v4);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8e28339d1e759d2c(&v18, &v24, v43);
    v47 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v11, _ZN8uu_touch7options8NO_DEREF17he03623364051e442E, g_7117f8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbe88d39c3b235506(&v29, &v11, _ZN8uu_touch7options7sources9REFERENCE17h5fa0c0dd04476dc4E, g_7117c8);
    v48 = clap_builder::parser::error::MatchesError::unwrap::hd3b9fb97e49ff54b(_ZN8uu_touch7options7sources9REFERENCE17h5fa0c0dd04476dc4E, g_7117c8, &v29);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5f0c217f54dc65e8(&v29, &v11, _ZN8uu_touch7options7sources9TIMESTAMP17ha471abf40c884a8cE, g_7117d8);
    v49 = clap_builder::parser::error::MatchesError::unwrap::hd3b9fb97e49ff54b(_ZN8uu_touch7options7sources9TIMESTAMP17ha471abf40c884a8cE, g_7117d8, &v29);
    if (v48)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v29, v48[1], v48[2]);
        *((unsigned long *)&v2) = v31;
        *((void*)&v0) = v29;
        goto LABEL_573558;
    }
    if (!v49)
    {
        v0 = 9223372036854775809;
        goto LABEL_573558;
    }
    else
    {
        uu_touch::parse_timestamp::hc2d4dbac2d1693c9(&v29, v49[1], v49[2]);
        if ((long long)v29)
        {
            v41 = *((long long *)&v30);
        }
        else
        {
            v1 = *((long long *)&v30);
            v2 = v31;
            v0 = 0x8000000000000000;
LABEL_573558:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5f0c217f54dc65e8(&v29, &v11, _ZN8uu_touch7options7sources4DATE17h74493e7bb508a5afE, g_7117b8);
            v50 = clap_builder::parser::error::MatchesError::unwrap::hd3b9fb97e49ff54b(_ZN8uu_touch7options7sources4DATE17h74493e7bb508a5afE, g_7117b8, &v29);
            if (!v50)
            {
                v16 = 0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v29, v50);
                v17 = v31;
                *((void*)&v16) = v29;
            }
            v22 = *((long long *)&v2);
            *((int128_t *)&v21) = *((int128_t *)&v0);
            v5 = v17;
            *((int128_t *)&v3) = *((int128_t *)&v16);
            v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v11, _ZN8uu_touch7options9NO_CREATE17h04d7b8b0d46f47bcE, g_7117e8);
            v35 = v47;
            v32 = v21;
            v33 = v22;
            v29 = v3;
            v31 = v5;
            v37 = uu_touch::determine_atime_mtime_change::h8227ed5b93241927(&v11);
            v36 = 0;
            uu_touch::touch::h10e8d27419cb70a1(&v21, *((long long *)&v19), *((long long *)&v20), &v29, v51, v52);
            if ((long long)v21 == 9223372036854775812)
            {
                core::ptr::drop_in_place$LT$uu_touch..Options$GT$::h4d816eb616f730b6(&v29);
                ::0x572030::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::h24afd767c08f5279(&v18);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h02720ec8677af28d(&v11);
                return 0;
            }
            *((int128_t *)&v7) = *((int128_t *)&v23);
            *((int128_t *)&v5) = *((int128_t *)&v22);
            v3 = v21;
            v41 = alloc::boxed::Box$LT$T$GT$::new::h67ddd9556b945e4b(&v3);
            core::ptr::drop_in_place$LT$uu_touch..Options$GT$::h4d816eb616f730b6(&v29);
        }
        ::0x572030::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::h24afd767c08f5279(&v18);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h02720ec8677af28d(&v11);
        return v41;
    }
}
