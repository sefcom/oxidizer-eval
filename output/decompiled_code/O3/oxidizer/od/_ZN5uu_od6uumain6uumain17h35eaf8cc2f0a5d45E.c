fn uu_od::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x498], Other Possible Types: struct24
    let v1: i64;  // [sp-0x480]
    let v3: i64;  // [sp-0x470]
    let v4: i128;  // [sp-0x468]
    let v5: i128;  // [sp-0x458]
    let v6: i128;  // [sp-0x448]
    let v7: i128;  // [sp-0x438]
    let v8: i128;  // [sp-0x428]
    let v9: i384;  // [bp-0x418], Other Possible Types: Result<struct99, struct24>, struct48
    let v13: i128;  // [bp-0x3c0]
    let v14: struct56;  // [sp-0x3b0], Other Possible Types: i64
    let v15: i64;  // [sp-0x3a8]
    let v16: i64;  // [sp-0x378]
    let v17: i64;  // [sp-0x370]
    let v18: i64;  // [sp-0x368]
    let v19: i8;  // [sp-0x360]
    let v20: i128;  // [sp-0x358]
    let v21: i64;  // [sp-0x348]
    let v22: i64;  // [sp-0x340]
    let v23: i64;  // [sp-0x338]
    let v24: i128;  // [sp-0x330]
    let v25: i8;  // [sp-0x320]
    let v26: i200;  // [sp-0x310], Other Possible Types: struct25, struct24
    let v27: i5696;  // [sp-0x2d8], Other Possible Types: struct712
    let v29: i64;  // rsi
    let v30: i64;  // rdx
    let v31: i64;  // rcx
    let v32: i64;  // rax
    let v39: i64;  // r8
    let v40: i64;  // r9

    v0 = uucore::Args::collect_ignore(a0, a1);
    v27 = uu_od::uu_app(v29, v30);
    clap_builder::builder::command::Command::try_get_matches_from(&v9, &v27, &v0, v31);
    if v14 == 0x8000000000000000 {
        v32 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        return v32;
    }
    v14 = struct56 {
        field_0: v33
        field_8: v34
        field_16: v10
        field_32: v11
        field_48: v12
    };
    v9 = uu_od::OdOptions::new(&v14, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    match v9 {
        Err(_) => {
            return v32;
        },
        Ok(_) => {
            v8 = v13;
            v7 = *((&v9 as &char + 72) as &i128);
            v6 = *((&v9 as &char + 56) as &i128);
            v5 = *((&v9 as &char + 40) as &i128);
            v4 = *((&v9 as &char + 24) as &i128);
            v1 = v9;
            v32 = *((&v9 as &char + 8) as &i64);
            v3 = *((&v9 as &char + 16) as &i64);
            v19 = *((&v8 as &char + 10) as &i8);
            v18 = *((&v7 as &char + 8) as &i64);
            v16 = v3;
            v17 = v4;
            v9 = uu_od::open_input_peek_reader(v5, *((&v5 as &char + 8) as &i64), v18, v1, v32);
            v26 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v8 + 4);
            v22 = &v9;
            v20 = v26;
            v21 = *((&v26 as &char + 16) as &i64);
            v23 = 4;
            v24 = 0;
            v25 = *((&v8 as &char + 9) as &i8);
            v26 = uu_od::output_info::OutputInfo::new(v8, *((&v6 as &char + 8) as &i64), v7, *((&v8 as &char + 8) as &i8) as u8 as u64);
            v32 = uu_od::odfunc(&v16, &v20, &v26, v31, v39, v40);
            return v32;
        },
    }
}
