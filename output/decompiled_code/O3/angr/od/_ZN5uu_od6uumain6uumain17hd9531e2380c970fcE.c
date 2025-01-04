long long uu_od::uumain::uumain::hd9531e2380c970fc(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x498]
    char v1;  // [bp-0x490]
    char v2;  // [bp-0x488]
    unsigned long v3;  // [sp-0x480], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x470]
    int v6;  // [sp-0x468]
    int v7;  // [sp-0x458]
    int v8;  // [sp-0x448]
    int v9;  // [sp-0x438]
    int v10;  // [sp-0x428]
    char v11;  // [bp-0x418]
    char v12;  // [bp-0x410]
    char v13;  // [bp-0x408]
    char v14;  // [bp-0x3f8]
    char v15;  // [bp-0x3e8]
    char v16;  // [bp-0x3e0]
    char v17;  // [bp-0x3d0]
    char v18;  // [bp-0x3c0]
    unsigned long v19;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x3a8]
    int v21;  // [sp-0x3a0]
    int v22;  // [sp-0x390]
    unsigned long long v23;  // [sp-0x380]
    unsigned long long v24[3];  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x370]
    unsigned long long v26;  // [sp-0x368]
    char v27;  // [sp-0x360]
    int v28;  // [sp-0x358]
    unsigned long long v29;  // [sp-0x348]
    char *v30;  // [sp-0x340]
    unsigned long long v31;  // [sp-0x338]
    int v32;  // [sp-0x330]
    char v33;  // [sp-0x320]
    char v34;  // [bp-0x310]
    char v35;  // [bp-0x300]
    char v36;  // [bp-0x2d8]
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rdx
    unsigned long v40;  // rcx
    unsigned long v41;  // r8
    unsigned long long v42;  // r9
    unsigned long long v45;  // rax

    uucore::Args::collect_ignore::h6c749d9347c7e8d2(&v0, a0, a1);
    uu_od::uu_app::hbbddbed21fc2c7d3(&v36, v38, v39);
    clap_builder::builder::command::Command::try_get_matches_from::hd12027f76159d4b7(&v11, &v36, &v0, v40, v41, v42);
    if (v19 == 0x8000000000000000)
    {
        v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v20);
    }
    else
    {
        v23 = *((long long *)&v15);
        *((int128_t *)&v22) = *((int128_t *)&v14);
        *((int128_t *)&v21) = *((int128_t *)&v13);
        v19 = *((long long *)&v11);
        v20 = *((long long *)&v12);
        uu_od::OdOptions::new::h0c238bf8480e2d7e(&v11, &v19, *((long long *)&v1), *((long long *)&v2));
        if (v3 == 2)
        {
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbff2e96ca9f96176(&v19);
        }
        else
        {
            *((int128_t *)&v10) = *((int128_t *)&v18);
            *((int128_t *)&v9) = *((int128_t *)&v17);
            *((int128_t *)&v8) = *((int128_t *)&v16);
            *((int128_t *)&v7) = *((int128_t *)&(&v14)[8]);
            *((int128_t *)&v6) = *((int128_t *)&(&v13)[8]);
            v3 = *((long long *)&v11);
            v45 = *((long long *)&v12);
            v5 = *((long long *)&v13);
            v27 = (char)(&v10)[10];
            v26 = (long long)(&v9)[8];
            v24 = v5;
            v25 = (long long)v6;
            uu_od::open_input_peek_reader::h114ec616b3c82f88(&v11, (long long)v7, (long long)(&v7)[8], v26, v3, v45);
            _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h1c962bd1b88deb3c(&v34, (long long)v10 + 4);
            v30 = &v11;
            *((int128_t *)&v28) = *((int128_t *)&v34);
            v29 = *((long long *)&v35);
            v31 = 4;
            *((int128_t *)&v32) = 0;
            v33 = (char)(&v10)[9];
            uu_od::output_info::OutputInfo::new::hafb4075cd97b7856(&v34, (long long)v10, (long long)(&v8)[8], (long long)v9, (char)(&v10)[8]);
            v45 = uu_od::odfunc::hf4c116c67e2cd288(v24, &v28, &v34, v40, v41, v42);
            core::ptr::drop_in_place$LT$uu_od..output_info..OutputInfo$GT$::h04fce5ed85f4782b(&v34);
            core::ptr::drop_in_place$LT$uu_od..inputdecoder..InputDecoder$LT$uu_od..peekreader..PeekReader$LT$uu_od..partialreader..PartialReader$LT$uu_od..multifilereader..MultifileReader$GT$$GT$$GT$$GT$::hfde7c0062cf8f582(&v28);
            core::ptr::drop_in_place$LT$uu_od..peekreader..PeekReader$LT$uu_od..partialreader..PartialReader$LT$uu_od..multifilereader..MultifileReader$GT$$GT$$GT$::h2541bed74aaa9d24(&v11);
            core::ptr::drop_in_place$LT$uu_od..OdOptions$GT$::h2134892c7e473795(&v3);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbff2e96ca9f96176(&v19);
        }
    }
    ::0x476a40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hb97e612f004e4252(&v0);
    return v45;
}
