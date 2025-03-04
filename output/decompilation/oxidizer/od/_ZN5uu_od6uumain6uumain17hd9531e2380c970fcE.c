fn uu_od::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x498]
    let v1: i64;  // [sp-0x480]
    let v2: i64;  // [sp-0x478]
    let v3: i64;  // [sp-0x470]
    let v4: iNone;  // [sp-0x468]
    let v5: iNone;  // [sp-0x458]
    let v6: iNone;  // [sp-0x448]
    let v7: iNone;  // [sp-0x438]
    let v8: iNone;  // [sp-0x428]
    let v9: struct48;  // [sp-0x418], Other Possible Types: Result<struct99, struct16>, char
    let v14: iNone;  // [bp-0x3c0]
    let v15: struct56;  // [bp-0x3b0], Other Possible Types: unsigned long
    let v16: i64;  // [sp-0x3a8]
    let v17: i64;  // [sp-0x378]
    let v18: i64;  // [sp-0x370]
    let v19: i64;  // [sp-0x368]
    let v20: i8;  // [sp-0x360]
    let v21: struct24;  // [sp-0x358]
    let v22: i64;  // [sp-0x340]
    let v23: i64;  // [sp-0x338]
    let v24: iNone;  // [sp-0x330]
    let v25: i8;  // [sp-0x320]
    let v26: struct25;  // [sp-0x310], Other Possible Types: struct24
    let v27: struct712;  // [sp-0x2d8]
    let v36: i64;  // rbx

    v0 = uucore::Args::collect_ignore(a0, a1);
    v27 = uu_od::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v9, &v27, &v0);
    if v15 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        return v36;
    }
    v15 = struct56 {
        field_0: v29
        field_8: v30
        field_16: *(&v11 as &i128)
        field_32: *(&v12 as &i128)
        field_48: *(&v13 as &i64)
    };
    v9 = uu_od::OdOptions::new(&v15, v0.field_8, v0.field_16);
    match v9 {
        Err(_) => {
            return v36;
        },
        Ok(_) => {
            v8 = v14 as i128;
            v7 = *((&v9 as &char + 72) as &i128);
            v6 = *((&v9 as &char + 56) as &i128);
            v5 = *((&v9 as &char + 40) as &i128);
            v4 = *((&v9 as &char + 24) as &i128);
            v1 = v9 as i64;
            v2 = *((&v9 as &char + 8) as &i64);
            v3 = *((&v9 as &char + 16) as &i64);
            v20 = (&v8)[10] as i8;
            v19 = (&v7)[8] as i64;
            v17 = v3;
            v18 = v4 as i64;
            v9 = uu_od::open_input_peek_reader(v5 as i64, (&v5)[8] as i64, v19, v1, v2);
            v26 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v8 as i64 + 4);
            v22 = &v9;
            v21 = v26;
            v23 = 4;
            v24 = 0;
            v25 = (&v8)[9] as i8;
            v26 = uu_od::output_info::OutputInfo::new(v8 as i64, (&v6)[8] as i64, v7 as i64, (&v8)[8] as i8 as u8 as u64);
            return v36;
        },
    }
}
