fn uu_od::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x498], Other Possible Types: i192
    let v1: i64;  // [sp-0x480]
    let v3: i64;  // [sp-0x470]
    let v4: i128;  // [sp-0x468]
    let v5: i128;  // [sp-0x458]
    let v6: i128;  // [sp-0x448]
    let v7: i128;  // [sp-0x438]
    let v8: i128;  // [sp-0x428]
    let v9: i384;  // [sp-0x418], Other Possible Types: Result<struct99, struct16>, struct48
    let v10: i128;  // [bp-0x3c0]
    let v11: struct56;  // [sp-0x3b0]
    let v12: i64;  // [sp-0x3a8]
    let v13: i64;  // [sp-0x378]
    let v14: i64;  // [sp-0x370]
    let v15: i64;  // [sp-0x368]
    let v16: i8;  // [sp-0x360]
    let v17: i192;  // [sp-0x358], Other Possible Types: struct24
    let v18: i64;  // [sp-0x340]
    let v19: i64;  // [sp-0x338]
    let v20: i128;  // [sp-0x330]
    let v21: i8;  // [sp-0x320]
    let v22: struct24;  // [sp-0x310], Other Possible Types: struct25, i200
    let v23: i5696;  // [sp-0x2d8], Other Possible Types: struct712
    let v25: i64;  // rax

    v0 = uucore::Args::collect_ignore(a0, a1);
    v23 = uu_od::uu_app();
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v23, &v0);
    match v9 {
        Err(_) => {
            v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
            return v25;
        },
        Ok(_) => {
            v11 = struct56 {
                field_0: v26
                field_8: v27
                field_16: *((&v9 as &char + 16) as &i128)
                field_32: *((&v9 as &char + 32) as &i128)
                field_48: *((&v9 as &char + 48) as &i64)
            };
            v9 = uu_od::OdOptions::new(&v11, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
            match v9 {
                Err(_) => {
                    return v25;
                },
                Ok(_) => {
                    v8 = v10;
                    v7 = *((&v9 as &char + 72) as &i128);
                    v6 = *((&v9 as &char + 56) as &i128);
                    v5 = *((&v9 as &char + 40) as &i128);
                    v4 = *((&v9 as &char + 24) as &i128);
                    v1 = v9;
                    v25 = *((&v9 as &char + 8) as &i64);
                    v3 = *((&v9 as &char + 16) as &i64);
                    v16 = *((&v8 as &char + 10) as &i8);
                    v15 = *((&v7 as &char + 8) as &i64);
                    v13 = v3;
                    v14 = v4;
                    v9 = uu_od::open_input_peek_reader(v5, *((&v5 as &char + 8) as &i64), v15, v1, v25);
                    v22 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v8 + 4);
                    v18 = &v9;
                    v17 = v22;
                    v19 = 4;
                    v20 = 0;
                    v21 = *((&v8 as &char + 9) as &i8);
                    v22 = uu_od::output_info::OutputInfo::new(v8, *((&v6 as &char + 8) as &i64), v7, *((&v8 as &char + 8) as &i8) as u8 as u64);
                    v25 = uu_od::odfunc(&v13, &v17, &v22) as u64;
                    return v25;
                },
            }
        },
    }
}
