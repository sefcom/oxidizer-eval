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
    let v16: Result<struct99, struct24>;  // [bp-0x418], Other Possible Types: struct48, u64
    let v17: Result<struct56, struct16>;  // [bp-0x418]
    let v18: u64;  // [bp-0x410]
    let v19: u64;  // [bp-0x408]
    let v20: u64;  // [bp-0x3e8]
    let v21: u128;  // [bp-0x3e0]
    let v22: u128;  // [bp-0x3d0]
    let v23: u128;  // [bp-0x3c0]
    let v24: u128;  // [bp-0x3b0]
    let v25: u64;  // [bp-0x3a8]
    let v26: u8;  // [bp-0x3a0]
    let v27: u8;  // [bp-0x390]
    let v28: u64;  // [bp-0x380]
    let v29: u64;  // [bp-0x378]
    let v30: u64;  // [bp-0x370]
    let v31: u64;  // [bp-0x368]
    let v32: u8;  // [bp-0x360]
    let v33: u128;  // [bp-0x358]
    let v34: u64;  // [bp-0x348]
    let v35: i64;  // [bp-0x340]
    let v36: u64;  // [bp-0x338]
    let v37: u128;  // [bp-0x330]
    let v38: u8;  // [bp-0x320]
    let v39: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x310], Other Possible Types: struct25
    let v40: u8;  // [bp-0x2d8]
    let v42: u64;  // rbx
    let v43: u128;  // xmm0
    let v44: u128;  // xmm1
    let v45: u64;  // rdx

    v0 = uucore::Args::collect_ignore(a0, a1);
    uu_od::uu_app(&v40);
    v17 = clap_builder::builder::command::Command::try_get_matches_from(&v40, &v0);
    match v17 {
        Err(_) => {
            v42 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
        },
        Ok(_) => {
            v28 = v20;
            memcpy(&v27, &v17, 16);
            memcpy(&v26, &v17, 16);
            v24 = v16;
            v16 = uu_od::OdOptions::new(&v24, v1, v2);
            v42 = v18;
            if let Ok(_) = v16 {
                v13 = v23;
                v43 = *((&v16 as &char + 24) as &i128);
                v44 = *((&v16 as &char + 40) as &i128);
                v11 = v22;
                v9 = v21;
                v7 = v44;
                v6 = v43;
                v3 = v16 as i64;
                v4 = v42;
                v5 = v19;
                v32 = *((&v13 as &char + 10) as &i8);
                v31 = v12;
                v29 = v5;
                v30 = v6 as i64;
                v16 = uu_od::open_input_peek_reader(v7 as i64, v8, v12, v16 as i64, v4);
                v39 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v13 as i64 as i8 + 4, v45);
                v35 = &v16;
                v33 = *(&v39.buf.cap as &i128);
                v34 = v39.len;
                v36 = 4;
                v37 = 0;
                v38 = v15;
                v39 = uu_od::output_info::OutputInfo::new(v13 as i64, v10, v11 as i64, v14 as u64);
                v42 = uu_od::odfunc(&v29, &v33, &v39);
            }
        },
    }
    return v42;
}
