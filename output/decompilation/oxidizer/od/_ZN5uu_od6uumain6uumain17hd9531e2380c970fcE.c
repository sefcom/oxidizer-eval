fn uu_od::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x498]
    let v1: u32;  // [bp-0x490]
    let v2: u64;  // [bp-0x488]
    let v3: u64;  // [bp-0x480]
    let v4: u64;  // [bp-0x478]
    let v5: u64;  // [bp-0x470]
    let v6: u128;  // [bp-0x468]
    let v7: u128;  // [bp-0x458]
    let v8: u32;  // [bp-0x450]
    let v9: u128;  // [bp-0x448]
    let v10: u64;  // [bp-0x440]
    let v11: u128;  // [bp-0x438]
    let v12: u32;  // [bp-0x430]
    let v13: u128;  // [bp-0x428]
    let v14: u8;  // [bp-0x420]
    let v15: u8;  // [bp-0x41f]
    let v16: Result<struct56, struct16>;  // [bp-0x418], Other Possible Types: struct48
    let v17: Result<struct99, struct24>;  // [bp-0x418], Other Possible Types: struct56
    let v18: u64;  // [bp-0x410]
    let v19: u64;  // [bp-0x408]
    let v20: u128;  // [bp-0x3e0]
    let v21: u128;  // [bp-0x3d0]
    let v22: u128;  // [bp-0x3c0]
    let v23: struct56;  // [bp-0x3b0]
    let v24: u64;  // [bp-0x3a8]
    let v25: u64;  // [bp-0x378]
    let v26: u64;  // [bp-0x370]
    let v27: u64;  // [bp-0x368]
    let v28: u8;  // [bp-0x360]
    let v29: u128;  // [bp-0x358]
    let v30: u64;  // [bp-0x348]
    let v31: i64;  // [bp-0x340]
    let v32: u64;  // [bp-0x338]
    let v33: u128;  // [bp-0x330]
    let v34: u8;  // [bp-0x320]
    let v35: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x310], Other Possible Types: struct25
    let v36: u8;  // [bp-0x2d8]
    let v38: u64;  // rbx
    let v39: u128;  // xmm0
    let v40: u128;  // xmm1
    let v41: u64;  // rdx

    v0 = uucore::Args::collect_ignore(a0, a1);
    uu_od::uu_app(&v36);
    v16 = clap_builder::builder::command::Command::try_get_matches_from(&v36, &v0);
    match v16 {
        Err(_) => {
            v38 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
        },
        Ok(v23) => {
            v17 = uu_od::OdOptions::new(&v23, v1, v2);
            v38 = v18;
            if let Ok(_) = v17 {
                v13 = v22;
                v39 = *((&v17 as &char + 24) as &i128);
                v40 = *((&v17 as &char + 40) as &i128);
                v11 = v21;
                v9 = v20;
                v7 = v40;
                v6 = v39;
                v3 = v17 as i64;
                v4 = v38;
                v5 = v19;
                v28 = *((&v13 as &char + 10) as &i8);
                v27 = v12;
                v25 = v5;
                v26 = v6 as i64;
                v16 = uu_od::open_input_peek_reader(v7 as i64, v8, v12, v17 as i64, v4);
                v35 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v13 as i64 as i8 + 4, v41);
                v31 = &v16;
                v29 = *(&v35.buf.cap as &i128);
                v30 = v35.len;
                v32 = 4;
                v33 = 0;
                v34 = v15;
                v35 = uu_od::output_info::OutputInfo::new(v13 as i64, v10, v11 as i64, v14 as u64);
                v38 = uu_od::odfunc(&v25, &v29, &v35);
            }
        },
    }
    return v38;
}
